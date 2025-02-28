#include <iostream>
#include <vector>

// memory pools preallocate chunks of memory.
class MemoryPool {
private:
    std::vector<void*> freeBlocks;//array of pointers
    void* pool;
    size_t blockSize;
    size_t blockCount;

public:
    MemoryPool(size_t blockSize, size_t blockCount) : blockSize(blockSize), blockCount(blockCount) {
        pool = std::malloc(blockSize * blockCount);
        if (!pool) throw std::bad_alloc();
        
        // Initialize free blocks list
        for (size_t i = 0; i < blockCount; ++i) {
            freeBlocks.push_back(static_cast<char*>(pool) + i * blockSize);
        }
    }

    ~MemoryPool() {
        std::free(pool);
    }

    void* allocate() { //return pointer of any type
        if (freeBlocks.empty()) {
            throw std::bad_alloc();  // No memory left
        }
        void* block = freeBlocks.back();
        freeBlocks.pop_back();
        return block;
    }

    void deallocate(void* block) {//take pointer of any type to preserve memory
        freeBlocks.push_back(block);
    }
};

struct MyStruct {
    int x, y;
};

int main() {
    MemoryPool pool(sizeof(MyStruct), 10);  // 10 blocks for MyStruct
    
    MyStruct* obj1 = static_cast<MyStruct*>(pool.allocate());
    obj1->x = 42;
    obj1->y = 99;

    std::cout << "obj1: (" << obj1->x << ", " << obj1->y << ")\n";

    pool.deallocate(obj1);

    return 0;
}

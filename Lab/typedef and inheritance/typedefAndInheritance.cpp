#include <iostream>
// #include <cstdint>

// typedef unsigned int uint32_t;
// typedef std::string theString;

class Typedef {

  public:

    //appliying inheritance of uint32_t allow that values of enum overcome a integer of 32 bits (uint32_t)
    enum TransferMode : uint32_t {
      kDisallowCloneAndTransfer = 4294967295,
      kTransferable = 1 << 0,
      kCloneable = 1 << 1,
      kTransferableAndCloneable = kTransferable | kCloneable,
    };

  TransferMode method(){
    uint32_t x = 4294967295;
    // TransferMode y = x;
    std::cout << x << std::endl;
    return kDisallowCloneAndTransfer;
  }
};


int main(){
  // TransferMode variable = 1;
  uint32_t value = 999;

  std::cout << value << std::endl;

  Typedef instance;
  instance.method();

  std::cout << instance.kTransferable << std::endl;


  return 0;
}

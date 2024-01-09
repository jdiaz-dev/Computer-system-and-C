#include <string>
#include <iostream>

using namespace std;

struct Computer {
  int number;
  string brand;
};

int main(){
  struct Computer miPc = {999, "toshiba"};
  char buf[100] ={ 'a', 'b'};
  void *p = buf;

  cout << "miPc = " << buf << endl;
  cout << "p = " << &p << endl;
  // strcpy(p, "Test string");

  // printf("Address: %X\n", &buf);
  // printf("Contents: %c\n", p);

  /* int address = 0x1000;
  int* pcontent = (int*) address;
  int content = *pcontent;
  printf ("Address %p: content %08x\n", pcontent, content); */
  printf("Address: %s\n", buf);  
  cout << "miPc = " << (void*)buf << endl;

  return 0;
}
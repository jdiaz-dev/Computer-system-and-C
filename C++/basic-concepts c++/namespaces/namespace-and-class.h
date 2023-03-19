#include <iostream>
#include <string>
#include "struct-inside-namespace.h"

using namespace std;

struct node_module {
  int version;
  string platform;
  char engine;
};

namespace theNode {
    class NodeJS {
        public:
            node_module GetSavedModuleFromGlobalHandleMap();
    };

    int callingFnFromNameSpace(int num){
      return num + 100;
    };
}

/* #define SENTENCE_MACRO(newVersion, newPlatform, newEngine) printf("hi, you are ugly" + newEngine); */



#define NUMBER_PRO 20
#define MAIN_MACRO(a, b) (a == b);

  nodeEcosystem::FrameworksAndLibraries example = {
    "angular,nestjs", "react"
  };  
  void showTechnologies() {
    
    std::cout << example.frameworks << std::endl;
    
  }                                                  

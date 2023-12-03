#include <iostream>
#include "namespace-and-class.h"
// #include "struct-inside-namespace.h"

node_module theNode::NodeJS::GetSavedModuleFromGlobalHandleMap(){
    struct node_module nodeModule1;
    nodeModule1.version = 16;
    nodeModule1.platform = "linux";
    nodeModule1.engine = '8';

    struct node_module nodeModule2 = {
        20, "linuxPro", 'y'
    };
    
    return nodeModule1;

}

int main()
{

    // it is posible to use a namespace from a file that included another namespaces
    nodeEcosystem::FrameworksAndLibraries faa;
    faa.frameworks = "angular";
    faa.libraries = "react";
    std::cout << "the framework: " << faa.frameworks << std::endl;
    
    theNode::NodeJS nodejs;//instantiating
    node_module nm = nodejs.GetSavedModuleFromGlobalHandleMap();
    // node_module myModule = NodeJS::GetSavedModuleFromGlobalHandleMap();
    std::cout << "platform: " << nm.platform << std::endl;

    /* SENTENCE_MACRO('a','e','i'); */
    
    int booleanResult = MAIN_MACRO(5,5);
    showTechnologies();
    int numberAdded = theNode::callingFnFromNameSpace(4);

    std::cout << NUMBER_PRO << std::endl;
    std::cout << booleanResult << std::endl;
    std::cout << numberAdded << std::endl;
    std::cout << example.frameworks + " from main file" << std::endl;
    std::cout << "Hello super Korah" << std::endl;

}
#include <iostream>
#include "namespace-and-class.h"

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
    theNode::NodeJS nodejs;
    node_module nm = nodejs.GetSavedModuleFromGlobalHandleMap();
    // node_module myModule = NodeJS::GetSavedModuleFromGlobalHandleMap();
    std::cout << nm.platform << std::endl;

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
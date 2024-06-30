#include <iostream>

using namespace std;

#define expanded1()                             \
    cout << "expanded1 " << endl;               \

#define expanded2()                             \
    cout << "expanded2 " << endl;               \


void manageExpansion(char value){
    if(value == 'a'){
        expanded1();
    }else{
        expanded2();
    }
}

int main(){
    char picketValue;
    
    cout << "Enter an char: ";
    cin >> picketValue;

    manageExpansion(picketValue);
    return 0;
}
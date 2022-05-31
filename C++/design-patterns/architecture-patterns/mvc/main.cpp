
#include <iostream>
#include "model.h"
#include "view.h"
#include "controller.h"
#include "common.h"

using namespace std;

//this function will be used as callback
void DataChange(string data) {
  cout << "Data Changes: " << data <<endl; 
}
 

int main(){
  Model model("My Model"); //creating object
  View view(model);

  // register the data-change event
  model.RegisterDataChangeHandler(&DataChange);  

  // binds model and view.
  Controller controller(model, view);

  // when application starts or button is clicked or form is shown...
  controller.onLoad();
  model.SetData("The model is changing");
  return 0;
}
/* 
  to compile
    g++ -o main.exe main.cpp
 */
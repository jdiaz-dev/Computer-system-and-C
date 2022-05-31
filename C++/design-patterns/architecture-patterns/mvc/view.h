#pragma once
#include <iostream>
#include "model.h"

class View {
  private:
    Model model;
  public:
    View(){}
    View(const Model &model){
      this->model = model;
    }
    void SetModel(const Model &model){
      this->model = model;
    }
    void Render(){
      std::cout<< "Model data = " << model.Data() << endl;
    }
};

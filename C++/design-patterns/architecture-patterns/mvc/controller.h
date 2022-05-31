#pragma once
#include "model.h"
#include "view.h"

class Controller {
  private:
    Model model;
    View view;

  public:
    Controller(const Model &model, const View&view){
      this->model = model;
      this->view = view;
    }
    void setModdl(const Model &model){
      this->model = model;
    }
    void setView(const View &view){
      this->view = view;
    }
    // when application starts
    void onLoad(){
      this->view.Render();
    }
};


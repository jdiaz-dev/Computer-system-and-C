#include <iostream>

using namespace std;

enum VehicleType {
  TV_TwoWheeler = 888,
  TV_ThreeWheeler,
  TV_FourWheeler,
};

class Vehicle {
  public:
    virtual void printVehicle() = 0;
    static Vehicle *Create(VehicleType type);


};

class TwoWheeler : public Vehicle {
  public:
    void printVehicle(){
      cout << "I am two wheeler" << endl;
    }
};

class ThreeWheeler : public Vehicle {
  public:
    void printVehicle(){
      cout << "I am three wheeler" << endl;
    }
};

class FourWheeler : public Vehicle { 
    public: 
    void printVehicle() { 
        cout << "I am four wheeler" << endl; 
    } 
}; 

Vehicle *Vehicle::Create(VehicleType type){

  if(type == TV_TwoWheeler)
    return new TwoWheeler();

  else if(type == TV_ThreeWheeler){
    return new ThreeWheeler();

  }else if(type == TV_FourWheeler)
    return new FourWheeler();

  else return NULL;
  
}

class Client {
  private:
    Vehicle *pVehicle;

  public:
    Client(){
      VehicleType type = TV_TwoWheeler;
      std::cout << "checking enum: " << TV_TwoWheeler << std::endl;
      pVehicle = Vehicle::Create(type);
    }

    ~Client(){
      if(pVehicle){
        delete[] pVehicle;
        pVehicle = NULL;
      }
    }
    enum AmountAvailableWheels {
      ONE,
      THREE,
      FIVE = 5
    };

    Vehicle* getVehicle(){
      return pVehicle;
    }
};

int main(){
  Client *pClient = new Client();
  std::cout << "enums: " << pClient->ONE << std::endl;
  Vehicle *pVehicle = pClient->getVehicle();
  pVehicle->printVehicle();

  return 0;
}
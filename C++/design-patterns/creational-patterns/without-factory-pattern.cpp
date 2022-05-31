#include <iostream>

using namespace std;

class Vehicle {
  public:
    virtual void printVehicle() = 0;
};

class TwoWheeler : public Vehicle {
  void printVehicle(){
    cout << "I am two wheleer" << endl;
  }
};

class FourWheeler : public Vehicle {
  public:
    void printVehicle() {
      cout << "I am four wheleer" << endl;

    }
};

// Client class 
class Client {
  private:
    Vehicle *pVehicle;

  public:

    // Client doesn't explicitly create objects 
    // but passes type to factory method "Create()" 
    Client(int type){
      // Client explicitly creates classes according to type 
      if(type == 1){
        pVehicle = new TwoWheeler();
      } else if (type == 2){
        pVehicle = new FourWheeler();
      }else{
        pVehicle = NULL;
      }
    }

    //destructor
    ~Client(){
      cout << pVehicle << endl; //displaying memory address of pVehicle

      if (pVehicle){
        delete[] pVehicle; 
        pVehicle = NULL;//removing pVehicle 
        cout << pVehicle << endl; 
      }

    }

    Vehicle *getVehicle(){
      return pVehicle;
    }
};

int main(){
  Client *pClient = new Client(1);
  Vehicle *pVehicle = pClient->getVehicle(); 
  pVehicle->printVehicle();
  pClient->~Client();
  return 0;
}

//see destructor videos urgently
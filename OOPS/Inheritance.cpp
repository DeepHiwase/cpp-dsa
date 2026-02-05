#include <iostream>
#include <string>

using namespace std;

class Vehicle
{
  // access specifier not specified -> so by default it becomes `private`
protected:
  string name;

public:
  string model;
  int noOfTyres;

  Vehicle(string name, string model, int noOfTyres)
  {
    cout << "Vehicle ctor called" << endl;
    this->name = name;
    this->model = model;
    this->noOfTyres = noOfTyres;
  }

public:
  string getName()
  {
    return this->name;
  }

  void start_engine()
  {
    cout << "Engine is starting..." << " " << this->name << " " << this->model << endl;
  }
  void stop_engine()
  {
    cout << "Engine is stopping..." << " " << this->name << " " << this->model << endl;
  }

  ~Vehicle()
  {
    cout << "Vehicle dtor called" << endl;
  }
};

class Car : public Vehicle
{
protected:
  int noOfDoors;
  string transmissionType;

public:
  Car(string name, string model, int noOfTyres, int noOfDoors, string transmissionType) : Vehicle(name, model, noOfTyres)
  {
    cout << "Car ctor called" << endl;
    this->noOfDoors = noOfDoors;
    this->transmissionType = transmissionType;
  }

  void start_ac()
  {
    // cout << "AC has started of " << this->name << endl;
    cout << "AC has started of " << this->getName() << endl;
  }

  ~Car()
  {
    cout << "Car dtor called" << endl;
  }
};

class MotorCycle : public Vehicle
{
protected:
  string handleBarStyle;
  string suspensionType;

public:
  MotorCycle(string name, string model, int noOfTyres, string handleBarStyle, string suspensionType) : Vehicle(name, model, noOfTyres)
  {
    cout << "MotorCycle ctor called" << endl;
    this->handleBarStyle = handleBarStyle;
    this->suspensionType = suspensionType;
  }

  void wheelie()
  {
    cout << "Bike is doing Wheeelie..." << endl;
  }

  ~MotorCycle()
  {
    cout << "MotorCycle dtor called" << endl;
  }
};

int main()
{
  Car A("Maruti 800", "LXI", 4, 4, "Manual");
  A.start_engine();
  A.start_ac();
  A.stop_engine();

  MotorCycle M("BMW", "VXI", 2, "U", "Hard");
  M.start_engine();
  M.wheelie();
  M.stop_engine();

  return 0;
}
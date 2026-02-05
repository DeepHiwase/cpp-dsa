#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
  int id;
  string name;
  int age;
  int noOfSubjects;

private:
  int *gpa;
  string gf;

public:
  Student()
  {
    cout << "Student default ctor called..." << endl;
  }

  Student(int id, string name, int age, int noOfSubjects, float gpa, string gf)
  {
    cout << "Student parameterized ctor called..." << endl;
    this->id = id;
    this->name = name;
    this->age = age;
    this->noOfSubjects = noOfSubjects;
    this->gpa = new int(gpa);
    this->gf = gf;
  }

  Student(const Student &srcObj)
  {
    cout << "Student copy ctor called..." << endl;
    this->id = srcObj.id;
    this->name = srcObj.name;
    this->age = srcObj.age;
    this->noOfSubjects = srcObj.noOfSubjects;
    this->gpa = srcObj.gpa;
    this->gf = srcObj.gf;
  }

  void study()
  {
    cout << this->name << " studying..." << endl;
  }

  void sleep()
  {
    cout << this->name << " sleeping..." << endl;
  }

  void bunk()
  {
    cout << this->name << " bunking..." << endl;
  }

  ~Student()
  {
    cout << this->name << " student dtor called..." << endl;
    delete this->gpa;
  }

private:
  void chattingWithGF()
  {
    cout << this->name << " chatting with gf..." << endl;
  }
};

int main()
{
  Student A(1, "Ranu", 17, 7, 7.8, "Rina");
  cout << A.age << endl;
  // cout << A.gf << endl; // ❌ error accessing private member
  // A.chattingWithGF(); // ❌ error accessing private method

  return 0;
}
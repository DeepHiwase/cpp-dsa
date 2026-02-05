#include <iostream>
using namespace std;

// capital name is good convention for class name
class Student
{
public:
  // Attributes
  int id;
  string name;
  int age;
  int noOfSubjects;
  int *gpa; // now here dynamic memory allocation -> so we have to manually delete with dtor -> use of dtor we defined 💀 IMP

  // ctor: Default ctor -> by c++ compiler, when instance created and ctor manually not defined
  Student()
  {
    cout << "Student default ctor called..." << endl;
  }

  // ctor: Parameterized ctor
  Student(int id, string name, int age, int noOfSubjects, float gpa)
  {
    cout << "Student parameterized ctor called..." << endl;
    this->id = id;
    this->name = name;
    this->age = age;
    this->noOfSubjects = noOfSubjects;
    this->gpa = new int(gpa); // delete this dynamically allocated location with new - in dtor
  }

  // ctor: copy ctor
  // const -> not to change the values of parameter -> not syntax part - just good practice
  // pass src object by reference
  Student(const Student &srcObj)
  {
    cout << "Student copy ctor called..." << endl;
    this->id = srcObj.id;
    this->name = srcObj.name;
    this->age = srcObj.age;
    this->noOfSubjects = srcObj.noOfSubjects;
  }

  // Behaviours / Methods / Functions
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

  // dtor -> added and called by c++ compiler when instance is deleted, only on dtor, you can manupulate its defination -> good coder - define dtor even if its added by c++ compiler auto
  ~Student()
  {
    cout << this->name << " student dtor called..." << endl;
    // delete manually which are dynamically allocated
    delete this->gpa; // as this was assign dynamically 
  }
};

int main()
{
  // Student A; // create instance A of class Student
  // A.id = 1;
  // A.name = "Ranu";
  // A.age = 16;
  // A.noOfSubjects = 6;

  // A.study();
  // A.bunk();
  // A.sleep();

  // Student B;
  // B.id = 1;
  // B.name = "Rahul";
  // B.age = 16;
  // B.noOfSubjects = 6;

  // B.bunk();

  // Parameterized ctor
  Student A(1, "Ranu", 16, 6, 1.2); // static memory allocation -> defined object on Stack
  Student B(2, "Rahul", 12, 6, 3.6);

  cout << A.name << " " << A.age << endl; // values can be access with dot notation

  A.bunk();
  B.sleep();

  // int a = 6;
  // int b = a; // here it automatically works, but for class case, we need to define copy ctor - to work like it
  // copy ctor
  Student C = A; // ✅ A will go as parameter
  Student D(A);  // ✅
  cout << C.name << " " << C.age << endl;

  // Dynamic memory allocation, or Student ptr -> defined on Heap
  Student *E = new Student(5, "Babban", 14, 7, 9.8);
  cout << E->name << " " << E->age << endl; // values can be access only with arrow syntax
  E->study();
  // but now its defined dynamically -> you have to manually delete it as no dtor will be called by default -> dynamic memory deallocation
  delete E; // 💀 -> now called dtor to delete instance of class // IMP - not to forgot to delet manually which are dynamic allocated

  return 0; // dtor called as you are going out of scope and ending main programming
}
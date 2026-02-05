#include <iostream>
#include <string>

using namespace std;

class Employee
{
protected:
  string name;
  int employeeId;

public:
  Employee(const string &name, int employeeId) : name(name), employeeId(employeeId) // same as using this in function body
  {
    cout << "Employee ctor called" << endl;
    // this->name = name;
    // this->employeeId = employeeId;
  }

  void display()
  {
    cout << "Employee Id: " << this->employeeId << " Name: " << this->name << endl;
  }

  ~Employee()
  {
    cout << "Employee dtor called" << endl;
  }
};

class Developer : public Employee
{
private:
  string progLanguage;

public:
  Developer(const string &name, int employeeId, const string &progLanguage) : Employee(name, employeeId)
  {
    cout << "Developer ctor called" << endl;
    this->progLanguage = progLanguage;
  }

  void show()
  {
    cout << "Specialization: Developer, " << this->name << " shows Programming skills in " << this->progLanguage << endl;
  }

  ~Developer()
  {
    cout << "Developer dtor called" << endl;
  }
};

class ProjectManager
{
protected:
  string projectManaged;

public:
  ProjectManager(const string &project) : projectManaged(project)
  {
    cout << "ProjectManager ctor called" << endl;
  }

  void manageProject()
  {
    cout << "Project Manager managing project: " << this->projectManaged << endl;
  }

  ~ProjectManager()
  {
    cout << "ProjectManager dtor called" << endl;
  }
};

class TeamLead
{
protected:
  int teamSize;

public:
  TeamLead(int teamSize) : teamSize(teamSize)
  {
    cout << "TeamLead ctor called" << endl;
  }

  void leadTeam()
  {
    cout << "Team Lead leading a team of " << this->teamSize << " members." << endl;
  }

  ~TeamLead()
  {
    cout << "TeamLead dtor called" << endl;
  }
};

class TechLead : public Employee, public ProjectManager, public TeamLead
{
public:
  TechLead(const string &name, int employeeId, string projectManaged, int teamSize) : Employee(name, employeeId), ProjectManager(projectManaged), TeamLead(teamSize)
  {
    cout << "TechLead ctor called" << endl;
  }

  void displayInfo()
  {
    cout << "Employee Name: " << this->name << endl;
    cout << "Employee Id: " << this->employeeId << endl;
    cout << "Manage team size: " << this->teamSize << endl;
    cout << "Project managing: " << this->projectManaged << endl;
  }

  ~TechLead()
  {
    cout << "TechLead dtor called" << endl;
  }
};

int main()
{
  // Single Inheritance
  // Employee <- Developer
  // Developer dev("Deep Hiwase", 101, "C++");
  // dev.display();
  // dev.show();

  // Multiple Inheritance
  TechLead techlead("Anna Ai", 202, "Project Secret Mission", 4);
  techlead.displayInfo();

  return 0;
}
#include "Student.h"
#include <iostream>
#include <cstring>
using namespace std;

void Student :: assignDetails(int stID, char sName[])
{
  studentId = stID;
  strcpy(name, sName);
}
// Display StudentId and Name
void Student::display() 
{
  cout << "-----------------------" << endl;
  cout << "Student ID : " << studentId << endl;
  cout << "Student name : " << name << endl;
  cout << "-----------------------" << endl;
  
}
#include <iostream>
#include <string>
using namespace std;

class student
{
  int rollno;
  string name;
  float marks_MCD;
  float marks_MFC;
  float marks_CT;
  float total;
  float percent;

public:
void acceptDetails()
{
 cout << "Enter RollNo";
 cin >> rollno;
 cout << "Enter Name:";
 cin >> name;
 cout << "Enter Marks Of MCD";
 cin >> marks_MCD;
 cout << "Enter Marks Of MFC";
 cin >> marks_MFC;
 cout << "Enter Marks of CT";
 cin >> marks_CT;
}
 void calcResult()
 {
  total = marks_MCD + marks_MFC + marks_CT;
  percent = ( total / 300 ) * 100;
  }
 void displayInfo()
 {
  cout << "RollNo is:" << rollno << endl;
  cout << "Name is:" << name << endl;
  cout << "Marks Of MCD:" << marks_MCD << endl;
  cout << "Marks Of MFC:" << marks_MFC << endl;
  cout << "Marks Of CT:" << marks_CT << endl;
  cout << "Total is:" << total << endl;
  cout << "Percent is:" << percent << endl;
 }
}; 
 int main ()
{
  student s1;
  s1.acceptDetails();
  s1.calcResult();
  s1.displayInfo();

 return 0;
}    

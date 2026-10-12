#include <iostream>
#include <string>
using namespace std;
class Rectangle
{
 private:
  float length, breadth, area, perimeter;
  public:
   void getDimensions()
  {
    cout << "Enter Length Of Rectangle:";
    cin >> length;
    cout << "Enter Breadth Of Rectangle:";
    cin >> breadth; 
  }
   void calcArea()
  {
    area = length * breadth;
  }
   void calcPerimeter()
  {
    perimeter = 2*(length+breadth);  
  } 
    void Display()
    {
      cout << "Length is:" <<length<<endl;
      cout << "Breadth is:" <<breadth<<endl;
      cout << "Area is:" <<area<<endl;
      cout << "Perimeter is:" <<perimeter<<endl;
}      
}; 
 int main ()
{
 Rectangle r1;
 r1.getDimensions();
 r1.calcArea();
 r1.calcPerimeter();
 r1.Display();

  return 0;
}   

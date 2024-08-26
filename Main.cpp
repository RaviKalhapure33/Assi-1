#include<iostream>
#include<string>
using namespace std;

class Car {
public:
string brand;
string model;
int year;
};

int main() {
// Create an object of Car
Car carObj1;
carObj1.brand = " Mahindra";
carObj1.model = " Scorpio ";
carObj1.year =  2002;

// Create another object of Car
Car carObj2;
carObj2.brand = " Bmw ";
carObj2.model = " F90 m5 ";
carObj2.year =  2017 ;
  
  //print attribute values
  
  cout<<carObj1.brand<<""<<carObj1.model<<""<<carObj1.year<<endl;
  cout<<carObj2.brand<<""<<carObj2.model<<""<<carObj2.year<<endl;
  
  return 0;
}
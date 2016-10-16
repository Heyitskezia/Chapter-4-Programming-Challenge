#include<iostream>
using namespace std;

int main()
{
 double weight, height, BMI;

 cout << "FIND OUT YOUR BODY MASS INDEX" << endl ;

 cout << "\nPlease enter your weight (in pounds): " ;
 cin >> weight;
 cout << "\nPlease enter your height (in inches): " ;
 cin >> height;

 BMI = (weight * 703) / (height * height) ;

 if(BMI < 18.5)
 cout << "\nI'm sorry but YOU ARE UNDERWEIGHT" ;
 if(BMI >= 18.5 && BMI <= 25)
 cout << "\nCONGRATULATIONS YOUR WEIGHT IS PERFECT" ;
 if(BMI > 25)
 cout << "\nI'm sorry but YOU ARE OVERWEIGHT" ;

 return 0;
}

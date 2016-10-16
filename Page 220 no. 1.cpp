#include<iostream>
using namespace std;

int main()
{
 double num1, num2;
 
 cout << "FIND OUT WHICH NUMBER IS LARGER" << endl << endl ;

 cout << "Please input two numbers ";
 cin >> num1 >> num2;

 if(num1 > num2)
 cout << "The larger number is " << num1 << endl << endl;
 else
 cout << "The larger number is " << num2 << endl << endl;

 return 0;
}

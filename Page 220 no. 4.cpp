#include<iostream>
using namespace std;

int main()
{
 double length1, length2, width1, width2, area1, area2;

 cout << "FIND OUT WHICH RECTANGLE AREA IS GREATER" << endl << endl ;

 cout << "Please input the length of rectangle 1: " ;
 cin >> length1;

 cout << "Please input the width of rectangle 1: " ;
 cin >> width1;

 cout << "Please input the length of rectangle 2: " ;
 cin >> length2 ;

 cout << "Please input the width of rectangle 2: " ;
 cin >> width2;

 area1 = length1 * width1;
 area2 = length2 * width2;

 if(area1 > area2)
 cout << "\nThe area of rectangle 1 is greater than the area of rectangle 2" ;
 
 else if(area2 > area1)
 cout << "\nThe area of rectangle 2 is greater than the area of rectangle 1" ;
 
 else if(area1 == area2)
 cout << "\nBoth rectangle area are the same10" ;

 return 0;
}

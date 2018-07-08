#include <iostream>

using namespace std;

int main()
{ 
 int a;
 int b;
 int x,z,y;

 cin>>a;
 cin>>b;
 y = a;
 while(a>=b)
 {
 	z = a/b;
 	a = z +(a%b);
 	y = y + z;
 }
 cout<<y;

 return 0;
}
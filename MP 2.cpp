#include <iostream>
#include<conio.h>
#include <cmath>
#define PI 3.14159265
using namespace std;
 
double angle(double a,double b,double c)
{
	double theta = acos((pow(a,2)+pow(b,2)-pow(c,2))/(2*a*b))*180/PI;
	return theta;
}

int main()
{
	double a,b,c;
	double A,B,C;
	double perim, area, p;
// Enter the value of the sides
	cout<<"Input 1st side: "; cin>>a;
	cout<<"Input 2nd side: "; cin>>b;
	cout<<"Input 3rd side: "; cin>>c;

	if(a+b>c && b+c>a && c+a>b){
		A=angle(b,c,a);
		B=angle(c,a,b);
		C=180-A-B;

		cout<<"Angle A: "<<A<<endl;
		cout<<"Angle B: "<<B<<endl;
		cout<<"Angle C: "<<C<<endl;
// To determine what type of triangle
		
		if(a == b && a == c && b == c)
		  cout<<"Equilateral Triangle"<<endl;
		else if(a != b && a != c && b != c)
		  cout<<"Scalene Triangle"<<endl;
		else
		  cout<<"Isosceles Triangle"<<endl;
		
		perim = a + b + c;
		p=.5*perim;
		area=sqrt(p *(p - a)*(p - b)*(p - c)); 
// To determine the area and the perimeter of the triangle		
		cout<<"Area: "<<area<<endl;
		cout<<"Perimiter: "<<perim<<endl;
		
// To determine if it is a Acute, Obtuse or Right triangle		
		if(A>0 && A<90 && B>0 && B<90 && C>0 && C<90)
		  cout<<"Acute Triangle"<<endl;
		else if(A>90 || B>90 || C>90)
		  cout<<"Obtuse Triangle"<<endl;
		else if(a*a+b*b==c*c || b*b+c*c==a*a || c*c+a*a==b*b)
		  cout<<"Right Triangle"<<endl;
	}
	// Will appear if there is no correct value entered
	else
		cout<<"Not a triangle";

	return 0;
}
// First attempt 20 20 20
// Second attempt 30 40 50
//Third attempt 40 45 40
//Fourth attempt 30 70 90
//Fifth attempt 40 45 45



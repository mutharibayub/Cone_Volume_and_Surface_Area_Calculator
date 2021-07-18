//Mutharib(i200476) assignment 1

#include <iostream>
#include <cmath>
using namespace std;
int main(){
	
	double h,s,r,V,A;	//for a cone.. h=height, s=slant height, r=radius, V=volume, A=surface area
	const float PI=3.14;	//Declaring constant value for PI
	cout<<"Enter values of height, slant height and radius respectively\n(separated by space):\t";
	cin>>h>>s>>r;		//Taking inputs for height,slant height and radius
	V=(PI*pow(r,2)*h)/3;	//Calculating the volume using formula
	A=(PI*pow(r,2))+(PI*r*s);	//Calculating the Surface area using formula
	cout<<"Volume is:\t"<<V<<"\nSurface Area is:\t"<<A<<endl;	//Printing the Volume and Surface area
	
	return 0;
}

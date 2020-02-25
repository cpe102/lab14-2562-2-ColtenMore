#include <iostream>
using namespace std;


int main(){
	//Write your code here.
	int a=5;
	string b="A";
	string &c=b;
	int *x=&a;
	string *y=&b;
	int *z=x;
	cout<<"a = "<<a<<"\nb = "<<b<<"\nc = "<<c<<"\nx = "<<x<<"\ny = "<<y<<"\nz = "<<z;
	cout<<"\n\na = "<<&a<<"\nb = "<<&b<<"\nc = "<<&c<<"\nx = "<<&x<<"\ny = "<<&y<<"\nz = "<<&z;
	c="F";
	cout<<"\n\na = "<<a<<"\nb = "<<b<<"\nc = "<<c<<"\nx = "<<x<<"\ny = "<<y<<"\nz = "<<z;
	*y="W";
	cout<<"\n\na = "<<a<<"\nb = "<<b<<"\nc = "<<c<<"\nx = "<<x<<"\ny = "<<y<<"\nz = "<<z;
	*x=6;
	cout<<"\n\na = "<<a<<"\nb = "<<b<<"\nc = "<<c<<"\nx = "<<x<<"\ny = "<<y<<"\nz = "<<z;
	*z=7;
	cout<<"\n\na = "<<a<<"\nb = "<<b<<"\nc = "<<c<<"\nx = "<<x<<"\ny = "<<y<<"\nz = "<<z;

	return 0;
}

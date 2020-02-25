#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int &,int &, int &, int &);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(a,b,c,d);
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

//Write definition of shuffle() here 
void shuffle(int &w,int &x,int &y,int &z){
	int arr[]={w,x,y,z};
	int j,k;
	for(int i=0; i<10; i++){
		j=rand()%4;
		k=rand()%4;

		int temp=arr[j];
		arr[j]=arr[k];
		arr[k]=temp;
	}
	w=arr[0];
	x=arr[1];
	y=arr[2];
	z=arr[3];
}

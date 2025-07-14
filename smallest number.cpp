#include<iostream>
using namespace std;
int main()
{
	int x,y,z;
	int smallest;
	
	cout<<"enter the first number:    ";
	cin>>x;
	cout<<"enter the second number:    ";
	cin>>y;
	cout<<"enter the third number:    ";
	cin>>z;
	
	if(x<=y && x<=z){
	cout<<"the first number is the smallest one!";
	}
	else if(y<=x && y<=z){
	cout<<"the second number is the smallest one!";
	}
	else {
    cout<<"the third number is the smallest one!";
	}
	return 0;
}
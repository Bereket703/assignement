#include<iostream>
using namespace std;
int main()
{
	double num1,num2;
	char sign;
	double result;
	
	cout<<"enter the first number:  ";
	cin>>num1;
	cout<<"select the operator(+,-,*,/) !"<<endl;
	cin>>sign;
	cout<<"enter the second number:  ";
	cin>>num2;
	

	switch(sign){
		case'+': result=num1+num2; cout<<"the additon of the number is: "<<endl<<result;
		break;
		
	
		case'-': result=num1-num2; cout<<"the substructio of the number is: "<<endl<<result;
		break;
		
	
		case'*': result=num1*num2; cout<<"the multipication of the number is: "<<endl<<result;
		break;
		
	
		case'/': result=num1/num2; cout<<"the division of the number is: "<<endl<<result;
		break;
		
	default: cout<<"invalid operator! ";
		
	}
	
	return 0;
}
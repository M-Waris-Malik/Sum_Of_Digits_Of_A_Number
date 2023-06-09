#include <iostream>
using namespace std;

int main(){
	int number, digit, sum=0;
	cout<<"C++ program for sum of digits of a number"<<endl;
	cout<<"-----------------------------------------"<<endl;
	while(true){
		cout<<"Enter 1 for enter number or 0 for exit: ";
		int choice;
		cin>>choice;
		if(choice==1){
			cout<<"Enter a positive number: "; cin>>number;
			
		while(number > 0){
			digit= number % 10;
		sum = sum +digit;
		number= number/10;
		
	}
		cout<<"Sum of digits: "<<sum<<endl;
		}//if
		else if(choice==0){
			exit(0);
		}
	}//while
	
}//main

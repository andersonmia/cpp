#include<iostream>
using namespace std;

int  main(){
	
	int num1 = 0, num2 = 1, num3, length, i;
	cout << "This is a program to print out the fibonacci series.\nEnter the length of the series you want:";
	cin >> length;
	
	for(i = 0; i < length; i++){
		num3 = num1 + num2;
		num1 = num2;
		num2 = num3;
		cout << "The " << i+1 << "th number is: " << num3 << "\n";
	}
	
	return 0;
}

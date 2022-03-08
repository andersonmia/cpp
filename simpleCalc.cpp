#include<iostream>
using namespace std;


int main(){
	int x,y,result;
	char operation;
	
	cout << "Enter the first number: ";
	cin >> x;
	
	cout << "Enter the operator: ";
	cin >> operation;
	
	cout << "Enter the second number: ";
	cin >> y;
	
	switch(operation){
		case '+':
			result = x + y;
			cout << "The sum of ";
			cout << x;
			cout << " and";
			cout << y;
			cout << " is ";
			cout << result;
			break;
		case '-':
			if(x>y){			
			result = x - y;
		}else{
			result = y -x;
		}
			cout << "The difference between ";
			cout << x;
			cout << " and";
			cout << y;
			cout << " is ";
			cout << result;
			break;
		case '/':
			if(x>y){			
			result = x/y;
			}else{
				result = y/x;
			}
			cout << "The quotient of ";
			cout << x;
			cout << " and";
			cout << y;
			cout << " is ";
			cout << result;
			break;
		case '*':
			result = x * y;
			cout << "The product of ";
			cout << x;
			cout << " and";
			cout << y;
			cout << " is ";
			cout << result;
			break;
		default:
			cout << "Invalid operator";
			break;
	}
	
	
	
	
}



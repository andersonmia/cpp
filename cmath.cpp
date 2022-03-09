#include<iostream>
#include<cmath>
#include<string>
using namespace std;
int main(){
	int x;
	string no;
	float y,z,result;
	string sqrts = "squareroot";
	string cs = "cosine";
	string sn = "sine";
	string tn = "tangent";
	string ceiler = "round Up";
	string floors = "round Down";
	string rounds = "round Off";
	string cbrts = "cube root";
	string maximum = "maximum";
	string minimum = "minimum";
	string power = "first number power second number";

	cout << 1 << "." << sqrts << "\n";
		 
	cout << 2 << "." << cs <<"\n";	
	 
	cout << 3 << "." << sn << "\n";
	 
	cout << 4 << "." << tn <<"\n";
	 
	cout << 5 << "." << ceiler <<"\n";
	 
	cout << 6 << "." << floors <<"\n";
	 
	cout << 7 << "." << rounds <<"\n";
	 
	cout << 8 << "." << cbrts <<"\n";
	 
	cout << 9 << "." << maximum <<"\n";	
	 
	cout << 10 << "." << minimum <<"\n";	
	 
	cout << 11 << "." << power <<"\n";	
		
	cout << "\nEnter the number corresponding to the operation you want to use: " << "\n";
	cin >> x;
				
	switch(x){

		case 1:
			cout << "Enter the number to find the square root: ";
			cin >> y;
			result = sqrt(y);
			cout << "The square root of " << y << " is: "<< result;
			break;
		case 2:
			cout << "Enter the number to find the cosine: ";
			cin >> y;
			result = cos(y);
			cout << "\nThe cosine of " << y << " is: "<< result;
			break;
		case 3:
			cout << "Enter the number to find the sine: ";
			cin >> y;
			result = sin(y);
			cout << "\nThe sine of " << y << " is: " << result;
			break;
		case 4:
			cout << "Enter the number to find the tangent: ";
			cin >> y;
			result = tan(y);
			cout << "Tan " << y << " is:  "<< result;
			break;
		case 5:
			cout << "Enter the number to find the round up: ";
			cin >> y;
			result = ceil(y);
			cout << "\nThe answer is: " << result;
			break;
		case 6:
			cout << "Enter the number to find the round down: ";
			cin >> y;
			result = floor(y);
			cout << "\nThe answer is: " << result;
			break;
		case 7:
			cout << "Enter the number to find the round off: ";
			cin >> y;
			result = round(y);
			cout << "\nThe answer is: "<< result;
			break;
		case 8:
			cout << "Enter the number to find the cube root: ";
			cin >> y;
			result = cbrt(y);
			cout << "\nThe cube root of" << y << " is: "<< result;
			break;
		case 9:
			cout << "Enter the first number: ";
			cin >> y;
			cout << "\nEnter the second number: ";
			cin >> z;
			result = max(y,z);
			cout << "\nThe greater number is: " << result;
			break;
		case 10:
			cout << "Enter the first number: ";
			cin >> y;
			cout << "\nEnter the second number: ";
			cin >> z;
			result = min(y,z);
			cout << "\nThe samller number is: " << result;
			break;
		case 11:
			cout << "Enter the first number: ";
			cin >> y;
			cout << "\nEnter the second number: ";
			cin >> z;
			result = pow(y,z);
			cout << y << " power " << z << " is: "<< result;
			break;
		default:
			no =  "\n Invalid request!";
			cout << no;			
			break;
	}


	return 0;
}

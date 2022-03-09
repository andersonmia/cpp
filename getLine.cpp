#include<iostream>
#include<string>
using namespace std;

int main(){
	string fullname;
	cout << "Enter your full name: ";
	getline(cin,fullname);
	cout << "Your full name is: " << fullname;
	return 0;
	
}

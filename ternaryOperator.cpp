#include<iostream>
#include<string>
using namespace std;

int main(){
	string gender;
	cout << "Enter your gender: ";
	cin>> gender;
	
	string result = (gender == "female") ? "You are a female" : "You not female";
	cout << result;
	
return 0;
}

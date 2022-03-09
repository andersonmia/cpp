#include <iostream>
#include <string>
using namespace std;

int main(){
	string firstname = "ANDERSON";
	string lastname = " Mia";
	string fullname = firstname.append(lastname);
	cout << fullname;
	
	// you can also concantenate using the + sign
	string hisfname = "ALEXANDER ";
	string hislname = "Xavier";
	string hisfullname = hisfname + " " + hislname;
	cout << "\n" << hisfullname;
	
	return 0;
}

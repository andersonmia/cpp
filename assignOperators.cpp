#include<iostream>
using namespace std;
int main(){
	int w = 5,x = 5,y = 5,z = 5;
	w |= 3;
	x &= 3;
	y >>= 3;
	z <<= 3;
	
	cout << "The value of w |= 3 is: " << w;
	cout << "\nThe value of x &= 3 is: " << x;
	cout << "\nThe value of y >>= 3 is: " << y;
	cout << "\nThe value of z <<= 3 is: " << z;
	
	return 0;
}

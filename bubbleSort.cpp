#include<iostream>
using namespace std;

void bubblesort(int array[],int n){
	int i,j,holder;
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			if(array[j] > array[j+1]){
				holder = array[j];
				array[j] = array[j+1];
				array[j+1] = holder;
			}
		}
	}
	
	cout << "Array in ascending order is: ";
	for(i = 0; i < n; i++){
		cout << array[i] << " ";
	}
}

int main(){
	int n,arr[n], i;
	
	cout << " Enter the number of elements: ";
	cin >> n;
	
	for(i = 0; i < n; i++){
		cout << "Enter the element no." << i+1 << ": ";
		cin >> arr[i];
	}
	bubblesort(arr,n);
}

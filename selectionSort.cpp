#include<iostream>
using namespace std;

void selectionSort(int array[],int n){
	int min = 0;
	int i, j;
	
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			if(array[j] < min){
				min = array[j];
			}
		}
	}
}

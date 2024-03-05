#include<iostream>
using namespace std;

int main(){
	
	int array[10];
	for(int i=0; i<7; i++)
		cin >> array[i];

	for(int i=0; i<6; i++)
		cout << array[i] << " ";
	cout << array[6];
	return 0;
}
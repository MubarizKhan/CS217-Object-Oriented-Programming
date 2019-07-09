#include <iostream>
using namespace std;

int main(){

	int arr[10] = {00,11,22,33,44,55,66,77,88,99};
	int *p;
	p = &arr[0];
	int *q;
	q = &arr[10];
	cout<< "inserting in ascending order " <<endl;
	for (int i = 0;i < 9; i++){
		cout << *p <<endl;
		p++;
	}
	
	cout << "Backwards " <<endl;
	for(int i = 9; i >= -1 ;i--){
		cout << *q <<endl;
		q--;
	}
//	cout << arr <<endl;
//	cout << &arr <<endl;
//	cout << arr[0] <<endl;
//	cout << &arr[0] <<endl;

//return 0;
}

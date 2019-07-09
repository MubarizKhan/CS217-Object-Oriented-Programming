#include <iostream>
#include <string>
using namespace std;

int main(){
	//Write a C program to calculate product of digits of a number.
	
	int product = 1;
	int val;
	int num;
//	cout << "Enter the number" <<endl;
	num = 12345;
	val = num;
	
	while (val != 1){
		product = product * (val % 10);
		val /= 10;
	}
	
	cout <<"the product of " << num << + "is " << product<<endl;
	
}

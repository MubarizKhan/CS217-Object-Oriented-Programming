#include <iostream>
#include <string>
using namespace std;


int main(){
	//Write a C program to check whether a number is palindrome or not.
	int n, remainder, reversednumber = 0;
	int original;
	
	cout <<"Enter a number to check whether this is palindrome or not"<<endl;
	n = 121;
	n = original;
	
	while (n != 0){
		remainder = n % 10;
		reversednumber = (reversednumber * 10) + remainder;
		n /= 10;
	}
	cout << reversednumber << " reversednumebr bro" <<endl;
	
	if ( original == reversednumber){
		cout << " a palindrome" <<endl;
		
	}
	
	else{
		cout << "aint palindrome"  <<endl;
	}
}

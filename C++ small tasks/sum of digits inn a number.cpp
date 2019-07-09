#include <iostream>
#include <string>
using namespace std;
	//Write a C program to calculate sum of digits of a number.
//	Write a C program to calculate product of digits of a number.


 
int main()
{
    int val, sum, num = 0;
    
    cout << "enter an number "<<endl;
    cin>> num;
    //val = num;
    
    while (num != 0){
    	sum = sum + num % 10;
    	num /= 10;
    	
//		sum = num % 10;
//    	val = (val* 10) + sum; // REVERSE
//    	num /= 10;
//    	
    	
    	
	}
	
	cout << "the sum of " << val << "is" << sum <<endl;
}

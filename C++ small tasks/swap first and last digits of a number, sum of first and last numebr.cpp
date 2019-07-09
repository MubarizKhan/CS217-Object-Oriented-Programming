#include <iostream>
#include <string>
using namespace std;

int main(){
	//Write a C program to swap first and last digits of a number, sum of first and last numebr 
	 int n,first,last,sum;
    cout << "\n\n Find the sum of first and last digit of a number:\n";
    cout << "------------------------------------------------------\n";
    cout << " Input any number: ";
    
    n = 123456789;
    first = n;
	last=n % 10;
	for(first=n;first>=10;first=first/10);
    cout<<" The first digit of "<<n<<" is: "<<first<<endl;
    cout<<" The last digit of "<<n<<" is: "<<last<<endl;
//out<<" The sum of first and last digit of "<<n<<" is: "<<first+last<<endl;
	
	cout << "swapping of first and last number " <<endl;
	int temp;
	temp = first;
	first = last;
	last = temp;
	
	cout << "first is" << first <<endl;
	cout << "last is" << last << endl; //Swapping done
	
	
	
}

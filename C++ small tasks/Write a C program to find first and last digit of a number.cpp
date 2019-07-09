#include <iostream>
#include <string>
using namespace std;


//Write a C program to find first and last digit of a number


#include <iostream>
using namespace std;

int main()
{
   int n,first,last,sum;
    cout << "\n\n Find the sum of first and last digit of a number:\n";
    cout << "------------------------------------------------------\n";
    cout << " Input any number: ";
    
    n = 123456789;
    first = n;
	last=n % 10;
	for(first=n;first>=10;first=first/10); // need to understand, the test expression
    cout<<" The first digit of "<<n<<" is: "<<first<<endl;
    cout<<" The last digit of "<<n<<" is: "<<last<<endl;
	cout<<" The sum of first and last digit of "<<n<<" is: "<<first+last<<endl;
}
//int main() {
//	
//	int val;
//	int count;
//	int y;
//	string number;
//
//	number = "734612";
//	
//	for (int i = 0; i <= 0; i++){
//		cout << "the first digit in the number is" << number[i] <<endl;
//	}
//
//	y = number.length();
//	//cout << y;	
//	for (int x; x <= y; x++){
//		val = number[x]; 
//	}
//	 
//	 	cout << "the last number is " << val <<endl;
//
//}

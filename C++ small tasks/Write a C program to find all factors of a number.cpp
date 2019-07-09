#include <iostream>
using namespace std;

int main()
{
   
   int n;
   cout << "enter a positive integer: "<<endl;
   cin>>n;
   
   cout << "The factors of this positive integer are : "<<endl;
   for(int i = 1; i <= n; i++){
   	if (n % i == 0){
   		cout << i <<endl;
	   }
   }

	return 0;
}


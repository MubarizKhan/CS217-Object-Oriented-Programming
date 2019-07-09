#include <iostream>
#include <string>
using namespace std;

int main(){
	
	//C++ program to input number of week's day(1-7) and translate to its equivalent name of the day of the week
	int day;
	cout << "Enter the digit of the day of the week:  " <<endl;
	cin>> day;
	
	 if (day == 1){
	 	cout << "Monday" <<endl;
	 }
	
	 else if (day == 2){
	 	cout << "Tuesday" <<endl;
	 }
	 
	  else if (day == 3){
	 	cout << "Wednesday"  <<endl;
	 }
	 
	  else if (day == 4){
	 	cout << "Thursday" <<endl;
	 }
	 
	  else if (day == 5){
	 	cout << "Friday" <<endl;
	 }

	 else if (day == 6){
	 	cout << "Satday" <<endl;
	 }
	
	 else if (day == 7){
	 	cout << "Sunday" <<endl;
	 }

	else{
		cout <<" Day does not rexist" <<endl;
	}

	return 0;
	
}

#include <iostream>
using namespace std;

/*

	A high school has 1000 students and 1000 lockers, one locker for each student.
	On the first day of school, the principal plays the following game:
	 
	She asks the first student to go and open all the lockers.
	She then asks the second student to go and close all the even-numbered lockers. 
	The third student is asked to check every third locker. 
	 If it is open, the student closes it; if it is closed, the student opens it.
	The fourth student is asked to check every fourth locker. If it is open, the student closes it; if it is closed,
	the student opens it. The remaining students continue this game.
	In general, the nth student checks every nth locker. 
		
		
	If the locker is open, the student closes it; if it is closed, the student opens it.
	After all the students have taken their turn, some of the lockers are open and some are closed.
	Write a program that prompts the user to enter the number of lockers in a school.
	After the game is over, the program outputs the number of lockers that are opened. 
	Test run your program for the following inputs: 1000, 5000, 10000. Do you see any pattern developing?
	


*/


	int locker_problem (int n)
{	

	cout<<endl<<"out of  "<<n<<" lockers, the open lockers are: ";
 
 	int xount = 0;
	for(int i=1;i<=n;++i)
	{
		if(n%i==0)
		{
			cout<<" "<<i;
			xount++;	
		}
			
			
	}
	
	cout<<endl <<xount <<" are the number of open lockers";
	
	
 
	return 0;

	
	
}



int main()
{
	locker_problem(201);
}

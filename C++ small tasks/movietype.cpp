#include <iostream>
#include <string>
using namespace std;

void get_info();
void display_info();

struct MovieType
{

	int movieTime;
	string name;
	string genera;
	
}movie;

void get_info()
{	
	cout << "Enter the movie times hours " << endl;
	cin >> movieTime;
	cout << "Enter the movie Name : " <<endl;
	cin >> name;
	cout << " Enter the movie Genera : " <<endl;
	cin >> genera;

}

void display_info(){

		cout << "Time of movie is  : " << movieTime <<endl;
		cout << "Name of the movie : " << name <<endl;
		cout << " Genera of the movie : "<< genera <<endl
}

int main()
{
	//calling the above function 
	get_info();
	display_info();

}
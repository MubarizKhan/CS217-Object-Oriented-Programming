#include <iostream>
#include <fstream>
#include <string>

const int No_of_students = 20; 
struct  StudentType
{
	string FirstName;
	string LastName;
	int testScore;
	char grade;
};

void getdata(ifstream &infile StudentType array[] , int size);  //here we  passed a array of studenttype object
void assigngrade(StudentType array[], int size);
int highest_test_score(const StudentType array[], int size);
void print(ofstream outfile, const StudentType array[], int size);

//main function
int main()
{
	

	ifstream myin;
	ofstream myout;
	myin.open(".tx");
	if (myin.is_open())
		cout << "File open Successfully " << endl;
	else
		cout << "You messed up hassaan" <<endl;


	myout.open("out.txt"); //----> file where store data in outputfile.txt 
	if (myout.is_open())
		cout << "outfile open Successfully " << endl;
	else
		cout << "You messed up hassaan" <<endl;

// calling the member fucntions of structures are given here

	getdata(myin,array1,Numbe_student);
	assigngrade(array1,Numbe_student);
	print(myout,array1,Numbe_student);

	}	

//getting data from inputfile given by user 

void getdata(ifstream &infile StudentType array[] , int size){
	for (int i = 0; i < size; ++i)
		infile >> array[i].FirstName >> array[i].LastName >> array[i].testScore;
}

void assigngrade(StudentType array[], int size){

	int score;
	for (int i = 0; i < size; ++i)
	{
		if (score >= 90)
			array[i].grade = 'A';
		if (score >= 80)
			array[i].grade = 'B';
		if (score >= 70)
			array[i].grade = 'C';
		if (score >= 60)
			array[i].grade = 'D';
		else
			array[i].grade = 'F';
	}

}

int highest_test_score(const StudentType array[], int size){

	int score[100];
	int highest_score = score[0];

	for (int i = 0; i < size; ++i)
	{
		if (score[i] > score[0])
			highest_score = score[i];
	}

}

void print(ofstream outfile, const StudentType array[], int size){


	int maxscore = highest_test_score(array,size);

	outfile  << setw(15) << " Student Name "
		     << setw(10) << " Test score  "
		     << setw(7) << " grade"	

		   for (int i = 1; i < size; ++i)
		   		outfile << array[i].FirstName + "," array[i].LastName 
		   		<< array[i].testScore << array[i].grade <<endl;

		   outfile <<endl;

		   outfile <<"highest Test score is : " << maxscore <<endl;
		   outfile <<"Studnet having the higest testScore " <<endl;

		   for(int i=1; i < size; ++i)
		   		if(array[i] == maxscore)
		   			outfile << array[i].FirstName + "," << array[i].LastName <<endl;


}


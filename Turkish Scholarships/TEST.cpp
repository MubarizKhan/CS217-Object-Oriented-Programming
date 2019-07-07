#include <iostream>
#include <string>
using namespace std;



void familyinfo();
void contactinfo();
void Educationalinfo();
void LanguageDetails();
void Workexperience();



void Display();
int main(){
	Display();
}

void Display(){
int choice;	

	cout <<"Congratulations! you have registred! Please fill information now"<<endl;
	cout <<" Press 1- family info-2.Contact info- 3. Educational.Information.4-Language details. 5- Work experience"<<endl;
	cin>>choice;
	if( choice == 1){
		familyinfo();
	}
	else if (choice == 2){
		contactinfo();
	}
	else if(choice ==3){
		Educationalinfo();
	}
	else if(choice == 4){
		LanguageDetails();
	}
	else if(choice == 5){
		Workexperience();
	}
	else{
		cout << "lol"<<endl;
	}
}
	
void familyinfo(){
	string mothersname;
	string fathersname;
	string parentsalive;

	int numberofsiblings;
	int Maritalstatus;
	int totalmonthlyincome;
	
	cout<<"What is your mothers name?" <<endl;
	cin>> mothersname;
	
	cout<<"What is your fathers name?" <<endl;
	cin>> fathersname;
	
	cout<<"Are your parents alive, if deceased, state which one"<<endl;
	cin>>parentsalive;
	
	cout<< "Please enter your number of siblings"<< endl;
	cin>> numberofsiblings;
	
	cout<< "Please enter your family's total monthly income" <<endl;
	cin>> totalmonthlyincome;
	
	Display();
}

void contactinfo();

void contactinfo(){
	string country;
	string city;
	int postalcode;
	int phonenumber;
	string address;
	string timeofliving;
	
	cout<<"Enter the name of the country you have the nationality of"<<endl;
	cin>> country;
	
	cout<<"Enter the name of the city you live in"<<endl;
	cin>> city;
	
	cout<<"Enter Postal code of the area you live in"<<endl;
	cin>>postalcode;
	
	cout<<"enter your phone number"<<endl;
	cin>> phonenumber;
	
	cout<< "your address please?"<<endl;
	cin>> address;
	
	cout<< "how long have you lived here" <<endl;
	cin>> timeofliving;
	
	Display();
	
}

void Educationalinfo(){
	string middleschool;
	int middleschoolmarks;
	string highschool;
	int highschoolmarks;
	
	cout<<"Enter the name of your middle school" <<endl;
	cin>> middleschool;
	cout<<"Enter middleschool marks /1100" <<endl;
	cin>> middleschoolmarks;
	cout<<"You have obtained "<< middleschoolmarks << "/ 1100" <<endl;
	
	cout<<"Enter the name of your high school" <<endl;
	cin>> highschool;
	cout<<"Enter highschool marks /1100" <<endl;
	cin>> highschoolmarks;
	cout<<"You have obtained "<< highschoolmarks << "/ 1100" <<endl;
	
	Display();
	
}

void LanguageDetails(){
	string nativelanguage;
	string turkishlanguage;
	
	cout<< "what is your native language"<<endl;
	cin>> nativelanguage;
	cout<< "Do you speak turkish"<<endl;
	cin>> turkishlanguage;
	
	Display();
}


void Workexperience(){
	string yes;
	cout<<"Do you have any work experience"<<endl;
	cin>>yes;
		Display();
}

	




























//void Password(){
//	string password1;
//	string password2;
//	int password1length;
//	int password2length;
//				
//				
//				cout <<"keeping in mind your password length should be greater than 6 letters"<<endl;
//				password2length = password2.size();
//				password1length = password1.size();
//				cout <<"Enter password1"<<endl;
//				cin>> password1;
//				cout<<"Enter password2"<<endl;
//				cin>>password2;
//				
//				if (password1length < 6){
//					for (int i = 0; i<password1length; i++){
//						cout << i <<endl;
//							
//					}}
//					
//				else if(password1length > 6){
//					cout << "testinf"<<endl;
//				}
//				
//			}
//				

			
			
				


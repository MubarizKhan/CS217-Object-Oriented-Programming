/*
------------------------------------------------------------------------------------------------:
""""""""""""""""""""MUBARIZ AHMED KHAN P180010"""""""""""""""""""""""""""""""""""""""""""""""""":
------------------------------------------------------------------------------------------------:
*/
#include <iostream>
#include <string>
using namespace std;


void familyinfo();
void contactinfo();
void Educationalinfo();
void LanguageDetails();
void Workexperience();
void Password();
void Display();
void Email();
void Register();
int main()
{

cout<<"Welcome to Turkish scholarship Programs"<<endl;
cout<<"Press 1 to register"<<endl;
cout<<"Press any other key to exit"<<endl;

int regxit;
cin>>regxit;
    if(regxit != 1){
    	cout << "Goodbye"<<endl;
     			  }
    else if(regxit = 1){
	     Register();
	     Email();
	     Password();
	     Display();
	     
	   ////  Password();
    }    
	
	 
    return 0;
}

	
void Register(){

	string firstname; 
	string middlename;
	string surname; 
	int firstnamesize;
	int middlenamesize;
	int surnamesize;
	int genderinteger;
	string dateofbirth;
	string nationality;
	
	
    cout << "-----------------Registration----------------------------! " <<endl;
    
	cout<<"Enter your first name"<<endl;
    cin>>firstname;
    firstnamesize = firstname.length(); 
    	if (firstnamesize <= 1|| firstnamesize > 20 ){
   			cout<<"Name too small"<<endl;
	   		Register();
   		}
   		else{
   			cout<<"Enter your middlename "<<endl;
    		cin>>middlename;
    		middlenamesize = middlename.length();
    		
			if (middlenamesize <= 1|| middlenamesize > 20 ){
   				cout<<"Name too small"<<endl;
	   			Register();
				}
	   		else{
	   			cout<<"Enter your surname "<<endl;
    				cin>>surname;
   					surnamesize = surname.length();
   					if (surnamesize <= 1|| surnamesize > 20 ){
   						cout<<"Name too small"<<endl;
	   			Register();
			   }
			   		else{
			   			cout<< "Your name is "<<firstname + " "<< middlename <<" "; surname;
			   			
					   }
   	
   		}}
   		
   		
   		cout << "What is your gender?"<<endl;
   		cout << "Press 1 for Male/ 2 for female"<<endl;
   		cin>>genderinteger;
   			if (genderinteger > 2){
   				cout << "noted" <<endl;
		   	}
			else{
				cout << "proceeding" <<endl;
				
    
    	cout<<"Enter your date of birth"<<endl;
    	cin>> dateofbirth;
    	
    	cout<<"Enter your nationality"<<endl;
    	cin>> nationality;
    		}}

 void Email(){
		
		string email1;
		string email2;
		int email1length;
		//int email2length;
		
		cout << "Enter your email twice" <<endl;
		cin>> email1;
		cin>> email2;
		while (email1 != email2){
			cout << "Enter your email twice" <<endl;
			cin>> email1;
			cin>> email2;
			
			cout << "Your email has been finalised"<<endl;
		}
		cout << "Your email has been finalised"<<endl;
	}
    			
void Password(){

string password1;
string password2;
int password1length;
int password2length;


	cout<<"Enter your password"<<endl;
	cin>>password1;
	password1length = password1.size();
	cout<<"Enter your password again"<<endl;
	cin>>password2;
	password2length = password2.size();
	
	if	(password1 == password2){
		cout << "they are the same" <<endl;
	}
	else{
		Password();
	}
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
    
    
    
    
    
    
    
    
    
    
    
    
    
                                                                     
    
   
   
	
	


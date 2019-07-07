#include <iostream>
#include <string> 
#include <sstream>
using namespace std; 

// Address class here 
class Address{
	public:
	int house_no ;
	int street_no;
	string city;
	string country;
	string get_full_address();
	
};

string Address :: get_full_address(){

	stringstream ss;
	ss << this->house_no;
	string sh = ss.str();
	
	stringstream ss2;
	ss2 << this->street_no;
	string sno = ss2.str();
	
	string add =  "H.NO,: " + sh + "," + "Street :" + sno + " , " +  city + ", " + country;
	return add;
}

// Employee class here 
class Employee{
public:
	string name;
	Address current_address;
	Address permanent_address;
	void set_current_address(int house_no, int street_no, string city, string country);
	void set_permanent_address(int house_no, int street_no , string city, string country);
	void print_addresses();

}e2;

void Employee::set_current_address(int house_no, int street_no, string city, string country){
	this->current_address.house_no = house_no;
	this->current_address.street_no = street_no;
	this->current_address.city = city;
	this->current_address.country = country;
	
}

void Employee::set_permanent_address(int house_no, int street_no , string city, string country){
	this->permanent_address.house_no = house_no;
	this->permanent_address.street_no = street_no;
	this->permanent_address.city = city;
	this->permanent_address.country = country;
	
}
void Employee :: print_addresses(){
	cout << "current address is ----" <<endl;
	cout << this->current_address.get_full_address() << endl;
	
	cout << "permanent address id ----------" <<endl;
	cout << this->permanent_address.get_full_address() << endl;
	
	
}
// Wheel class here 

// Car class here 


int main() { 

  //   Start of PART - 1  -----------------------
     Address a; 

     a.house_no = 4; 
     a.street_no = 25; 
     a.city = "Peshawar"; 
     a.country = "Pakistan";

  //   a.get_full_address();

    // End of Part - 1    -----------------------


    // Start of PART - 2  -----------------------

     Employee e2; 

     e2.set_current_address(4, 25, "Peshawar", "Pakistan"); 
     e2.set_permanent_address(14, 9, "Lahore", "Pakistan"); 
     e2.print_addresses();  

    // End of Part - 2     -----------------------




    // Start of PART - 3   -----------------------

    // Wheel w1; 

    // w1.set_wheel_state("Turning"); 
    // cout << w1.get_wheel_state() << endl; 

    // End of Part - 3     -----------------------




    // Start of PART - 4   -----------------------

    // Car c; 
    
    // c.set_car_to_moving(); 
    // c.print_car_wheels_state(); 

    // c.set_car_to_stopped(); 
    // c.print_car_wheels_state();

    // End of Part - 4     -----------------------


    return 0; 
}

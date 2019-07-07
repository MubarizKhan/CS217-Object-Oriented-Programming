#include <iostream>
#include <string> 
using namespace std; 


// Wheel class here 
class Wheel{
private:
	string x;
public:
	void set_wheel_state(string x);
	string get_wheel_state();

};

string Wheel :: get_wheel_state()
{ 
	return this->x;
	}
 
void Wheel ::set_wheel_state(string s){
	 this->x = s;
}

// Car class here 
class Car{
private:
	Wheel arr[4];
public:
	void set_car_to_moving();
	void set_car_to_stopped();
	void print_car_wheels_state();
};

void Car :: set_car_to_moving(){
	
	for(int i = 0; i < 4; i++) {
		cout << "Setting to moving..." << endl;
	
		arr[i].set_wheel_state("Turning");
		
		cout << "state state...\n................................"<<endl;  

	}
	
	cout << "Moving done" << endl;
	return;
}
		
void Car :: set_car_to_stopped(){
	
	for(int i = 0; i < 4; i++){
	
		this->arr[i].set_wheel_state("Stopped");
	}
	
	return;
}
void Car :: print_car_wheels_state(){
	cout << "Helloo" << endl;
	cout << "State : " << (arr + 1)->get_wheel_state() << endl;
	for (int i = 0; i < 4; i++) {
	//tring val =  b.arr[i].set_wheel_state(string x);
 	cout << "Wheel " << i << " is "<< (arr+i)->get_wheel_state() <<endl;
	}
}	
		
		

int main() { 


    // Start of PART - 3   -----------------------

     Wheel w1; 

     w1.set_wheel_state("Turning"); 
     cout << w1.get_wheel_state() << endl; 

    // End of Part - 3     -----------------------




    // Start of PART - 4   -----------------------

     Car c; 
    
     c.set_car_to_moving();
	 cout<<"\nSetting state.\n" ;
     c.print_car_wheels_state(); 

    c.set_car_to_stopped(); 
    c.print_car_wheels_state();

    // End of Part - 4     -----------------------


    return 0; 
}

#include <iostream>
using namespace std;
class Book
{
	private:
		string title;
		int ISBN;
		float price;
		
	public:
		Book()
		{
			
			title = "";
			ISBN = 0;
			price = 0.0;
			
			cout <<"constructor called of the book class"<<endl;
			
		}
		
		void set_title(string t)
		{
			title = t;
		}
		
		void set_ISBN(int I)
		{
			ISBN = I;
		}
			
		
		void set_price(float p)
		{
			price = p;
		}
		
		string get_title()
		
		{
			cout <<title <<endl;
			return title;
		}
		
		int get_ISBN()
		{
			cout << ISBN <<endl;
			return ISBN;
		}
		
		float get_price()
		{
			cout << price <<endl;
			return price;
		}
};

class Nadra
{
	private:
		
		int long ID;
		string DOB;
		
			
		
	public:
		string name;
		string father_name;
		char gender;
		string country_of_stay;
		string Date_of_expiry;
		
		
		void set_name(string n)
		{
			name = n;	
		}
		
		string get_name()
		{
			cout <<name <<endl;
			return name;
		}
		
		void set_fname(string fn)
		{
			
			father_name = fn;
		}
		
		string get_fname()
		{
			cout <<father_name <<endl;
			return father_name;
		}
		
		void set_gender(char g)
		{
			gender = g;
		}
		
		char get_gender()
		{
			cout << gender <<endl;
			return gender;
		}
		
		void set_cos(string s)
		{
			country_of_stay = s;
			
		}
		
		string get_cos()
		
		{
			cout<< country_of_stay<<endl ;
			return country_of_stay;
		}
		
		
		
		void set_DOE(string doe)
		{
			Date_of_expiry = doe;
		}
		
		
		string get_doe()
		{
			cout << Date_of_expiry <<endl;
			return Date_of_expiry;
		}
		
		
	
};



int main()
{
	Book b;
	b.set_ISBN(123);
	b.set_title("Badshahi");
	b.set_price(1234.98);
	
	b.get_price();
	b.get_ISBN();
	b.get_title();
	
	
	Nadra n;
	n.set_name("H");
	n.set_cos("Swabi");
	n.set_fname("M");
	n.set_gender('F');
	
	n.set_DOE("25/10/98");
	
	
	n.get_name();
	n.get_fname();
	n.get_gender();
	n.get_doe();
	n.get_cos();
}








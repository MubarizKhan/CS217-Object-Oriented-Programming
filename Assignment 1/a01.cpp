#include <iostream>
#include <string> 
#include <cstdlib>
using namespace std; 

// prototype go here 
int index(char *p, char z);
int count_digits(char *ptr);

int main() { 
    string haystack; 
    char needle; 

    // Also try different values for the string and character
    haystack = "A quick brown fox (id: 45) jumped over a lazy dog (id: 9)"; 
    needle = ';'; 
	//cout << &haystack[0];
    int loc, count; 
    loc = index(&haystack[0], needle); 
    cout << "Loc: " << loc << endl; 

    count = count_digits(&haystack[0]); 
    cout << "Count: " << count << endl;  

    return 0; 
}

// functions go here 
int index(char *h, char x){
	
	
	int count = 0;
	
	while ( *h != '\0'){
		
		if ( *h == x) {
			//cout << *h << '  -  '<< x <<endl;
			cout << x << " Found at index : " << count <<endl;
			return count;
		}
		
		count++;
		h++;
	}
	
	return -1;
}

int count_digits(char *ptr){
	int counter = 0;
	
	while (*ptr != '\0'){
		int num1 = (int) *ptr;
		if (num1 >= 48 && num1 <= 57 )
		{
			counter++;
		}
		ptr++;
	}
	// cout << num1;
	
	return counter;
}
//	int c;
//	char *v;
//	
//	v = &z;
//	char *z = "abcdefghaaa" ;
//	
//	char need = 'a';
//	c = z.length();
//	
//	for (int i =0; i < c; i++){
//		if ( need = &v[i]){
//			cout << "match" <<endl;
//		}
//		else{
//			cout << "sucks" <<endl;
//		}
//	}
//	
	
	
	


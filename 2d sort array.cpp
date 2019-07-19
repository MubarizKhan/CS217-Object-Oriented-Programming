#include<iostream>
using namespace std;

template <class t>
lass list{
	private:
		int *ptr;
	public:
		list(){
			//make a 2 dynamic array with ptr
			ptr = new int [Maximum_size];
			for(int i=0; i<10;i++)
			
		}	
		
		
		void Initiliaze( int array){
			for(int i=0; i<Maximum_size; i++)
			{
				ptr[i] = array;
				}	
		}
		
		void print(){
			for(int i=0; i<Maximum_size; i++){
				
				cout << ptr[i];
			}
			cout <<endl;
		}
			
		void sort(){	
		int temp;
		for(int i=0; i<10; i++){
			for(int j=0; j<i-1; j++)
			{
				if(ptr[j] > ptr[j+1]
				{
					temp = ptr[j];
					ptr[j]= ptr[j+1];
					ptr[j+1] = temp;
					
				}
				
			}
		}	
			
			
		}
		void Max(){
			obj maxium_element;
			maxium_element = ptr[0];
			for(int i=0; i<10; i++){
				if(ptr[i] > maxium_element)
					{
						ptr[i] = maxium_element;
						
					}
			}
			return maxium_element;
		}
		void Min(){
			
			obj smallest_element;
			smallest_element = ptr[0];
			for(int i=0; i< 10; i++){
				if(ptr[i] < smallest_element[i])
				{
					ptr[i] = smallest_element[i];
					
				}
			}
			return smallest_element;
					
		}
		~list(){
			// deallocate 2D Dyanmic memory 
			delete ptr;
		}
			
};


int main()
{
	
}

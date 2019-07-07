#include <iostream> 
#include <fstream>
using namespace std; 

// stuff from Queue lecture goes here ... then apply template on it 


#define SIZE 10

void pause(); 

template <class T>
class Queue { 
    private: 
    T q[SIZE]; 
    int in, out; 
    bool is_empty, is_full; 
    // 

    // circular increment 
    int inc(int val);

    public: 
    Queue(); 
    void enqueue(T val);  // spell that as ... enq-ue-ue
    T dequeue();          // deq-ue-ue 


};

template <class T>
Queue<T>::Queue() { 
    for (int i = 0; i < SIZE; i++) { 
        q[i]  = '\0'; 
    }
    in = out = 0; 
    is_empty = true; 
    is_full = false; 
}

template <class T>
int Queue<T>::inc(int val) { 
    if (val + 1 == SIZE)         // loop around 
        val = 0; 
    else 
        val += 1; 
    return val; 
}

template <class T>
void Queue<T>::enqueue(T val) { 
    if (is_full) {
        throw "Queue full. Cannot enqueue ... "; 
        // cout << "Nahi kerta!" ; 
        // return; 
    } 

    // put where in is and increment in 
    q[in] = val; 
    in = inc(in); 

    // check if we are now full 
    if (in == out) 
        is_full = true; 
    
    // definitely not empty any more 
    is_empty = false;       
}

template <class T>
T Queue<T>::dequeue() { 
    if (is_empty) {
        throw "Q dequeue nhi krni... "; 
    } 

    // get from where out is and inc out 
    T ret = q[out]; 
    out = inc(out); 

    // see if we are now empty 
    if (in == out) 
        is_empty = true; 

    // definitely not full any more 
    is_full = false;       

    return ret; 
}

class Writer { 
    // fill stuff here 
    	public:
		void process_file(string filename, Queue<string> *q);

}; 
// method definitions for Writer class here 
void Writer::process_file(string filename, Queue<string> *q) {

	fstream fin;
	fin.open(filename.c_str());  // fin.open("reader.txt")
	
	while(!fin.eof()) {
		
		string temp;
		getline(fin, temp);
		
		//cout << temp << endl;
		
		q->enqueue(temp);
	}
}




class Reader { 
    // fill stuff  here
	public:
	void process_queue(Queue<string> *q); 
};
// method definitions for Reader class here 
void Reader::process_queue(Queue<string> *q){
	string deq;
	bool empty = false;
	
	while(empty == false){
	
		try {
			deq = q->dequeue();
			cout << deq.length() << endl ;	
		} 
		catch (const char *msg) { 
        cout << msg << endl;  
        empty = true;
        //cout << empty;
    }
	}
}




int main() { 
    Queue<string> *que; 
    que = new Queue<string>; 

    string filename = "string-collection.txt"; 

    Writer first_writer; 
    Reader first_reader; 

    first_writer.process_file(filename, que); 
    first_reader.process_queue(que); 

    return 0; 
}


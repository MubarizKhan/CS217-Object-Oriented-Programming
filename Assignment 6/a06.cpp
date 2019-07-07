#include <iostream> 
using namespace std; 

struct node{
int val;
node *next;
};


class List {

private: 
    node *head = NULL;
    node *tail = NULL;
    int do_sum(node *current);
    
 public:
    int sum = 0;
    int sum_list(); //This function will receive no parameters and will return the sum of the elements in the list
    void print_list();
    void push(int val);
};
//
    
int List :: sum_list(){
    node *current = head;
   return this->do_sum(current);

}

int List :: do_sum(node *current){
    if (current == NULL)
        return sum;
    
    sum += current->val;
    current = current->next;
    return do_sum(current);

}


void List :: push(int val){
    node *temp = new node;
    temp->val = val;
    temp->next = NULL;

    if (head == NULL) {         // for when list is empty
        head = temp; 
        tail = temp; 
    } else {                    // for all other cases 
        tail->next = temp; 
        tail = tail->next; 
    }
	 
}

void List::print_list(){
	node *temp;
	temp = head;
	cout << "[";
	while(temp != NULL){
		cout << temp->val << " " ;
		temp = temp->next;
		
	}	
	cout << "\b";
	cout << "]";
}

int main() { 
    List l; 

    l.push(5);          
    l.push(15);
    l.push(30);
    l.push(32);
    l.push(3);
    l.push(29);
    l.print_list(); 

    cout << "Sum = " << l.sum_list() << endl; 

    return 0; 
}

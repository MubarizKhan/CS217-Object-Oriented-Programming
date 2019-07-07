#include <iostream> 
using namespace std; 

// node structure here
struct node{
	int val;
	node *next;	
}; 

class List { 
    node *head=NULL;
    node *last=NULL;
    public:
		void push(int val);
		void print_list();
		void delete_after_node(node* current);
		int pop(); 
};

void List::push(int val) { 
	node *temp = new node;      // create new node 
    temp->val = val;
    temp->next = NULL; 
	
    if (head == NULL) {         // for when list is empty
        head = temp; 
        last = temp; 
    } else {                    // for all other cases 
        last->next = temp; 
        last = last->next; 
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

int List::pop(){
	node *temp;
	temp = head;
	int x = last->val;
	if(head->next == NULL){
		delete head;
		head = NULL;
		last = NULL;
		return x;
	}
	while(temp->next != last){
		temp = temp->next;
	}
	delete_after_node(temp);
	last = temp;
	temp = NULL;
	return x;
}
void List::delete_after_node(node* current){
	node* temp = current->next;
	current->next = current->next->next;
	delete temp;
}
int main() { 
    // Part - 1 Starts here ------
	
    List l; 

    l.push(5);          
   // l.print_list(); 

    l.push(15);
    l.push(30);
    l.print_list(); 

    // Part - 1 Ends here ----------------------



    // Part - 2 Starts here ----------------------

     cout << "Poppping: " << l.pop() << endl; 
     l.print_list(); 

     cout << "Poppping: " << l.pop() << endl; 
     l.print_list(); 

     cout << "Poppping: " << l.pop() << endl;         // this will give an error at first 
     l.print_list(); 

    // Part - 2 Ends here ----------------------

    return 0; 
}

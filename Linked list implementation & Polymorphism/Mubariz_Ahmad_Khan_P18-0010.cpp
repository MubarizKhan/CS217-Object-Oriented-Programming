#include <iostream>
using namespace std;

struct node{
	int val;
	node *next;
};

//void reversePrint();
//void swap(int x, int y)
//intcountNodes();


node *head = NULL;


// *temp;

void insert(int x){
	//Insert to last
	node *temp = new node;
	temp->val = x;
	temp->next = NULL;
	
	if (head == NULL){
		head = temp;
	}
	else{
		node *current = head;
		while(current->next != NULL){
			current = current->next;
		}
		current->next = temp;
	}
			
	}
	
void Print(){
	node *temp = head;
	
	if(temp == NULL) {
		cout << "Za List Iz Empty !!" << endl;
	}
	
	while(temp != NULL){
		cout << temp->val <<endl;
		temp = temp->next;
	}
}

void Search(struct node* head, int x){
	while (head != NULL){
		if (head-> val == x){
			cout << head->val <<"it's found" <<endl;
		//	head = head->next;
			return;
		}
	}
}
void Delete( int value){
	

	if (head->val = value ){
		node *temp = new node;
		temp = head;
		head =  head->next;
		cout << temp->val << "is going to be deleted" <<endl;
		delete temp;
		
	}
}
//	linked list reverse order
//	
//}


void swap(int a, int b) {
	
	node* temp = new node;
	node* aptr = new node;
	node* bptr = new node;
	//node* temptr = new node;
	temp = head;
	
	if(temp == NULL) {
		cout << "List is empty !!" << endl;
	}
	
	while(temp != NULL) {
		
	//	cout << "Current value is : " << temp->val << endl;
		
		if(temp->val == a) {
			aptr = temp;
			cout << "Found a !" << endl;
		}
		if(temp->val == b) {
			bptr = temp;
			cout << "Found b !" << endl;
		}
		
		temp = temp->next;
	}
	
	int tempval;
	
	tempval = aptr->val;
	aptr->val = bptr->val;
	bptr->val = tempval;
	
}

int countNodes() {
	
	node* temp = new node;
	temp = head;
	int count = 0;
	
	while(temp != NULL) {
		
		count++;
		temp = temp->next;
	}
	return count;
}

void printReverse() {
	
	int size = countNodes();
	int *arr = new int[size];
	
	node* temp = new node;
	temp = head;
	
	int i = 0;
	while(temp != NULL) {
		arr[i] = temp->val;
		i++;
		temp = temp->next;
	}
	
	cout << "\nPrinting list in reverse !! " << endl;
	
	for(int i = (size-1); i >= 0; i--) {
		cout << arr[i] << endl;
	}
	
}

int main(){
	

	insert(875);
	insert(5);
	insert(6);
	//Search(head, 875);
	//Delete (875);
	swap(6, 875);
	Print();
	cout << "Number of nodes is : " << countNodes() << endl;
	printReverse();
	return 0;
}

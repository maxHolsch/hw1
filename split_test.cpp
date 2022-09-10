#include <iostream>
#include "split.h"
using namespace std;



//print function: make sure to remove for program. Okay to be loop since it's just a driver function
void print(Node*& in)
{
  Node* x = in;
		
    while (x != NULL) {
       if(x!=NULL){
        cout << x->value << " -> ";
        x = x->next;}
    }
    if(x==NULL){
			cout << "NULL " << "\n";}
}

/*
void addToTailRec(Node*& in, Node*& sub){// recursive add to tail function to keep list in sorted order
	if(sub->next!=NULL){
		sub=sub->next;
		addToTailRec(in, sub);
	}
	else{
		sub->next=in;
		sub=sub->next;
	}
}

void split(Node*& in, Node*& odds, Node*& evens)//node *& notation is a reference to a pointer to a node object
{

  if(in==NULL){//termination condition: if in is NULL recursive function ends
  cout<<"linked list in is NULL";
  }

  else{
	  if (in->value%2==0){//if even 

	if(evens==NULL){//to establish first head node
		evens=in;
			in=in->next;
		evens->next=NULL; 
	}

	else{ // if there already exists a head node
		Node* temp=evens;
		addToTailRec(in, evens);
		in=in->next;
		evens->next=NULL;
		evens=temp;
		
		
	}
  }
  else if(in->value%2==1){// if odd
	  if(odds==NULL){ //to establish first head node
		odds=in;
			in=in->next;
		odds->next=NULL; 
	}

	else{ //if there already is a head node
		Node* temp=odds;
		addToTailRec(in, odds);
		in=in->next;
		odds->next=NULL;
		odds=temp;
		
		
	}
  }
print(in);
print(evens);
print(odds);
cout<<endl;
split(in, odds, evens); //recursive call


}
 
}*/

int main()
{

	
   // Node* head = NULL;
	Node* in=NULL;
	Node* evens= NULL;
	Node* odds= NULL;
			
		Node* in1 = new Node(1,NULL);
		Node* in2 = new Node(2,NULL);
		Node* in3 = new Node(3,NULL);
		Node* in4 = new Node(4,NULL);

		in=in1;
    in1->next = in2;
    in2->next = in3;
    in3->next = in4;
    in4->next = NULL;

	cout << "Given the linked list\n";
	
		print(in);
		print(evens);
		print(odds);
		cout<<endl;
	
		split(in, odds, evens);
//destructors
	delete in1;
	delete in2;
	delete in3;
	delete in4;
	
    return 0;
}
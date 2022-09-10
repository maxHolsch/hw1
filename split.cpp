/*
CSCI 104: Homework 1 Problem 1

Write a recursive function to split a sorted singly-linked
list into two sorted linked lists, where one has the even 
numbers and the other contains the odd numbers. Students 
will receive no credit for non-recursive solutions. 
To test your program write a separate .cpp file and #include
split.h.  **Do NOT add main() to this file**.  When you submit
the function below should be the only one in this file.
*/

#include "split.h"
#include <iostream>
/* Add a prototype for a helper function here if you need */


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
  std::cout<<"linked list in is NULL";
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
//print(in);
//print(evens);
//print(odds);
//cout<<endl;
split(in, odds, evens); //recursive call


}
 
}
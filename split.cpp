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

/* Add a prototype for a helper function here if you need */

void split(Node*& in, Node*& odds, Node*& evens)//node *& notation is a reference to a pointer to a node object
{
  /* Add code here */
// WRITE YOUR CODE HERE

//base case
  if(*in==NULL){ // if the value that in's head points to is null
    return 0; //termination condition
               }

  else if (*in%2==0){ //if the value of the head of in is even, currently does this in decreasing order only
    if(evens.head!=NULL){ //if head does not exist yet, just make it the head
    *in.next -> *Node*& evens;//the next of the origionally in node points to the node.that's at the head of even. 
    //still needs to remove the pointer of next node to somthing else
    } 
    evens.head -> in
                    }
  else if(*in%2==1){
    //same thing as evens, but for odds
  }
  
  Node*in=*Node*&in.next //the pointer in gets reassigned to the in's next. This means that we don't need to destruct any pointers, as we're just repointing these things into 2 linked lists
split(Node*& in, Node*& odds, Node*& evens)
}

/* If you needed a helper function, write it here */

// WRITE YOUR CODE HERE
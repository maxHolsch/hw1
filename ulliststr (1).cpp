#include <iostream>
#include <cstddef>
#include <stdexcept>
#include "ulliststr.h"

ULListStr::ULListStr()
{
  head_ = NULL;
  tail_ = NULL;
  size_ = 0;
}

ULListStr::~ULListStr()
{
  clear();
}

bool ULListStr::empty() const
{
  return size_ == 0;	
}

size_t ULListStr::size() const
{
  return size_;
}

// WRITE YOUR CODE HERE


 std::string* ULListStr::getValAtLoc(size_t loc) const{
//big is for the Items themselves, little is for the indexes of the arrays in items
	 Item* big=head_;//pointer to items
	 size_t little= big->first;
	 //ul i = 0;
	 //start at 0l
		// while (i < loc)
	 for( unsigned long i=0; i<loc; i++){
	
		 if( little==big->last-1){//...cause we don't care about unused positions
			 big=big->next;
			 little=big->first;//x has to = first
			
		 }
		 else{
		 	 little++;//increments x each time
		 }
	 }
	 return &(big)->val[little];// returns a reference
	 
	 }
  

std::string const & ULListStr::front() const{
	return head_->val[head_->first];
}
std::string const & ULListStr::back() const{
	return tail_->val[tail_->last-1];
}
void ULListStr::pop_front(){
	if(head_==NULL){
		std::cout<<"Unrolled Linked List is already empty"<<std::endl;
	}
	 else if(head_->first!=head_->last){
		head_->val[head_->first]="";
		head_->first=head_->first+1;
		size_--;//decreases size
	}
	else if(head_->first==head_->last){
			size_--;//decreases size

		if(head_->next==NULL){
			std::cout<<"next item is NULL, we have fully deleted unrolled Linked List"<<std::endl;
		}
		Item* temp=head_;
		head_=head_->next;
		delete temp;

	}
//case 1: standard just removes the last item at tail last
//case 2: if last=first, hop back a node	
	//if item->prev=null, cout<<"we're done"
//case 3: if null, cout<<"ullist is null"
}

void ULListStr::pop_back(){
	if(tail_==NULL){
		std::cout<<"Unrolled Linked List is already empty"<<std::endl;
	}
	 else if(tail_->last!=tail_->first){
		tail_->val[tail_->last-1]="";
		tail_->last=tail_->last-1;
			size_--;//decreases size

	}
	else if(tail_->last==tail_->first){
		if(tail_->prev==NULL){
			std::cout<<"previous item is NULL, we have fully deleted unrolled Linked List"<<std::endl;

		}
			size_--;//decreases size

		Item* temp=tail_;
		tail_=tail_->prev;
		delete temp;

	}
//case 1: standard just removes the last item at tail last
//case 2: if last=first, hop back a node	
	//if item->prev=null, cout<<"we're done"
//case 3: if null, cout<<"ullist is null"
}
void ULListStr::push_back(const std::string& val){
	/*
	pseudocode
if tail is NULL	
	create new item
if(tail_->last!=0)
else (i.e. need to create new item )
	Item* y= new Item();
	assign in values
*/
	if(tail_==NULL){
		Item* y= new Item();
	y->next=NULL;
	y->prev=NULL;
	y->last=6;
	y->first=5;
	tail_=y;
	head_=y;
	y->val[5]=val;
	
}
else if(tail_->last!=ARRSIZE){//okay now what are we trying to do here?
	tail_->val[tail_->last]=val;	
	tail_->last=tail_->last+1;
}

else{
	Item* y= new Item();
	y->next=NULL;
	y->prev=tail_;
	tail_->next=y;
	y->last=6;
	y->first=5;

	tail_=y;
	y->val[5]=val;

	}
			size_++;//increases size

	}
void ULListStr::push_front(const std::string& val){
/*
if head is NULL	
	create new item
if(head_->first!=0)
	head_->val[head_->first-1]=val;	
	head_->first=head_->first-1;
else (i.e. need to create new item )
	Item* y= new Item();
	assign in values
*/
if(head_==NULL){
	Item* y= new Item();
	y->next=NULL;
	y->prev=NULL;
	y->last=6;
	y->first=5;
	head_=y;
	tail_=y;
	y->val[5]=val;
}
else if(head_->first!=0){
	head_->val[head_->first-1]=val;	
	head_->first=head_->first-1;
}

else{
	Item* y= new Item();
	y->next=head_;
	y->prev=NULL;
	head_->prev=y;
	y->last=6;
	y->first=5;
	head_=y;
	y->val[5]=val;

	}
size_++;//increases size
}

void ULListStr::set(size_t loc, const std::string& val)
{
  std::string* ptr = getValAtLoc(loc);
  if(ptr == NULL){
    throw std::invalid_argument("Bad location");
  }
  *ptr = val;
}

std::string& ULListStr::get(size_t loc)
{
  std::string* ptr = getValAtLoc(loc);
  if(ptr == NULL){
    throw std::invalid_argument("Bad location");
  }
  return *ptr;
}

std::string const & ULListStr::get(size_t loc) const
{
  std::string* ptr = getValAtLoc(loc);
  if(ptr == NULL){
    throw std::invalid_argument("Bad location");
  }
  return *ptr;
}

void ULListStr::clear()
{
  while(head_ != NULL){
    Item *temp = head_->next;
    delete head_;
    head_ = temp;
  }
  tail_ = NULL;
  size_ = 0;
}


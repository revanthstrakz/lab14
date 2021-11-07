#include <iostream>
#include "LinkedList.h"
using std::cout;
using std::endl;

LinkedList::LinkedList() {
	head_ = nullptr;
}

LinkedList::~LinkedList() {

}

void LinkedList::print() const {
	
	cout<< head_->data_ <<endl;
	
}

LNode* LinkedList::find(int t) const {
	LNode *temp = head_;
	while(temp != nullptr) {
		if (temp->data_ == t) return temp;
		temp = temp->next_;
	}
	return nullptr;
}

void LinkedList::insert_head(int t) {
	LNode *temp = new LNode();
	temp->data_ = t;
	temp->next_	=head_;
	head_=temp;

}

void LinkedList::insert_after(LNode* location, int t) {
}

void LinkedList::remove(LNode* location) {
}
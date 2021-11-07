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
	LNode *ba = head_;
	while(ba != nullptr) {
		if (ba->data_ == t) return ba;
		ba = ba->next_;
	}
	return nullptr;
}

void LinkedList::insert_head(int t) {
	LNode *ba = new LNode();
	ba->data_ = t;
	ba->next_	=head_;
	head_=ba;

}

void LinkedList::insert_after(LNode* location, int t) {
}

void LinkedList::remove(LNode* location) {
}
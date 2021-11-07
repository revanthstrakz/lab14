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
	LNode *vas = head_;
	while(vas != nullptr) {
		if (vas->data_ == t) return vas;
		vas = vas->next_;
	}
	return nullptr;
}

void LinkedList::insert_head(int t) {
	LNode *vas = new LNode();
	vas->data_ = t;
	vas->next_	=head_;
	head_=vas;

}

void LinkedList::insert_after(LNode* location, int t) {
}

void LinkedList::remove(LNode* location) {
}
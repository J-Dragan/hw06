#include "hw06.h"


void addRecord(slist* list,sentry* pointer){
	list-> length += 1;
	sentry* previous = nullptr;

	if(list -> first == nullptr){
		list -> first = pointer;
		list -> last = pointer;
	}
	else{
		sentry* count = list -> first;
		while(count != nullptr){
			previous = count; 
			count = count -> next;
		}
		previous -> next = pointer;
		pointer -> prev = previous;
		pointer -> next = nullptr;
		list -> last = pointer;
	
	}	
}

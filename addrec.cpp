#include "hw06.h"


void addRecord(slist* list,sentry* pointer, const int position){
	sentry* previous = nullptr;
	

	if(position <= list -> length + 1){
		if(list -> first == nullptr){
			list -> first = pointer;
			list -> last = pointer;
		}
		else if(list -> length + 1 == position){
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

			
		else if(position == 1){
			sentry* right = list -> first;
			right -> prev = pointer;
			pointer -> next = right;
			list -> first = pointer;
		}
		else if(position-1 <= list -> length){
			sentry* right = list -> first;
			for(int i = 0; i < position-1; i++){
				right = right -> next;
			}
			sentry* left = right -> prev;
			pointer -> next = right;
			pointer -> prev = left;
			right -> prev = pointer;
			left -> next = pointer;
			}
		
		
		list-> length += 1;
	}
	else{
		std::cout << "invalid position" << std::endl;
	}
}

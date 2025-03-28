#include "hw06.h"

void deleteRecord(slist* list, const int place){
	if(place <= list -> length){
        	sentry* head = list -> first;
			if(list -> length == 1 && place == 1){
				head = list -> first;
				delete head -> data;
				delete head;
				list -> first = nullptr;
				list -> last = nullptr;
				list -> length -=1;

			}
			else if(list-> length > 1 && list -> length == place){
				head = list -> last;
				sentry* left = head -> prev;
				left -> next = nullptr;
				delete head -> data;
				delete head;
				list -> length -= 1;
				list -> last = left;
			}
			else if(list-> length > 1 && place == 1){
				head = list -> first;
				sentry* right = head -> next;
				right -> prev = nullptr;
				delete head -> data;
				delete head;
				list -> first = right;
				list -> length -= 1;
			}
			else if(list -> length >= place){
				head = list -> first;;
				for(int i =0; i < place-1; i++){
					head = head -> next;
				}
				sentry* left = head ->prev;
				sentry* right = head-> next;
				left -> next = right;
				right -> prev = left;
				delete head -> data;
				delete head;
				list -> length -= 1;
			}
	
	}
	else{
		std::cout << "invalid position" << std::endl;
	}
}

                        

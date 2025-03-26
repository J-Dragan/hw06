#include "hw06.h" 


void displayRecord(const slist* list, const int place){
	sentry* head = list -> first;
		if(list -> length >= place){
        		//bookData* info = head->data;
			for(int i = 0; i < place-1; i++){
				head = head->next;
			}
			bookData* info = head->data;
        		if (info != nullptr) {
                		std::cout << info->isbn << std::endl;
                		std::cout << info->author << std::endl;
                		std::cout << info->title << std::endl << std::endl;
        		}

        		//head = head->next;
		}
	
		else{
			std::cout << "invalid position" << std::endl;
	}
}
     

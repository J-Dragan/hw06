#include "hw06.h"

void displayRecords(slist* list){
	sentry* head = list -> first;
	while (head != nullptr) {
        bookData* info = head->data;

        if (info != nullptr) {
		std::cout << info->isbn << std::endl;
		std::cout << info->author << std::endl;
		std::cout << info->title << std::endl << std::endl;
        }

        head = head->next;


	}
}

#include "hw06.h"

int main(){
	slist* list = new slist();
	list->length = 0;
	list-> first = nullptr;
	list -> last  = nullptr;
	sentry* pointer = nullptr;
	int choice=1, place = 0;
	while(choice !=5){
		choice = menu();
	
		if(choice == 1){
			pointer = populateList(list);
			std::cout << "chose the position:";
			std::cin >> place;
			addRecord(list, pointer, place);
		}
		if(choice == 2){
			std::cout << "enter the position:";
			std::cin >> place;
			deleteRecord(list, place);
		}

		if(choice == 3){
			std::cout << "enter the records position:";
			std::cin >> place;
			std::cout << std::endl;
			displayRecord(list, place);
		}
		
		if(choice == 4){
			displayRecords(list);		
		}

	}
	
	
	
	
	
	
	if(choice == 5){
		saveExit(list);
		delete list;
		//delete pointer;	
	}

}

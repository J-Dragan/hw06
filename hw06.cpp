#include "hw06.h"

int main(){
	slist* list = new slist();
	list->length = 0;
	list-> first = nullptr;
	list -> last  = nullptr;
	sentry* pointer = new sentry();
	int choice=1;
	while(choice !=5){
		choice = menu();
	
		if(choice == 1){
			pointer = populateList(list);
			addRecord(list, pointer);
	
	
		}

		if(choice == 3){
			int place = 0;
			std::cout << "enter the records position:";
			std::cin >> place;
			displayRecord(list, place);
		
		
		}
		
		if(choice == 4){
			displayRecords(list);
		
		
		
		
		
		}












	}
	
	
	
	
	
	
	if(choice == 5){
		saveExit(list);
	}

}

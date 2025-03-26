#include "hw06.h"

sentry* populateList(slist* lisT){

	std::string data;
	bookData* NewData = new bookData();
	sentry* newSentry = new sentry();
	newSentry-> list = lisT;
	newSentry -> next = nullptr;
	newSentry -> prev = nullptr;
	newSentry -> data = NewData;



	std::cout << "enter the isbn:";
	std::cin.ignore();
	std::getline(std::cin, data);
	NewData ->isbn = data;

	std::cout << "enter the author:";
	std::getline(std::cin, data);
        NewData ->author = data;

	std::cout << "enter the title:";
	std::getline(std::cin, data);
        NewData ->title = data;
	
	return newSentry;




}

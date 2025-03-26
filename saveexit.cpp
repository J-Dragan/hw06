#include "hw06.h"

/*void saveExit(slist* list){
	std::ofstream myfile;
	myfile.open("booksdb.txt");
	if (!myfile.is_open()){
		std::cout << "not open";
   	}
	sentry* head = list -> first;
	bookData* info = head -> data;
	for(int i = 0; i < (list->length)-1;i++){
		myfile << info -> isbn << std::endl << info -> author << std::endl << info -> title << std::endl << std::endl;
		head = head -> next;
                info = head -> data;
	
	
	
	
	
	 
	
	
	
	
	}
	






	myfile.close();
}
*/










void saveExit(slist* list) {
    std::ofstream myfile;
    myfile.open("booksdb.txt"); 

    if (!myfile.is_open()) {
        std::cerr << "Failed to open the file!" << std::endl;
        return;
    }

    sentry* head = list->first;  

    while (head != nullptr) {  
        bookData* info = head->data;

        if (info != nullptr) {
            myfile << info->isbn << std::endl;
            myfile << info->author << std::endl;
            myfile << info->title << std::endl << std::endl;
        }

        head = head->next;
    }

    myfile.close();
}


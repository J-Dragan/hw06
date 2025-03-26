#include <iostream>

int menu(){
	int choice;
	std::cout << std::endl; 
	std::cout << "Select from the following options" << std::endl;
	std::cout << "1. Add a record" << std::endl;
	std::cout << "2. Delete a record" << std::endl;
	std::cout << "3. Display a record" << std::endl;
	std::cout << "4. Display all records" << std::endl;
	std::cout << "5. Save and exit" << std::endl;
	std::cout << "Enter your choice:";
	std::cin >> choice;
	std::cout << std::endl;
      	return choice;	

}

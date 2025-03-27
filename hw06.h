#ifndef hw06_h
#define hw06_h

#include <iostream>
#include <string>
#include <fstream>

struct slist;
struct bookData{
	std::string isbn;
	std::string author;
	std::string title;
};

struct sentry{
	slist *list;
	sentry *next;
	sentry *prev;
	bookData *data;
};

struct slist{
	int length;
	sentry *first;
	sentry *last;
};




int menu();
sentry* populateList(slist* lisT);
void saveExit(slist* list);
void addRecord(slist* list, sentry* pointer);
void displayRecords(slist* list);
void displayRecord(const slist* list, const int place);
void deleteRecord(slist* list, const int place);
#endif 

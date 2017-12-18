#include <string>
#include<iostream>

using namespace std;
struct Entry {
	string name, phone, address;
	Entry *next;
};

void PrintEntry(Entry *e) {	
	cout << e->name <<" "<< e->phone << " "<< e->address<<endl;	
}	

void PrintList(Entry *e) {
	for(Entry *cur = e; cur != NULL; cur=cur->next)
		PrintEntry(cur);
	
}

void PrintRecList(Entry *e) {
	PrintEntry(e);
	PrintRecList(e->next);	
}

void PrintRecListRev(Entry *e) {
	if(e != NULL){
		PrintRecListRev(e->next);	
		PrintEntry(e);
	}
}

int countElemList(Entry *e) {
	if(e != NULL)
		return 1+ countElemList(e->next);
	else 
		return 0;
}	

Entry *GetNewEntry(){
	cout<< "Enter name(Enter to quit):";
	string name, address;
	cin>>name;
	if(name == "f") return NULL;
	
	Entry *newOne = new Entry;
	newOne->name = name;
	cout<< "Enter address = ";
	cin>> newOne->address;
	cout<<"Enter Phone: ";
	cin >> newOne->phone;
	newOne->next = NULL;
	return newOne;
}

void prepend(Entry *ent, Entry *& first){
	ent->next = first;
	first = ent 
}

void InsertSorted(Entry * &list, Entry *newOne){
	Entry *cur, *prev = NULL;
	for(cur = list; cur!= NULL; cur= cur->next){
		if(newOne.name < cur->name) break;
		prev = cur;
	}	
	newOne->next = cur;
	if(prev == NULL)
		list = newOne;
	else
		prev->next = newOne;
}

Entry *buildList(){
	Entry *listHead = NULL;
	while(true){
		Entry *newOne = GetNewEntry();
		if(newOne == NULL) break;
		prepend(newOne, listHead);
	}
	return listHead	;
}	

void deallocateList(Entry *e){
	while(e!=NULL){
		deallocateList(e->next);
		delete e;
	}	
}

int main(){
	Entry *n = buildList();
	PrintRecListRev(n);
	cout<<countElemList(n) << endl;
}	
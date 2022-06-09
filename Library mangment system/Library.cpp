#include <iostream>
#include <string.h>
#include "Library.h"
using namespace std;
// Library functions
    
void Library::add_author(Author a){// Done
    authorsOfLib.push_back(a);
	cout << "ID author : " << a.get_id() << endl;
	cout << "Add author OK\n";
	}

void Library::add_book(Book b){ // Done
	booksOfLib.push_back(b);
	authorsOfLib.push_back(b.get_author());
	cout << "ID book " << b.get_id() << endl;
	cout << "ID author " << b.get_authorId() << endl;
	cout << "Add book OK\n";
    }

void Library::remove_author(int id){// Done
	if(authorsOfLib.size() <= 0){
		cout << "The Library is empty of author\n";
	}
	else{
		for(int i = 0; i <= authorsOfLib.size(); i++)
			if(authorsOfLib[i].get_id() == id){
				authorsOfLib.erase(authorsOfLib.begin() + i);
				cout << "reomve author OK\n";
				return;
				}
		cout << "ID isn't exist.\n";
		}
	}

void Library::remove_book(int id){ // Done
	if(booksOfLib.size() <= 0){
		cout << "The Library is empty of book \n";
		}
	else{
		for(int i = 0; i <= booksOfLib.size(); i++){
			if(booksOfLib[i].get_id() == id){
				booksOfLib.erase(booksOfLib.begin() + i);
				cout << "Remove book OK\n";
				return;
				}
			else
				cout << "ID isn't exist.\n";
			}
		}
    }

void Library::print_author(int id){ // Done
	if(authorsOfLib.size() <= 0)
		cout << "The library is empty of authors.\n";
	else if(id <= 0 or id){
		cout << "ID isn't exist.\n";
		}
	else{
		int IdAuthor;
		for(int i = 0; i <= authorsOfLib.size(); i++)
			if(authorsOfLib[i].get_id() == id){
				IdAuthor = i;
				break;
			}
		cout <<"\nThe information of Author ";
		cout << "\nThe ID : " << authorsOfLib[IdAuthor].get_id();
		cout << "\nThe name : " << authorsOfLib[IdAuthor].get_name();
		cout << "\nThe phone : " << authorsOfLib[IdAuthor].get_phone();
		cout << "\nThe email : " << authorsOfLib[IdAuthor].get_email() << endl;
		}
    }

void Library::print_book(int id){// Done
	if(booksOfLib.size() <= 0){
		cout << "The Library is empty of books.\n";
		}
	else if(id <= 0 or id > booksOfLib.size()){
		cout << "ID isn't exist.\n";
		}
	else{
		int IdBook;
		for(int i = 0; i <= booksOfLib.size(); i++)
			if(booksOfLib[i].get_id() == id){// find the book
				IdBook = i;
				break;
				}
		cout << "\nThe ID book : " << booksOfLib[IdBook].get_id();
		cout << "\nThe title : " << booksOfLib[IdBook].get_title();
		cout << "\nThe publishing data : " << booksOfLib[IdBook].get_publishing_data();
		cout << "\nThe version : " << booksOfLib[IdBook].get_version();
		cout << "\nThe author : " << booksOfLib[IdBook].get_author_name() << "\n";
		}
    }

void Library::print_author_books(int id){

    }

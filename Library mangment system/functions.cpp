#include <iostream>
#include <string.h>
#include "class.h"
using namespace std;
    void Library::add_author(Author a){// Done
        authorsOfLib.push_back(a);
		cout << "ID author : " << a.get_id() << endl;
		cout << "Add author OK\n";
	}
	void Library::add_book(Book b){ // Done
		booksOfLib.push_back(b);
		authorsOfLib.push_back(b.get_author());
		cout << "ID book " << b.get_id() << endl;
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
					cout << "The author was deleted from the Library\n";
					return;
				}
			cout << "the authro is not in the library or the ID is false.\n";
		}
		cout << "reomve author OK\n";
    }
	void Library::remove_book(int id){ // Done
		// with the id search for the book in forloop
		// booksOfLib.erase(booksOfLib.gegin() + i);
		if(booksOfLib.size() <= 0){
			cout << "The Library is empty of book \n";
		}
		else{
			for(int i = 0; i <= booksOfLib.size(); i++)
				if(booksOfLib[i].get_id() == id){
					booksOfLib.erase(booksOfLib.begin() + i);
					cout << "The book was deleted from the Library.\n";
					return;
				}
			cout << "the book was not in the library or the ID is false\n";
		}
		cout << "Remove book OK\n";
    }
    void Library::print_author(int id){ // Done
		if(authorsOfLib.size() <= 0)
			cout << "The library is empty of authors.\n";
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
			cout << "\nThe author : " << booksOfLib[IdBook].get_name() << "\n";
		}
    }
	void Library::print_author_books(int id){

    }
    //------------------------------------ Author functions
    	//------Setter funcion
    	int Author::counterAuthor = 100;
    	Author::Author(){}
    	void Author::set_ID(){
    		id = counterAuthor;
    		counterAuthor++;
    	}
    	Author::Author(string n, string ph, string e){
    		name = n;
    		phone = ph;
    		email = e;
    		id = counterAuthor;
    		counterAuthor++;
    	}
    	void Author::set_phone(string ph){
    		phone = ph;
    		}
    	void Author::set_name(string n){
    		name = n;
    		}
    	void Author::set_email (string e){
    		email = e;
    		}
    	void Author::operator=(Author a){
    		name = a.get_name();
    		phone = a.get_phone();
    		email = a.get_email();
    	}
    	//------Getter funcion
    	int Author::get_id(){return id;}
    	string Author::get_name(){return name;}
    	string Author::get_phone(){return phone;}
    	string Author::get_email(){return email;}
//-------------- Book functions


	//---------Implamention Setter
	int  Book::counterBook = 1000;
	Book::Book(){}
	Book::Book(int v, string t, string pD,string n, string ph, string e):author(n,ph,e){
			id = counterBook;
			counterBook++;
			version = v;
			title = t;
			publishing_data = pD;
			// author.set_ID();
		}
	void Book::set_title(string t){
		title = t;
		}
	void Book::set_publishing_data(string p){
		publishing_data = p;
		}
	void Book::set_version(int v){
		version = v;
		}
	//---------Implamention Getter

	int Book::get_id(){
		return id;
		}
	string Book::get_title(){
		return title;
		}
	string Book::get_publishing_data(){
		return publishing_data;
	}
	int Book::get_version(){
		return version;
		}
	int Book::get_authorId(){
		return authorId;
	}
	Author Book::get_author(){
        return author;
	}
	void Book::operator = (Book b){
		b.set_version(version);
		// b.set_authorId(authorId);
		b.set_title(title);
		b.set_publishing_data(publishing_data);
	}

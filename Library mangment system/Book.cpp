#include <iostream>
#include <string.h>
#include "Book.h"

using namespace std;

//-------------- Book functions
	//---------Implamention Setter
	Book::Book(){}
	Book::Book(string v, string t, string pD,string n, string ph, string e)
	:author(n,ph,e){
		set_id();
		version = v;
		title = t;
		publishing_data = pD;
		authorId = author.get_id();
		}
	void Book::set_title(string t){
		title = t;
		}
	void Book::set_publishing_data(string p){
		publishing_data = p;
		}
	void Book::set_version(string v){
		version = v;
		}
	void Book::set_id(){
		id = counterBook;
		counterBook++;
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
	string Book::get_version(){
		return version;
		}
	int Book::get_authorId(){
		return authorId;
	}
	Author Book::get_author(){
        return author;
	}
	string Book::get_author_name(){
		return author.get_name();
	}
#include <iostream>
#include <string.h>
#include "Author.h"

    // Author functions
    	//------Setter funcion
    	Author::Author(){}
    	void Author::set_ID(){
    		id = counterAuthor;
    		counterAuthor++;
    	}
    	Author::Author(string n, string ph, string e){
    		name = n;
    		phone = ph;
    		email = e;
			Author::set_ID();
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
    	//------Getter funcion
    	int Author::get_id(){return id;}
    	string Author::get_name(){return name;}
    	string Author::get_phone(){return phone;}
    	string Author::get_email(){return email;}
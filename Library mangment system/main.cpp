/*
Developement by: Anis bazzine start do this homework by 23-09-2021 
the homework give by :
	https://harmash.com/algorithms-and-data-structure/data-structure-test-1/
bugs to fixed:
1- when try to delete books don't show it's oky
2 when try to print books info don't show title book and author of book
*/
#include <iostream>
#include <string>
#include "stdlib.h"
#include "Library.h"
using namespace std;
void free();
void welcomeScrean();
void for_author();
void for_books();
void choise_list();

Library lib;
int choise;

int main(){
		welcomeScrean();
		choise_list();
	do{
		cin >> choise;

		if(choise == 1)// Author choise
			for_author();
		else if (choise == 2)// Books choise
			for_books();
		else if(choise == -1) // exit choise
			exit(0);
		
		choise_list();
	}while(choise != -1);
	
	return 0;
}
void welcomeScrean(){
	cout << "  =========================\n";
	cout << "||Welcome to your library  ||\n";
	cout << "  =========================\n";
}
void for_books(){
	/* 	-1- exit
		1- add
	    2- remove
	    3- print book info*/
	cout << "  --------------------------------------\n";
	cout << "|| 1 To add Books to your library.     ||\n";
	cout << "|| 2 To remove Books from your library.||\n";
	cout << "|| 3 To print Books info.              ||\n";
	cout << "|| -1 To exit from the program.        ||\n";
	cout << "  --------------------------------------\n";
	cout << "Please enter your choise : ";
	cin >> choise;
	if(choise == -1) // exit 
		exit(0);
	else if(choise == 1){ //Done add book
		// create varible
		int v;
		string t, pub_d, n, ph, e;
		
		cout << "Title : ";
		getline(cin,t);
		free();
		cout << "Publishing Date book : ";
		cin >>pub_d;
		cout << "Version of book : ";
		cin >> v;
		cout << "Name of his author : ";
		free();
		getline(cin,n);
		cout << "Phone of author : ";
		cin >> ph;
		cout << "Email of author : ";
		cin >> e;
		
		Book tempBook(v, t, pub_d, n, ph, e);
		lib.add_book(tempBook);
		
		cout << "ID of the book = " << tempBook.get_id() << endl;
		cout << "ID of the Author = " << tempBook.get_authorId() << endl;
	}
	else if(choise == 2){ // Done remove books with id
		int tempID;
		cout << "Enter the ID of the book to remove : ";
		cin >> tempID;
		lib.remove_book(tempID);
	}
	else if(choise == 3){ // Done print book info with id
		int tempID;
		cout << "Enter the ID to print book info : ";
		cin >> tempID;
		lib.print_book(tempID);
	}
}
void for_author(){
	// -1- exit
	// 1- add
	// 2- remove
	// 3- print author info
	// 4- print author books	
	cout << "  --------------------------------------\n";
	cout << "|| 1 To add Author to your library.     ||\n";
	cout << "|| 2 To remove Author from your library.||\n";
	cout << "|| 3 To print Author info.              ||\n";
	cout << "|| 4 To print Author Books.             ||\n";
	cout << "|| -1 To exit from the program.         ||\n";
	cout << "  --------------------------------------\n";
	cout << "Please enter your choise : ";
	cin >> choise;
	if(choise == -1)  //  exit
		exit(0);
	else if(choise == 1){ // Done add Author 
		string n, ph, e;
		free();
		cout << "Enter name of author : ";
		getline(cin, n);
		cout << "Enter phone of author : ";
		cin >> ph;
		cout << "Eneter email of author : ";
		cin >> e;
		Author tempAuthor(n,ph,e);
		lib.add_author(tempAuthor);
	}
	else if(choise == 2){ // Done remove author with id
		int tempID;
		cout << "Enter the ID of the Author to remove : ";
		cin >> tempID;
		lib.remove_author(tempID);
	}
	else if(choise == 3){ // Done print author info with id
		int tempID;
		cout << "Enter the ID of the Author to print his info : ";
		cin >> tempID;
		lib.print_author(tempID);
	}
	else if(choise == 4){ // print author books with id of author
		int tempID;
		cout << "Enter the ID of the Author to print his books : ";
		cin >> tempID;
		lib.print_author_books(tempID);
	}
}
void choise_list(){
	cout << "  =========================\n";
	cout << "|| 1 To Author option      ||\n";
	cout << "|| 2 To Books option       ||\n";
	cout << "|| -1 To exit  		    ||\n";
	cout << "  =========================\n";
	cout << "Please enter your choise : ";
}
void free(){
	cin.ignore(100,'\n');
}

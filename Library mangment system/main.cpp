#include <iostream>
#include <string>
#include "Library.h"
using namespace std;
void free();
void welcomeScrean();
void for_author();
void for_books();
void choise_list();

int Author::counterAuthor = 1;
int Book::counterBook = 1;
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
	cout << "|| Welcome to your library ||\n";
}
void for_books(){
	/* 	-1- exit
		1- add
		2- remove
		3- print book info*/
	cout << "  ---------------------------\n";
	cout << "|| 1 add Books.              ||\n";
	cout << "|| 2 remove Books.           ||\n";
	cout << "|| 3 print Books info.       ||\n";
	cout << "|| -1 exit from the program. ||\n";
	cout << "  ---------------------------\n";
	cout << "Please enter your choise : ";
	cin >> choise;
	if(choise == -1) // exit 
		exit(0);
	else if(choise == 1){ //Done add book
		string t, pub_d, n, ph, e, v;
		
		free();
		cout << "Title Book : ";
		getline(cin,t);
		cout << "Publishing Date book : ";
		getline(cin,pub_d);
		cout << "Version of book : ";
		getline(cin,v);
		cout << "Name of his author : ";
		getline(cin,n);
		cout << "Phone of author : ";
		getline(cin,ph);
		cout << "Email of author : ";
		cin >> e;
		free();

		
		Book tempBook(v, t, pub_d, n, ph, e);
		lib.add_book(tempBook);
	}
	else if(choise == 2){ // remove books with id
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
	cout << "  -----------------------------\n";
	cout << "|| 1 add Author.               ||\n";
	cout << "|| 2 remove Author.            ||\n";
	cout << "|| 3 print Author info.        ||\n";
	cout << "|| 4 print Author Books.       ||\n";
	cout << "|| -1 exit from the program.   ||\n";
	cout << "  -----------------------------\n";
	cout << "Please enter your choise : ";
	cin >> choise;
	if(choise == -1)  //  exit
		exit(0);
	else if(choise == 1){ // Done add Author 
		string n, ph, e;
		free();
		cout << "Name of author : ";
		getline(cin, n);
		cout << "Phone of author : ";
		cin >> ph;
		cout << "Email of author : ";
		cin >> e;
		Author tempAuthor(n,ph,e);
		lib.add_author(tempAuthor);
	}
	else if(choise == 2){ // Done remove author with id
		int tempID;
		cout << "Enter the Author ID to remove : ";
		cin >> tempID;
		lib.remove_author(tempID);
	}
	else if(choise == 3){ // Done print author info with id
		int tempID;
		cout << "Enter the Author ID to print his info : ";
		cin >> tempID;
		lib.print_author(tempID);
	}
	else if(choise == 4){ // print author books with id of author
		int tempID;
		cout << "Enter the Author ID to print his books : ";
		cin >> tempID;
		lib.print_author_books(tempID);
	}
}
void choise_list(){
	cout << "  ----------------------\n";
	cout << "|| 1 Author option      ||\n";
	cout << "|| 2 Books option       ||\n";
	cout << "|| -1 To exit           ||\n";
	cout << "  ----------------------\n";
	cout << "Enter your choise : ";
}
void free(){
	cin.ignore(50,'\n');
}
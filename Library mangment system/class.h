#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Author class
class Author{
private:
	static int counterAuthor;
	int id;
	string name, phone, email;
public:
	//------Setter funcion
	Author();
	Author(string n, string ph, string e);
	void set_phone(string ph);
	void set_name(string n);
	void set_email(string e);
	void set_ID();
	void operator = (Author a);
	//------Getter funcion
	int get_id();
	string get_name();
	string get_phone();
	string get_email();
};
// Books class
class Book : public Author{
private:
	static int counterBook;
	int id, version, authorId;
	string title, publishing_data;
	Author author;
public:
	//---------Setter function
	Book();
	Book(int v, string t, string pD,string n, string ph, string e);
	void set_title(string);
	void set_publishing_data(string);
	void set_version(int);
	void operator = (Book b);
	//---------Getter function
	int get_id();
	int get_version();
	int get_authorId();
	string get_title();
	string get_publishing_data();
	Author get_author();
};
class Library{
public:
	vector <Book> booksOfLib;
	vector <Author> authorsOfLib;

	void add_author(Author);
	void add_book(Book);

	void remove_author(int);
	void remove_book(int);

	void print_author(int);
	void print_book(int);
	void print_author_books(int);
};

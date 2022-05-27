#include <iostream>
#include <vector>
#include <string>
#include "Book.h"
using namespace std;

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

#include <iostream>
#include <string.h>
#include "Author.h"

using namespace std;

// Books class
class Book : public Author{
private:
	static int counterBook;
	int id, authorId;
	string title, publishing_data, version;
	Author author;
public:
	//---------Setter function
	Book();
	Book(string v, string t, string pD,string n, string ph, string e);
	void set_title(string);
	void set_id();
	void set_publishing_data(string);
	void set_version(string);
	//---------Getter function
	int get_id();
	string get_version();
	int get_authorId();
	string get_title();
	string get_publishing_data();
	Author get_author();
};
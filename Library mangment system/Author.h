#include <iostream>
#include <string.h>

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
	//------Getter funcion
	int get_id();
	string get_name();
	string get_phone();
	string get_email();
};
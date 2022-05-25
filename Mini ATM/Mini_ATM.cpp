#include <iostream>
using namespace std;
/*
ATM project
1- check balance
2- cash withdraw
3- User details
4- Update mobile N0
	the bug is when do somting insad function don't aplly in class user1
	I need to use pointers
*/
class Atm{
private:
	string accountNum;
	int pin;
	string mobile;
	double balance;
	string name;
public:
	Atm(){
		// empty constracter
	}
	Atm(string an, int p,string mob,double b, string n){
		accountNum = an;
		pin = p;
		mobile = mob;
		balance = b;
		name = n;
	}
	void set_data(string an, int p,string mob,double b, string n){
		accountNum = an;
		pin = p;
		mobile = mob;
		balance = b;
		name = n;
	}
	void cash_withDraw(double credit){
		if(credit < 0 or credit > balance)
			cout << "The amount is greater than what is in my account or less than 0\n";		
		else{
			balance -= credit;
			cout << "New Bank balance " << balance << endl;
		}
	}	
	void user_details(){
		cout << "*** User details ***\n";
		cout << "Account No : " << accountNum << endl;
		cout << "Name : " << name  << endl;
		cout << "Mobile number : " << mobile << endl;
		cout << "Your Balance : " << balance << endl; 
	}
	void update_mobile(string prevMob, string newMob){
		if(prevMob == mobile){
			mobile = newMob;
			cout << "Update saved\n";
		}
		else
			cout << "Incoract old number\n";
	}
	double get_balance(){return balance;}
	string get_mobNumber(){return mobile;}
	string get_accountNo(){return accountNum;}
	int get_pin(){return pin;}
};
void welcome(){
	cout << "*************\n";
	cout << " Welcome ATM\n";
	cout << "*************\n";
}
void choise_fun(){
	cout << "Select optionsa\n";
	cout << "1- check balance\n";
	cout << "2- cash withdraw\n";
	cout << "3- show user details\n";
	cout << "4- Update mobile number\n";
	cout << "5- exit\n";
}
bool log_in(Atm &a){
	string acNum;
	int p = 0;
	cout << "Enter your acount No ";
	cin >> acNum;
	cout << "Enter code PIN ";
	cin >> p;
	if(acNum == a.get_accountNo() and p == a.get_pin()){
		return true;
	}
	return false;
}
void switcher(Atm &a,int& ch){
	double credit = 0;
	string prevMob, newMob;
	switch(ch){	
		case 1:
			cout << "balance : " << a.get_balance() << endl;
			break;
		case 2:
			cout << "enter the amount ";
			cin >> credit;
			a.cash_withDraw(credit);
			break;
		case 3:
			a.user_details();
			break;
		case 4:
			cout << "Enter old number\n";	
			cin >> prevMob;
			cout << "Enter new Number\n";
			cin >> newMob;
			a.update_mobile(prevMob,newMob);
			break;
		case 5:
			cout << "Exit form the program\n";
			exit(0);
	}
}
int main() {
	Atm user1;
	int choise = 0;
	user1.set_data("123456789",1111,"+213550000000",10000,"Anis");
	welcome();
	bool check = log_in(user1);
	while(!check){
		check = log_in(user1);
	}
	do{
		// welcome();
		choise_fun();
		cin >> choise;
		switcher(user1,choise);
	}while(choise != 5);
	return 0;
}

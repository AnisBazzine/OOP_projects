/*
#include <cmath>
#include <iostream>
#include <iomanip>
#include <fstream>
#include <stdlib.h>
#include <ctime>
using namespace std;

double addition (int checkin){
	string cancel, pay;
	double bed, breakfast;

	cout<<"\nNo. of extra bed(1 bed = RM50/night): ";
	cin>> bed;
	cout<< endl;
	cout<<"No. of pax for breakfast(RM15/pax): ";
	cin>>breakfast;
	cout<<endl;
	cout<<"Do you want free cancellation policy? (RM50) (yes/no): " ;
	cin>>cancel;
	cout<<endl;
	cout<<"Do you want to pay now or anytime between the current date and 3 days before the check in date? "<<endl;
	cout<<"If you pay 3 days before check in date , you will be charged a total of RM30 (yes/no)"<<endl;
	cin>>pay;
	double total=0;
	bed=bed*50*checkin;
	breakfast=breakfast*15*checkin;
	if(cancel=="yes")
    {total+=50;}//price one night??
    else if ( cancel=="no")
    {total+=0;}

    if (pay == "yes")
    {total+=0;}
    else if (pay == "no")
    {total+=30;}

	total=total+bed+breakfast;
	return total;
}


void payment(double sum,double addf,string name,string address,string hpnum,int room,int people,int day1,int month1,int year1,int day2,int month2,int year2,int days){

  double tax = 0;
  double total = 0;
  tax=(sum+addf)*0.1;
  total=tax+sum+addf;

  string room_type;
  if (room==1){
      room_type="Standard";
  }
  else if (room==2){
      room_type="Deluxe";
  }

   cout <<"\t\t\t\t*************************\n"<<endl;
   cout <<"\t\t\t\t   Hotel Baby Sayang"<<endl;
   cout <<"\n\t\t\t\t*************************"<<endl<<endl;
   cout << "Name :"<<name<<endl;
   cout << "Address :"<<address<<endl;
   cout << "Handphone Number :"<<hpnum<<endl<<endl;
   cout << "Room \t\t\t: "<<room_type<<endl;
   cout << "Tenants \t\t: "<<people<<" people"<<endl;
   cout << "Check in \t\t: "<<day1<<"/"<<month1<<"/"<<year1<<endl;
   cout << "Check out \t\t: "<<day2<<"/"<<month2<<"/"<<year2<<endl;
   cout << "Duration Stayed \t: "<<days<<endl<<endl;
   cout << "Room Price\t\t: RM"<<sum<<endl;
   cout << "Additional fees \t: RM"<<addf<<endl;
   cout << "Service tax (10%)\t: RM"<<tax<<endl;
   cout << "Final Total \t\t: RM"<<total<<endl<<endl;
   cout << "Thank you for booking with us! Enjoy your stay!"<<endl;
   cout << "For more information, contact us at 03-6557889 or visit our instagram @hotelbabysayang"<<endl;

  fstream myfile;
   myfile.open ("receipt.txt");
   myfile <<"\t\t\t\t*************************\n"<<endl;
   myfile <<"\t\t\t\t   Hotel Baby Sayang"<<endl;
   myfile<<"\n\t\t\t\t*************************"<<endl<<endl;
   myfile << "Name :"<<name<<endl;
   myfile << "Address :"<<address<<endl;
   myfile << "Handphone Number :"<<hpnum<<endl<<endl;
   myfile << "Room \t\t\t: "<<room_type<<endl;
   myfile << "Tenants \t\t: "<<people<<" people"<<endl;
   myfile << "Check in \t\t: "<<day1<<"/"<<month1<<"/"<<year1<<endl;
   myfile << "Check out \t\t: "<<day2<<"/"<<month2<<"/"<<year2<<endl;
   myfile << "Duration Stayed \t: "<<days<<endl<<endl;
   myfile << "Room Price\t\t: RM"<<sum<<endl;
   myfile << "Additional fees \t: RM"<<addf<<endl;
   myfile << "Service tax (10%)\t: RM"<<tax<<endl;
   myfile << "Final Total \t\t: RM"<<total<<endl<<endl;
   myfile << "Thank you for booking with us! Enjoy your stay!"<<endl;
   myfile << "For more information, contact us at 03-6557889 or visit our instagram @hotelbabysayang"<<endl;

  myfile.close();

}


double date (int day1,int month1, int year, int day2, int month2, int year4,int room ){   
    int i;
    double difference;
    month1-=1;
    month2-=1;
    struct tm a = {0,0,0,day1,month1,year};
    struct tm b = {0,0,0,day2,month2,year4}; //104 = 2004
    time_t x = mktime(&a);
    time_t y = mktime(&b);
    double days;
    if ( x != (std::time_t)(-1) && y != (time_t)(-1) ){
        double difference = difftime(y, x) / (60 * 60 * 24);
        cout << ctime(&x);
        cout << ctime(&y);
        cout << "difference = " << difference << " days" << endl;
        days=difference;
    }

    cout<<days<<endl;
    return days;

}

int main(){

    string name;
    string address;
    string hpnum;
    string add;
    int room;
    int people;
    int day1,month1,year1;
    int day2,month2,year2;
    int i,year,year4;
    start:
    cout<<"\n\t\t\t\t*************************";
    cout<<"\n\t\t\t\t HOTEL BOOKING SERVICE ";
    cout<<"\n\t\t\t\t      * MAIN MENU *";
    cout<<"\n\t\t\t\t*************************";

    cout<<"\n\nEnter the check in date:\n\n"<<endl;;
    cin>>day1>>month1>>year1;
    year=year1-1900;
    system("cls");

    cout<<day1<<"/"<<month1<<"/"<<year1<<endl;
    cout<<"Enter your name"<<endl;
    cin>>name;
    cout<<"Enter your address"<<endl;
    cin>>address;
    cout<<"Enter your Handphone Number"<<endl;
    cin>>hpnum;
    cout<<"Enter the number of tenants"<<endl;
    cin>>people;
    cout<<"Choose your preferred room"<<endl;
    cout<<"Press '1' for standard room"<<endl;
    cout<<"Press '2' for deluxe room"<<endl;
    cin>>room;
    cout<<"Enter your check out date"<<endl;
    cin>>day2>>month2>>year2;
    year4=year2-1900;
    double days = date (day1,month1, year, day2, month2, year4,room);//dcalc(int day1,int month1,int year1,int day2,int month2,int year2)
    //system("cls");
    double sum=0;
    double addf=0;

    if (people<=2&&people>0){
        if (room==1){
            sum+=100;
            for(i=2;i<=days;i++)
                sum+=70;
        }

        else if (room==2){
            sum+=200;
            for(i=2;i<=days;i++)
                sum+=150;
        }
    }
    else if (people<=4&&people>2){
        if (room==1){
            sum+=150;
            for(i=2;i<=days;i++)
                sum+=120;
        }
        else if (room==2){
            sum+=300;
            for(i=2;i<=days;i++)
                sum+=200;
        }
    }
    else if (people<=6&&people>4){
        if (room==1){
            sum+=250;
            for(i=2;i<=days;i++)
                sum+=150;
        }
        else if (room==2){
            sum+=400;
            for(i=2;i<=days;i++){
                sum+=250;
            }
        }
    }
    cout<<sum<<endl;
    system("cls");
    cout<<"Do you want an addition of extra bed or any other services ? Type yes or no"<<endl;
    cin>>add;
    if(add=="yes"){
        addf=addition(days);
    }
    cout<<addf<<endl;
    system("cls");
    payment(sum,addf,name,address,hpnum,room,people,day1,month1,year1,day2,month2,year2,days);
    string choice;
    cout<<"Do you want to book another room.. (yes/no)?"<<endl;
    cin>> choice;
    if(choice=="yes"){
        goto start;
    }
    else if(choice=="no"){
        return 0;
    }
}
*/



/*
	
	Title			: Hotel Management System
	Language		: C++
	Author			: Daljeet Singh Chhabra
	Date Created	: 16-02-2016
	Last Modified	: 01-10-2018

*/

/*
#include<fstream.h>
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<process.h>
#include<dos.h>

//MARK:- Interface Functions Here =>

void intro() {
	cout<<"\n\n\t            ";
	cout<<"     C++ Project On Hotel Management System";
	cout<<"\n\n\t\t\t\t     MADE BY";
	cout<<"\n°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°";
	cout<<"°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°";
	cout<<"||\t\t\t\t\t\t\t\t\t      ||";
	cout<<"||\t\t\t\t\t\t\t\t\t      ||";
	cout<<"||\t\t\t\tDaljeet Singh Chhabra\t\t\t      ||";
	cout<<"||\t\t\t\t\t\t\t\t\t      ||";
	cout<<"||\t\t\t\t\t  \t\t\t\t      ||";
	cout<<"°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°";
	cout<<"°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°";
}

void head() {
	clrscr();
	cout<<"°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°";
	cout<<"°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°";
	cout<<"?t\t\t\t\t\t\t\t\t       ?;
	cout<<"?t\t\t\t   XYZ Group of Hotels\t\t\t       ?;
	cout<<"?t\t\t\t\t\t\t\t\t       ?;
	cout<<"°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°";
	cout<<"°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°";
}

void time() {
	int i=0;
	long long j;
	cout<<"	\n\n\n	Connecting to Server\n 	Syncing DaTa";
	while(i<10)	{
		for (j=5;j>4;j++) {
			if (j==99999) {
				cout<<".";
				break;
			}
		}
		++i;
	}
}

//MARK:- Hotel Class Here =>

class hotel {
	private:
			int room_no;
			char name[30];
			char address[50];
			char phone[15];
			int days;
			float fare;
	public:
			void main_menu();		//to display the main menu
			void add();				//to book a room
			void display(); 		//to display the customer record
			void rooms();			//to display allotted rooms
			void edit();			//to edit the customer record
			int check(int);	     	//to check room status
			void modify(int);		//to modify the record
			void delete_rec(int);   //to delete the record
};

void hotel::main_menu() {
	int choice;
	while(choice!=5) {
		clrscr();
		head();
		cout<<"\n\t\t\t\t*************";
		cout<<"\n\t\t\t\t* MAIN MENU *";
		cout<<"\n\t\t\t\t*************";
		cout<<"\n\n\n\t\t\t1.Book A Room";
		cout<<"\n\t\t\t2.Customer Record";
		cout<<"\n\t\t\t3.Rooms Allotted";
		cout<<"\n\t\t\t4.Edit Record";
		cout<<"\n\t\t\t5.Exit";
		cout<<"\n\n\t\t\tEnter Your Choice: ";
		cin>>choice;
		switch(choice) {
			case 1:	add();
					break;
			case 2: display();
					break;
			case 3: rooms();
					break;
			case 4:	edit();
					break;
			case 5: break;
			default: {
				cout<<"\n\n\t\t\tWrong choice.....!!!";
				cout<<"\n\t\t\tPress any key to continue....!!";
				getch();
			}
		}
	}
}

void hotel::add() {
	clrscr();
	head();
	int r,flag;
	ofstream fout("Record.dat",ios::app);
	cout<<"\n Enter Customer Details";
	cout<<"\n ----------------------";
	cout<<"\n\n Room no: ";
	cin>>r;
	flag=check(r);
	if(flag)
		cout<<"\n Sorry..!!!Room is already booked";
	else {
		room_no=r;
		cout<<" Name: ";
		gets(name);
		cout<<" Address: ";
		gets(address);
		cout<<" Phone No: ";
		gets(phone);
		cout<<" No of Days to Checkout: ";
		cin>>days;
		fare=days*900;						//900 is currently set as the
											//default price per day
		fout.write((char*)this,sizeof(hotel));
		cout<<"\n Room is booked...!!!";
	}

	cout<<"\n Press any key to continue.....!!";
	getch();
	fout.close();
}

void hotel::display() {
	clrscr();
	head();
	ifstream fin("Record.dat",ios::in);
	int r,flag;
	cout<<"\n Enter room no: ";
	cin>>r;
	while(!fin.eof()) {
		fin.read((char*)this,sizeof(hotel));
		if(room_no==r) {
			clrscr();
			head();
			cout<<"\n Customer Details";
			cout<<"\n ----------------";
			cout<<"\n\n Room no: "<<room_no;
			cout<<"\n Name: "<<name;
			cout<<"\n Address: "<<address;
			cout<<"\n Phone no: "<<phone;
			cout<<"\n Days: "<<days;
			cout<<"\n Total Fare: "<<fare;
			flag=1;
		}
	}
	if(flag==0)
		cout<<"\n Sorry Room no. not found or vacant....!!";
	cout<<"\n\n Press any key to continue....!!";
	getch();
	fin.close();
}

void hotel::rooms() {
	clrscr();
	head();
	ifstream fin("Record.dat",ios::in);
	cout<<"\n\t\t\t    List Of Rooms Allotted";
	cout<<"\n\t\t\t    ----------------------";
	while(!fin.eof()) {
		fin.read((char*)this,sizeof(hotel));
		cout<<"\n Room no: "<<room_no<<"\n Name: "<<name;
		cout<<"\n Address: "<<address<<"\n Phone: "<<phone;
		cout<<"\n Days: "<<days<<"\n Total: "<<fare;
		cout<<"\n**********************************";
	}
	cout<<"\n\n\n\t\t\tPress any key to continue.....!!";
	getch();
	fin.close();
}

void hotel::edit() {
	clrscr();
	head();
	int choice,r;
	cout<<"\n EDIT MENU";
	cout<<"\n ---------";
	cout<<"\n\n 1.Modify Customer Record";
	cout<<"\n 2.Delete Customer Record";
	cout<<"\n Enter your choice: ";
	cin>>choice;

	clrscr();
	head();
	cout<<"\n Enter room no: " ;
	cin>>r;
	switch(choice) {
		case 1:	modify(r);
				break;
		case 2:	delete_rec(r);
				break;
		default: cout<<"\n Wrong Choice.....!!";
	}
	cout<<"\n Press any key to continue....!!!";
	getch();
}


int hotel::check(int r) {
	int flag=0;
	ifstream fin("Record.dat",ios::in);
	while(!fin.eof()) {
		fin.read((char*)this,sizeof(hotel));
		if(room_no==r) {
			flag=1;
			break;
		}
	}

	fin.close();
	return(flag);
}

void hotel::modify(int r) {
	clrscr();
	head();
	long pos,flag=0;
	fstream file("Record.dat",ios::in|ios::out|ios::binary);
	while(!file.eof()) {
		pos=file.tellg();
		file.read((char*)this,sizeof(hotel));
		if(room_no==r) {
			cout<<"\n Enter New Details";
			cout<<"\n -----------------";
			cout<<"\n Name: ";
			gets(name);
			cout<<" Address: ";
			gets(address);
			cout<<" Phone no: ";
			gets(phone);
			cout<<" Days: ";
			cin>>days;
			fare=days*900;
			file.seekg(pos);
			file.write((char*)this,sizeof(hotel));
			cout<<"\n Record is modified....!!";
			flag=1;
			break;
		}
	}

	if(flag==0)
		cout<<"\n Sorry Room no. not found or vacant...!!";
	file.close();
}

void hotel::delete_rec(int r) {
	clrscr();
	head();
	int flag=0;
	char ch;
	ifstream fin("Record.dat",ios::in);
	ofstream fout("temp.dat",ios::out);
	while(!fin.eof()) {
		fin.read((char*)this,sizeof(hotel));
		if(room_no==r) {
			cout<<"\n Name: "<<name;
			cout<<"\n Address: "<<address;
			cout<<"\n Phone No: "<<phone;
			cout<<"\n Days: "<<days;
			cout<<"\n Total Fare: "<<fare;
			cout<<"\n\n Do you want to delete this record(y/n): ";
			cin>>ch;
			if(ch=='n')
				fout.write((char*)this,sizeof(hotel));
			flag=1;
			break;
		}
		else
			fout.write((char*)this,sizeof(hotel));
	}

	fin.close();
	fout.close();
	if(flag==0)
		cout<<"\n Sorry room no. not found or vacant...!!";
	else {
		remove("Record.dat");
		rename("temp.dat","Record.dat");
	}
}

//MARK:- Main() Function Here =>

int main() {
	textbackground(RED);
	textcolor(0);
	hotel h;
	clrscr();
	cout<<"\n\n\n";
	intro();
	time();
	cout<<"\n\n\n\t\t\tPress any key to continue....!!";

	getch();
	clrscr();
	head();
	char id[5],pass[7];
	cout<<"\n\n\t\t\t\tusername => ";
	cin>>id;
	cout<<"\n\t\t\t\tpassword => ";
	cin>>pass;
	cout<<"\n\n\t";
	time();
	cout<<"\t";
	if(strcmp(id,"admin")==0&&strcmp(pass,"******")==0)
		cout<<"\n\n\t\t\t  !!!Login Successfull!!!";
	else {
		cout<<"\n\n\t\t\t!!!INVALID CREDENTIALS!!!";
		getch();
		exit(-1);
	}
	clrscr();
	h.main_menu();
	getch();
	
	return 0;
} 

*/
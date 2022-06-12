#ifndef COMPANY_H
#define COMPANY_H
#include <iostream>
#include "Order.h"


using namespace std;

class Company{
    private:
        vector <Person> persons;
        vector <Order> orders;
        vector <Prodact> prodacts;

    public:
        // Add
        void add_Prodact(Prodact prodact);
        void add_Person(Person person);
        void add_Order(Order order);
        // Remove
        void remove_Prodact(int id);
        void remove_Person(int id);
        void remove_Order(int id);
        // Print
        void print_person_info(int id);
        void print_prodact_details(int id);
        void print_order_details(int id);
        void print_person_orders(int id);
        void print_tot_orders();
        void print_tot_prodacts();
        void print_tot_persons();
        
};
#endif // COMPANY_H
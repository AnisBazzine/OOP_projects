#ifndef COMPANY_H
#define COMPANY_H
#include <iostream>
#include "Order.h"
#include "Employee.h"
using namespace std;

class Company{
    private:
        vector <Client> clients;
        vector <Employee> employes;
        vector <Order> orders;
        vector <Prodact> prodacts;

    public:
        // Add
        void add_Prodact(Prodact prodact);
        void add_Employee(Employee employee);
        void add_Client(Client client);
        void add_Order(Order order);
        // Remove
        void remove_Prodact(int id);
        void remove_Employee(int id);
        void remove_Client(int id);
        void remove_Order(int id);
        // Print
        void print_client_info(int id);
        void print_employee_info(int id);
        void print_prodact_details(int id);
        void print_order_details(int id);
        void print_client_orders(int id);
        void print_tot_orders();
        void print_tot_prodacts();
        void print_tot_employee();
        void print_tot_client();
};
#endif // COMPANY_H
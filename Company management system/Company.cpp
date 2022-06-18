#include <iostream>
#include "Company.h"
using namespace std;
    // Add
    void Company::add_Prodact(Prodact prodact){
        prodacts.push_back(prodact);
        cout << "Id prodact : " << prodact.getId() << endl;
        cout << "Add Ok\n";
    }
    void Company::add_Employee(Employee employee){
        employes.push_back(employee);
        cout << "Id employee : " << employee.getId() << endl;
        cout << "Add OK\n";
    }
    void Company::add_Client(Client client){
        clients.push_back(client);
        cout << "Id client : " << client.getId() << endl;
        cout << "Add OK\n";
    }
    void Company::add_Order(Order order){
        clients.push_back(order.getClient());
        // add vector prodacts ???
        vector <Prodact> pr = order.getProdacts();
        for(int i = 0; i < order.getTotalProdacts(); i++)
            prodacts.push_back(pr[i]);

        orders.push_back(order);
        cout << "Id order : " << order.getId() << endl;
        cout << "Total Prodacts : " << order.getTotalProdacts() << endl;
        cout << "Id person : " << order.getIdClient() << endl;
        cout << "Add OK\n";
        // delete(&pr);
    }
    // Remove
    void Company::remove_Prodact(int id){
        if(prodacts.size() <= 0){
            cout << "No Prodacts\n";
            return;
        }
        else {
            for(int i = 0; i <= prodacts.size(); i++){
                if(prodacts[i].getId() == id){
                    prodacts.erase(prodacts.begin() + i);
                    cout << "Remove Ok\n";
                    return;
                }
            }
            cout << "No Prodact with this id\n";
        }
    }
    void Company::remove_Employee(int id){
        if(employes.size() <= 0){
            cout << "No Employee\n";
            return;
        }
        else {
            for(int i = 0; i <= employes.size(); i++){
                if(employes[i].getId() == id){
                    employes.erase(employes.begin() + i);
                    cout << "Remove Ok\n";
                    return;
                }
            }
            cout << "No employe with this id\n";
        }
    }
    void Company::remove_Client(int id){
        if(clients.size() <= 0){
            cout << "No Client\n";
            return;
        }
        else {
            for(int i = 0; i <= clients.size(); i++){
                if(clients[i].getId() == id){
                    clients.erase(clients.begin() + i);
                    cout << "Remove Ok\n";
                    return;
                }
            }
            cout << "No Client with this id\n";
        }
    }
    void Company::remove_Order(int id){
        if(orders.size() <= 0){
            cout << "No Orders\n";
            return;
        }
        else {
            for(int i = 0; i <= orders.size(); i++){
                if(orders[i].getId() == id){
                    orders.erase(orders.begin() + i);
                    cout << "Remove Ok\n";
                    return;
                }
            }
            cout << "No Order with this id\n";
        }
    }
    // Print
    void Company::print_client_info(int id){
        if(clients.size() <= 0){
            cout << "Empty client\n";
            return;
        }
        else {
            for(int i = 0; i <= clients.size(); i++)
                if(clients[i].getId() == id){
                    cout << "Client info print\n";
                    cout << "Id : " << clients[i].getId() << endl;
                    cout << "Name : " << clients[i].getName() << endl;
                    cout << "Phone : " << clients[i].getPhone() << endl;
                    cout << "Gender : " << clients[i].getGender() << endl;
                    clients[i].print_extra_info();
                    cout << "**************\n";
                    return;
                }
            cout << "No Client with this id\n";
        }
    }
    void Company::print_employee_info(int id){
        if(employes.size() <= 0){
            cout << "Empty Employe\n";
            return;
        }
        else {
            for(int i = 0; i <= employes.size(); i++)
                if(employes[i].getId() == id){
                    cout << "Client info print\n";
                    cout << "Id : " << employes[i].getId() << endl;
                    cout << "Name : " << employes[i].getName() << endl;
                    cout << "Phone : " << employes[i].getPhone() << endl;
                    cout << "Gender : " << employes[i].getGender() << endl;
                    employes[i].print_extra_info();
                    cout << "**************\n";
                    return;
                }
            cout << "No Client with this id\n";
        }
    }
    void Company::print_prodact_details(int id){
        if(prodacts.size() <= 0){
            cout << "Empty prodact\n";
            return;
        }
        else {
            for(int i = 0; i <= prodacts.size(); i++)
                if(prodacts[i].getId() == id){
                    cout << "Prodact details print\n";
                    cout << "Id : " << prodacts[i].getId() << endl;
                    cout << "Name : " << prodacts[i].getName() << endl;
                    cout << "Price : " << prodacts[i].getPrice() << endl;
                    cout << "**************\n";
                    return;
                }
            cout << "No Prodact with this id\n";
        }
    }
    void Company::print_order_details(int id){
        if(orders.size() <= 0){
            cout << "Empty Order\n";
            return;
        }
        else{
            for(int i = 0; i <= orders.size(); i++)
                if(orders[i].getId() == id){
                    Person p(orders[i].getClient());
                    cout << "Order details print\n";
                    cout << "Id : " << orders[i].getId() << endl;
                    cout << "Name person : " << p.getName() << endl;
                    cout << "Data : " << orders[i].getData() << endl;
                    cout << "Status : " << (orders[i].getIsPaid() ? "Paid" : "Not paid") << endl;
                    vector <Prodact> pt = orders[i].getProdacts();
                    cout << "Prodacts : \n";
                    for(int j = 0; j < pt.size(); j++)
                        cout << j + 1 << "-" << pt[j].getName() << endl;
                    cout << "***********\n";
                    return;
                }
            cout << "No Order with this id\n";
        }
    }
    void Company::print_client_orders(int id){
        // how or when to use it
        // go to order and check id client
        // then print order details
        bool check = 0;
        string name = "";
        if(orders.size() <= 0){
            cout << "Empty Order\n";
            return;
        }
        else{
            for(int i = 0; i <= orders.size(); i++)
                if(orders[i].getIdClient() == id){
                    check = true;
                    name = orders[i].getClient().getName();
                    cout << "*************\n";
                    cout << "Id : " << orders[i].getId() << endl;
                    cout << "Data : " << orders[i].getData() << endl;
                    cout << "Status : " << (orders[i].getIsPaid() ? "Paid" : "Not paid") << endl;
                    cout << "Total prodacts : " << orders[i].getTotalProdacts() << endl;
                }
            cout << "*************\n";
            cout << "Client : " << name << endl;
            if(check == 0)
                cout << "No client with this id\n";
        }
    }
    void Company::print_tot_orders(){
        cout << "Orders : " << orders.size() << endl;
    }
    void Company::print_tot_prodacts(){
        cout << "Prodacts : " << prodacts.size() << endl;
    }
    void Company::print_tot_employee(){
        cout << "Employes : " << employes.size() << endl;
    }
    void Company::print_tot_client(){
        cout << "Clients : " << clients.size() << endl;
    }

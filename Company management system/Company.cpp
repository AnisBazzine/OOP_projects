#include<iostream>
#include "Company.h"

using namespace std;
    // Add
    void Company::add_Prodact(Prodact prodact){
        prodacts.push_back(prodact);
        cout << "Id prodact : " << prodact.getId() << endl;
        cout << "Add Ok\n";
    }
    void Company::add_Person(Person person){
        persons.push_back(person);
        cout << "Id person : " << person.getId() << endl;
        cout << "Add OK\n";
    }
    void Company::add_Order(Order order){
        orders.push_back(order);
        cout << "Id order : " << order.getId() << endl;
        cout << "Id person : " << order.getIdPerson() << endl;
        cout << "Add OK\n";
    }
    // Remove
    void Company::remove_Prodact(int id){
        if(prodacts.size() <= 0){
            cout << "No Prodacts\n";
            return;
        }
        else {
            for(int i = 1; i <= prodacts.size(); i++){
                if(prodacts[i].getId() == id){
                    prodacts.erase(prodacts.begin() + i);
                    cout << "Remove Ok\n";
                    return;
                }
            }
            cout << "No Prodact with this id\n";
        }
    }
    void Company::remove_Person(int id){
        if(persons.size() <= 0){
            cout << "No Person\n";
            return;
        }
        else {
            for(int i = 1; i <= persons.size(); i++){
                if(persons[i].getId() == id){
                    persons.erase(persons.begin() + i);
                    cout << "Remove Ok\n";
                    return;
                }
            }
            cout << "No Person with this id\n";
        }
    }
    void Company::remove_Order(int id){
        if(orders.size() <= 0){
            cout << "No Orders\n";
            return;
        }
        else {
            for(int i = 1; i <= orders.size(); i++){
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
    void Company::print_person_info(int id){
        if(persons.size() <= 0){
            cout << "Empty person\n";
            return;
        }
        else {
            for(int i = 1; i <= persons.size(); i++)
                if(persons[i].getId() == id){
                    cout << "Person info print\n";
                    cout << "Id : " << persons[i].getId() << endl;
                    cout << "Name : " << persons[i].getName() << endl;
                    cout << "Phone : " << persons[i].getPhone() << endl;
                    cout << "Gender : " << persons[i].getGender() << endl;
                    persons[i].print_extra_info();
                    cout << "**************\n";
                    return;
                }
            cout << "No Person with this id\n";
        }
    }
    void Company::print_prodact_details(int id){
        if(prodacts.size() <= 0){
            cout << "Empty prodact\n";
            return;
        }
        else {
            for(int i = 1; i <= prodacts.size(); i++)
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
            for(int i = 1; i <= orders.size(); i++)
                if(orders[i].getId() == id){
                    Person p(orders[i].getPerson());
                    cout << "Order details print\n";
                    cout << "Id : " << orders[i].getId() << endl;
                    cout << "Name person : " << p.getName() << endl;
                    cout << "Data : " << orders[i].getData() << endl;
                    cout << (orders[i].getIsPaid() ? "Paid" : "Not paid") << endl;
                    vector <Prodact> pt = orders[i].getProdacts();
                    cout << "Prodacts : \n";
                    for(int j = 0; j <= pt.size(); j++)
                        cout << j + 1 << "-" << pt[j].getName() << endl;
                    cout << "**************\n";
                    return;
                }
            cout << "No Order with this id\n";
        }
    }
    void Company::print_person_orders(int id){

    }
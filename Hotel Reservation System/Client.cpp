#include <iostream>
#include "Client.h"

using namespace std;
    int Client::clientIdCounter = 1;
    Client::Client(){

    }
    Client::Client(string name, string phone, string email, string adress, string city, string nationality, int passportNumber, int cardNumber, int cvcCode){
        Client::setClientId();
        this->name = name;
        this->phone = phone;
        this->email = email;
        this->adress = adress;
        this->city = city;
        this->nationality = nationality;
        this->passportNumber = passportNumber;
        this->cardNumber = cardNumber;
        this->cvcCode = cvcCode;
    }
    void Client::setClientId(){
        clientId = clientIdCounter++;
    }
    int Client::getClientId(){
        return clientId;
    }
    string Client::getName(){
        return name;
    }
    string Client::getPhone(){
        return phone;
    }
    string Client::getEmail(){
        return email;
    }
    string Client::getAdress(){
        return adress;
    }
    string Client::getCity(){
        return city;
    }
    string Client::getNationality(){
        return nationality;
    }
    int Client::getPassportNumber(){
        return passportNumber;
    }
    int Client::getCardNumber(){
        return cardNumber;
    }
    int Client::getCvcCode(){
        return cvcCode;
    }
    void Client::printInfo(){
        cout << "Client ID : " << clientId << endl;
        // cout << "Days      : " << daylight << endl;// daylight !!?
    }
    void Client::printGloblalInfo(int roomId, int days, float fees){
        //  ClientId roomId name email address city nationap passpor phone days fees
        cout << roomId << "\t" << clientId << "\t" <<  name << "\t" << email << "\t" <<  adress << "\t" << city << "\t" << nationality << "\t" << passportNumber << "\t" << phone << "\t" << days << "\t" << fees << "\n";
    }
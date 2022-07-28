#ifndef CLIENT_H
#define CLIENT_H
#include <iostream>

class Client{
    static int clientIdCounter;
    int clientId;
    string name;
    string phone;
    string email;
    string adress;
    string city;
    string nationality;
    int passportNumber;
    int cardNumber, cvcCode;
public:
    Client();
    Client(string name, string phone, string email, string adress, string city, string nationality, int passportNumber, int cardNumber, int cvcCode);
    void setClientId();
    int getClientId();
    string getName();
    string getPhone();
    string getEmail();
    string getAdress();
    string getCity();
    string getNationality();
    int getPassportNumber();
    int getCardNumber();
    int getCvcCode();
    void printInfo();
    void printGloblalInfo(int roomId, int days, float fees);
};
#endif 
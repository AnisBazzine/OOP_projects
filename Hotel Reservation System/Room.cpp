#include <iostream>
#include "Room.h"

using namespace std;

    Room::Room(){
        typeRoom = "";
        capacity = "";
        roomId = 0;
        fees = 0;
        isAvailable = true;
        dayIn = 01, monthIn = 01, yearIn = 2222;
        dayOut = 01, monthOut = 01, yearOut = 2222;
        }
    Room::Room(int dayIn, int monthIn, int yearIn, int dayOut, int monthOut, int yearOut, Client client){
        this->dayIn = dayIn;
        this->monthIn = monthIn;
        this->yearIn = yearIn;
        this->dayOut = dayOut;
        this->monthOut = monthOut;
        this->yearOut = yearOut;
        this->client = client;
    }
    void Room::setClient(Client client){
        this->client = client;
    }
    void Room::setDateIn(int di, int mi, int yi){
        this->dayIn = di;
        this->monthIn = mi;
        this->yearIn = yi;
    }
    void Room::setDateOut(int doo, int moo, int yoo){
        this->dayOut = doo;
        this->monthOut = moo;
        this->yearOut = yoo;
    }
    void Room::setIsAvailable(bool isAvailable){
        this->isAvailable = isAvailable;
    }
    void Room::setTypeRoom(string typeRoom){
        if(typeRoom == "N" || typeRoom == "n")
            this->typeRoom = "Normal";
        else if(typeRoom == "V" || typeRoom == "v")
            this->typeRoom = " Vip  ";
    }
    void Room::setCapacity(string capacity){
        if(capacity == "S" || capacity == "s")
            this->capacity = "Single";
        else if(capacity == "D" || capacity == "d")
            this->capacity = "Double";
        else if(capacity == "T" || capacity == "t")
            this->capacity = "Triple";
    }
    void Room::setRoomId(int roomId){
        this->roomId = roomId;
    }
    void Room::setFees(float fees){
        this->fees = fees;
    }
    int Room::getDays(){
        int days = 0;
        if(monthOut == monthIn){
            days = dayOut - dayIn;
        }
        else if(monthOut > monthIn){
            days = (monthOut - monthIn) * 30 + dayOut - dayIn;
        }
        return days;
    }
    float Room::getTotalPrice(){
        return getDays() * getFees();
    }
    Client Room::getClient(){
        return client;
    }
    string Room::getType(){
        return typeRoom;
    }
    string Room::getCapacity(){
        return capacity;
    }
    int Room::getRoomId(){
        return roomId;
    }
    int Room::getDayIn(){
        return dayIn;
    }
    int Room::getMonthIn(){
        return monthIn;
    }
    int Room::getYearIn(){
        return yearIn;
    }
    int Room::getDayOut(){
        return dayOut;
    }
    int Room::getMounthOut(){
        return monthOut;
    }
    int Room::getYearOut(){
        return yearOut;
    }
    float Room::getFees(){
        return fees;
    }
    bool Room::getIsAvailable(){
        return isAvailable;
    }
    void Room::printInfo(){
        cout << "Room ID          : " << roomId << endl;
        cout << "Number of Nights : " << getDays() << endl;
        cout << "Night Cost       : " << getFees() << endl;
        cout << "Total price      : " << getTotalPrice() << endl;
    }
    void Room::printGloblalInfo(){
		string available = (isAvailable == 1) ? "True" : "False";
        cout << roomId << "\t"<< typeRoom << "\t " << capacity << " \t " << dayIn << "-" << monthIn << "-" << yearIn << " \t \t " << dayOut << "-" << monthOut << "-" << yearOut << " \t \t \t " << available << endl; 
    }
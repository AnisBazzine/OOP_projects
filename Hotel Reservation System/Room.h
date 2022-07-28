#ifndef ROOM_H
#define ROOM_H
#include "Client.h"
#include <iostream>
    /*
    type   capacity
    Normal single room: $100
    Normal double room: $200
    Normal triple room: $300
    Vip single room: $150
    Vip double room: $250
    Vip triple room: $350
    */
class Room{
    string typeRoom; // Normal, Vip
    string capacity; // Single, Double, Triple
    int roomId;
    float fees;
    bool isAvailable;
    Client client;
    int dayIn, monthIn, yearIn;
    int dayOut, monthOut, yearOut;
public:
    Room();
    
    Room(int dayIn, int monthIn, int yearIn, int dayOut, int monthOut, int yearOut, Client client);
    void setClient(Client client);
    void setDateIn(int di, int mi, int yi);
    void setDateOut(int doo, int moo, int yoo);
    void setIsAvailable(bool isAvailable);
    void setTypeRoom(string typeRoom);
    void setCapacity(string capacity);
    void setRoomId(int roomId); 
    void setFees(float fees);
    // getter functions
    int getDays();
    float getTotalPrice();
    Client getClient();
    string getType();
    string getCapacity();
    int getRoomId();
    int getDayIn();
    int getMonthIn();
    int getYearIn();
    int getDayOut();
    int getMounthOut();
    int getYearOut();
    bool getIsAvailable();
    float getFees();
    void printInfo();
    void printGloblalInfo();
};
#endif 
#ifndef HOTEL_H
#define HOTEL_H
#include <string>
#include <array>
#include "Room.h"
using namespace std;

    /*
    type   capacity
    Normal single room: $100
    Normal double room: $200
    Normal triple room: $300
    Vip single room: $150
    Vip double room: $250
    Vip triple room: $350
    */
    // 01 => 10 Normal single room: 10
    // 11 => 20 Normal double room: 10
    // 21 => 30 Normal triple room: 10
    // 31 => 40 Vip single room: 10
    // 41 => 50 Vip double room: 10
    // 51 => 60 Vip triple room: 10
class Hotel{
    array <Room, 60> rooms;
	int roomAvailable;
    int choise;
public:
    Hotel();
    int getRoomAvailable();
    void checkIn();
    void checkOut();        // get the room number from the user and check out the room
    void mainMenu();		//to display the main menu
    void displayClient();    //to display all the client  details
    void displayRoom();      //to display all the room details and their status
    void availbeleRoom();    //to display  available room  
    void reservedRoom();    //to display reserved room
    void TotalPriceOfToday();     //to calculate the total income of today
	void free();
};
#endif // HOTEL_H_INCLUDED
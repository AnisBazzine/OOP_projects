#include <iostream>
#include "Hotel.h"
using namespace std;

    // when Check in choise then print rooms->at(idcounter).printInfo() in Hotel.cpp line 175
    /*
    1- If you add a false client info and get  "Sorry, we don't have this room type and capacity" in Hotel.cpp line 163 
    then it add clinet and don't show his info 
    2- In check out func 
        your room id is 31 so you can't check out ==>> you can check out 30 
        if your room is is 1 you can't check out 
    availbeleRoom func in Hotel.cpp need to changed, make it more easy
    rooms.at(i).printGloblalInfo() func in Hotel::displayRoom() in Hotel.cpp need to changed,
    
    */
int main(){
    cout << "RoomID\t" << "ClientID\t" << "Name\t" << "\tEmail\t" << "\t\tAdress\t" << "\tCity\t" << "Nationality\t" << "Passport Number\t" << "Phone number\t" << "Days\t" << "Fees\t\n";
    cout << " 11  \t" << " 22\t" << "    Anis Bazzine   " << "anisbazzine@gmail.com   " << "adress in Ouargala  " << "Ouargla  " << "Algerine" << "123456789" << "0555555555" << "5" << "5000" << endl;
    Hotel hotel;
    hotel.mainMenu();
    cout << "Hotel Reservation System worek !\n" << endl;
    return 0;
}

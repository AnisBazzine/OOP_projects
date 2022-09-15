#include <iostream>
#include "Hotel.h"
using namespace std;

    Hotel::Hotel(){ // done
        roomAvailable = rooms.size(); 
        int sizeCapacity = rooms.size() / 6; //  sizeCapacity = 10

        for(int i = 0; i < rooms.size(); i++){
            rooms.at(i).setRoomId(i + 1);
            rooms.at(i).setIsAvailable(true);

            if(i < sizeCapacity)
                rooms.at(i).setTypeRoom("N"), rooms.at(i).setCapacity("S"), rooms.at(i).setFees(100);
            else if(i < sizeCapacity * 2)
                rooms.at(i).setTypeRoom("N"), rooms.at(i).setCapacity("D"), rooms.at(i).setFees(200);
            else if(i < sizeCapacity * 3)
                rooms.at(i).setTypeRoom("N"), rooms.at(i).setCapacity("T"), rooms.at(i).setFees(300);
            else if(i < sizeCapacity * 4)
                rooms.at(i).setTypeRoom("V"), rooms.at(i).setCapacity("S"), rooms.at(i).setFees(150);
            else if(i < sizeCapacity * 5)
                rooms.at(i).setTypeRoom("V"), rooms.at(i).setCapacity("D"), rooms.at(i).setFees(250);
            else if(i < sizeCapacity * 6)
                rooms.at(i).setTypeRoom("V") ,rooms.at(i).setCapacity("T"), rooms.at(i).setFees(350);
        }
    }
    int Hotel::getRoomAvailable(){
        return roomAvailable;
    }
    void Hotel::checkIn(){// done
        string name, phone, email;
        string adress, city, nationality;
        unsigned long int passportNumber, cardNumber;
        int cvcCode;
        string typeRoom, roomCapacity;
        int di,mi,yi;
        int dt,mt,yt;
        int idCounter = 0, sizeSpacilRoom = rooms.size() / 6;
        bool chack = true;
        cout << "*** Personal Data ***\n";
		free();
        cout << "Name ";
        getline(cin, name);
        cout << "Phone ";
        getline(cin, phone);
        cout << "Email ";
        // getline(cin, email);
        cin >> email;
		free();
        cout << "Adress ";
        getline(cin, adress);        
		cout << "City ";
        getline(cin, city);
        cout << "Nationality ";
        cin >> nationality;
        cout << "Passport No ";
        cin >> passportNumber;
        cout << "*** Payment ***\n";
        cout << "Credit Card Information : visa , paypal, paysera, master card ...\n";
        cout << "Card Number ";
        cin >> cardNumber;
        cout << "CVC Code ";
        cin >> cvcCode;
        cout << "*** Room Information ***\n";
        cout << "N - Normal Room\t V - VIP\n";
        cout << "Room Type (N/V) : ";
        cin >> typeRoom;
        cout << "S - Single \t D - Double \t T - Triple\n";
        cout << "Room Capacity (S/D/T) : ";
        cin >> roomCapacity;
        cout << "Check  in data (dd/mm/yyyy) : ";
        cin >> di >> mi >> yi;
        cout << "Check out data (dd/mm/yyyy) : ";
        cin >> dt >> mt >> yt;
        Client clientInHotel(name,phone,email,adress,city,nationality,passportNumber,cardNumber,cvcCode);

        // you have all 6 type of rooms to put client there 
        if((typeRoom == "N" or typeRoom == "n") && (roomCapacity == "S" or roomCapacity == "s")){
            idCounter = 0;
            for(int i = 0; i < sizeSpacilRoom; i++){
                if(rooms.at(idCounter).getIsAvailable() == true){
                    rooms.at(idCounter).setClient(clientInHotel);
                    rooms.at(idCounter).setDateIn(di, mi, yi);
                    rooms.at(idCounter).setDateOut(dt, mt, yt);
                    rooms.at(idCounter).setIsAvailable(false);
                    roomAvailable--;
                    break;
                }
                idCounter++;
            }
        }
        else if((typeRoom == "N" or typeRoom == "n") && (roomCapacity == "D" or roomCapacity == "d")){
            idCounter = sizeSpacilRoom;
            for(int i = 0; i < sizeSpacilRoom; i++){
                if(rooms.at(idCounter).getIsAvailable() == true){
                    rooms.at(idCounter).setClient(clientInHotel);
                    rooms.at(idCounter).setDateIn(di, mi, yi);
                    rooms.at(idCounter).setDateOut(dt, mt, yt);
                    rooms.at(idCounter).setIsAvailable(false);
                    roomAvailable--;
                    break;
                }
                idCounter++;
            }
        }
        else if((typeRoom == "N" or typeRoom == "n") && (roomCapacity == "T" or roomCapacity == "t")){
            idCounter = sizeSpacilRoom * 2;
            for(int i = 0; i < sizeSpacilRoom; i++){
                if(rooms.at(idCounter).getIsAvailable() == true){
                    rooms.at(idCounter).setClient(clientInHotel);
                    rooms.at(idCounter).setDateIn(di, mi, yi);
                    rooms.at(idCounter).setDateOut(dt, mt, yt);
                    rooms.at(idCounter).setIsAvailable(false);
                    roomAvailable--;
                    break;
                }
                idCounter++;
            }
        }
        else if((typeRoom == "V" or typeRoom == "v") && (roomCapacity == "S" or roomCapacity == "s")){
            idCounter = sizeSpacilRoom * 3;
            for(int i = 0; i < sizeSpacilRoom; i++){
                if(rooms.at(idCounter).getIsAvailable() == true){
                    rooms.at(idCounter).setClient(clientInHotel);
                    rooms.at(idCounter).setDateIn(di, mi, yi);
                    rooms.at(idCounter).setDateOut(dt, mt, yt);
                    rooms.at(idCounter).setIsAvailable(false);
                    roomAvailable--;
                    break;
                }
                idCounter++;
            }
        }
        else if((typeRoom == "V" or typeRoom == "v") && (roomCapacity == "D" or roomCapacity == "d")){
            idCounter = sizeSpacilRoom * 4;
            for(int i = 0; i < sizeSpacilRoom; i++){
                if(rooms.at(idCounter).getIsAvailable() == true){
                    rooms.at(idCounter).setClient(clientInHotel);
                    rooms.at(idCounter).setDateIn(di, mi, yi);
                    rooms.at(idCounter).setDateOut(dt, mt, yt);
                    rooms.at(idCounter).setIsAvailable(false);
                    roomAvailable--;
                    break;
                }
                idCounter++;
            }
        }
        else if((typeRoom == "V" or typeRoom == "V") && (roomCapacity == "T" or roomCapacity == "t")){
            idCounter = sizeSpacilRoom * 5;
            for(int i = 0; i < sizeSpacilRoom; i++){
                if(rooms.at(idCounter).getIsAvailable() == true){
                    rooms.at(idCounter).setClient(clientInHotel);
                    rooms.at(idCounter).setDateIn(di, mi, yi);
                    rooms.at(idCounter).setDateOut(dt, mt, yt);
                    rooms.at(idCounter).setIsAvailable(false);
                    roomAvailable--;
                    break;
                }
                idCounter++;
            }
        }
        else{
            cout << "Sorry, we don't have this type and capacity room\n";
            clientInHotel.deleteClientId();
            chack = false;
        }
        if(chack == true){
            cout << "Your room is booked\n";
            clientInHotel.printInfo();
            rooms.at(idCounter).printInfo();
        }
    }
    void Hotel::checkOut(){ // done
        int id = 0;
        cout << "Enter your room id : ";
        cin >> id;
        if(id <= 0 or id > rooms.size()){
            cout << "Sorry, we don't have this room\n";
        }
        else if(rooms.at(id - 1).getIsAvailable() == false){
            roomAvailable++;
            rooms.at(id - 1).setIsAvailable(true);
            rooms.at(id - 1).setClient(Client());
            rooms.at(id - 1).setDateIn(1,1,2022);
            rooms.at(id - 1).setDateOut(1,1,2022);
            cout << "Your room is free now\n";
        }
        else{
            cout << "Sorry, this room is not available\n";
        }
    }
    void Hotel::mainMenu(){ // done
        do{
            cout << "1. Check In\n";
            cout << "2. Check Out\n";
            cout << "3. Client list\n";
            cout << "4. Room list\n";
            cout << "5. Room Status\n";
            cout << "6. Reserved room\n";
            cout << "7. Income of today\n";
            cout << "0. Exit\n"; 
            cout << "Enter your choice : ";
            cin >> choise;
            if(choise == 0)
                exit(0);
            else if(choise == 1)
                checkIn();
            else if(choise == 2)
                checkOut();
            else if(choise == 3)
                displayClient();
            else if(choise == 4)
                displayRoom();      
            else if(choise == 5)
                availbeleRoom();
            else if(choise == 6)
                reservedRoom();
            else if(choise == 7)
                TotalPriceOfToday();
            else 
                cout << "Sorry, we don't have this option\n";
        }while(choise != 0);
        
    }
    void Hotel::displayClient(){ // done
        cout << "Room-ID\t" << "Client-ID\t" << "Name\t" << "Email\t" << "Adress\t" << "City\t" << "Nationality\t" << "Passport-Number\t" << "Phone-number\t" << "Days\t" << "Fees\t\n";
        // cout << "11\t" << "22\t" << "Anis Bazzine" << "anisbazzine@gmail.com" << "adress in Ouargal" << "Ouargla" << "Algerine" << "123456789" << "0555555555" << "5" << "5000" << endl;
        for(int i = 0; i < rooms.size(); i++){
            if(!rooms.at(i).getIsAvailable()){
                rooms.at(i).getClient().printGloblalInfo(i + 1, rooms.at(i).getDays(), rooms.at(i).getTotalPrice());
            }
        }
    }
    void Hotel::displayRoom(){ // done
        cout << "ID\t" << "Type\t" << "Capacity\t" << "Check-in Date\t" << "Check-out Date\t" << "Is Available ?\n";
        for(int i = 0; i < rooms.size(); i++){
                rooms.at(i).printGloblalInfo();
        }
    }
    void Hotel::availbeleRoom(){ // done
        // ask if he want with all info or summury info
        // count availble room
        // give % of the six type of room
        //          availble
        // example : single Normal room : 50% 
        //           single VIP room : 25% ex...
        // availble rooms 80% of the total rooms 60 
        int roomSpace = rooms.size();
        // cout << "You want with all info or summury info ?\n";
        // cout << "1. All info\n";
        // cout << "2. Summury info\n";
        // cin >> choise;
        // if(choise == 1){
            int countRoom = 0;
            int counter = 0;
            for(int i = 0; i < rooms.size(); i++){
                counter++;
                if(rooms.at(i).getIsAvailable() == true){
                    countRoom++;
                }
                if(counter == rooms.size() / 6){
                    cout << rooms.at(i).getType() << " " << rooms.at(i).getCapacity() <<  " Room : " << countRoom * 100 / (roomSpace / 6) << "%\n";
                    countRoom = 0;
                    counter = 0;
                }
            }
            cout << "    The available room is     : " << getRoomAvailable();
            cout << "The percentage of the room is : " << (getRoomAvailable() * 100) / roomSpace << "%" << endl; // 75%  
    }
    void Hotel::reservedRoom(){ // done
        int roomSpace = rooms.size();
        // cout << "You want with all info or summury info ?\n";
        // cout << "1. All info\n";
        // cout << "2. Summury info\n";
        // cin >> choise;
        // if(choise == 1){
            int countRoom = 0;
            int counter = 0;
            for(int i = 0; i < roomSpace; i++){
                counter++;
                if(rooms.at(i).getIsAvailable() == false){
                    countRoom++;
                }
                if(counter == roomSpace / 6){
                    cout << rooms.at(i).getType() << " " << rooms.at(i).getCapacity() <<  " Room : " << countRoom * 100 / (roomSpace / 6) << "%\n";
                    countRoom = 0;
                    counter = 0;
                }
            }
            cout << "    The reserved room is      : " << roomSpace - getRoomAvailable() << " of " << roomSpace << endl; // 45 out of 60
            cout << "The percentage of the room is : " << (roomSpace - getRoomAvailable()) * 100 / roomSpace << "%" << endl; // 75%  
        // }
        // else if(choise == 2){
        //     cout << "The reserved room is          : " << roomSpace - getRoomAvailable() << " out of " << roomSpace << endl; // 45 out of 60
        //     cout << "The percentage of the room is : " << (roomSpace - getRoomAvailable()) * 100 / roomSpace << "%" << endl; // 75%  
        // }
    }
    void Hotel::TotalPriceOfToday(){ // done
        float totalPrice = 0;
        for(int i = 0; i < rooms.size(); i++){
            if(!rooms.at(i).getIsAvailable()){
                totalPrice += rooms.at(i).getTotalPrice();
            }
        }
        cout << "Total price of today is : " << totalPrice << endl;
    }
	void Hotel::free(){ // done
		cin.ignore(50,'\n');
	}
    void Hotel::printInfoClient(int clientId){

    }

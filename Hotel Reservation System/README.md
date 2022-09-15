## Create a Hotel Reservation System

### Creat classes of Hotel, Room, Client

### Create methods of Hotel, Room, Client

## [Source idea I use](https://youtu.be/6fnl2O4yMFM)
    
    when Check in choise then print rooms->at(idcounter).printInfo() in Hotel.cpp line 175
 
    1- If you add a false client info and get  "Sorry, we don't have this room type and capacity" in Hotel.cpp line 163 
    then it add clinet and don't show his info 
    
    2- In check out func 
    
        your room id is 31 so you can't check out ==>> you can check out 30 
    
        if your room is is 1 you can't check out 
    
    availbeleRoom() func in Hotel.cpp need to changed, make it more easy
    rooms.at(i).printGloblalInfo() func in Hotel::displayRoom() in Hotel.cpp need to changed,
    

/*
Name: Afaq Ejaz
Roll No: L1F25BSAI0125
Assignment No: 1
Question No: 3
Question Statement: 

Task 3: Object Lifecycle & Initialization (Week 3 Concepts)
The development team wants to ensure all system objects initialize correctly.
1.	Add a default constructor to Booking that sets:
◦	guestName = "Not Assigned"
◦	nights = 0
2.	Add a parameterized constructor to assign real values.
3.	Add a destructor to Room that prints a message when a room object is destroyed.
4.	Explain the role of:
◦	Constructor overloading
◦	Object lifecycle (creation → usage → destruction)
(Refer concepts: Constructors, Destructors, Stack vs Heap, Object lifecycle)
*/

#include <iostream>
using namespace std;
class Room {
private:
    int roomNumber;
    string category;

public:
    void set_roomNumber(int rn) {
        roomNumber = rn;
    }
    int get_roomNumber() {
        return roomNumber;
    }

    void set_category(string cat) {
        category = cat;
    }
    string get_category() {
        return category;
    }

    void showRoom() {
        cout << "Room Number is: " << roomNumber << " Category is: " << category << endl;
    }
    ~Room(){
        cout << "Room Object Destroyed" << endl;
    }
    
};


class Booking {
  public:
  string guestName ;
  int nights;
  
  Booking(){
      guestName = "Not assigned";
      nights = 0 ;
  }
  Booking(string gname , int nits){
      guestName = gname;
      nights = nits;
  }
  
  void display(){
      cout << "guestName: " << guestName << " Nights stay: " << nights << endl;
  }
};

int main()
{
    cout << "Creating Room Object and Displaying Details:" << endl;
    Room r1;
    r1.set_roomNumber(404);
    r1.set_category("Suite");
    r1.showRoom();
    cout << endl;
    
    cout << "Booking 1 (Default Constructor):" << endl;
    Booking b1;
    b1.display();
    cout << endl;

    cout << "Booking 2 (Parameterized Constructor):" << endl;
    Booking b2("Wasiq Ali", 2);
    b2.display();
    cout << endl;

    cout << "Ending Program (Destructor will now be called automatically):" << endl;
    return 0;
}
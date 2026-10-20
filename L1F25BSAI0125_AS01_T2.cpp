/*
Name: Afaq Ejaz
Roll No: L1F25BSAI0125
Assignment No: 1
Question No: 2
Question Statement: 
Task 2: Resource Allocation Module (Week 2 Concepts)
HRBS needs to assign rooms to bookings.
1.	Create a Room class having:
◦	roomNumber
◦	category (e.g., Standard, Deluxe, Suite)
◦	A method showRoom() to display details
2.	Create a Booking class with:
◦	bookingId, guestName, nights
◦	A function assignRoom(Room r) that receives an object as a parameter
3.	Explain how passing an object as a parameter works and why it is useful for HRBS.
(Refer concepts: Member functions, setters/getters, object passing)

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
};

class Booking {
private:
    int bookingId;
    string guestName;
    int nights;

public:
    void set_bookingId(int bid) {
        bookingId = bid;
    }
    int get_bookingId() {
        return bookingId;
    }

    void set_guestName(string gn) {
        guestName = gn;
    }
    string get_guestName() {
        return guestName;
    }

    void set_nights(int n) {
        nights = n;
    }
    int get_nights() {
        return nights;
    }
    void assignRoom(Room r){
        cout << "Booking Id : " << bookingId << " guestName: " << guestName << " Nights: " << nights << endl;
        r.showRoom();
    }
};

int main()
{
    Room r1;
    r1.set_roomNumber(404);
    r1.set_category("Suite");

    Booking b1;
    b1.set_bookingId(1);
    b1.set_guestName("Ali");
    b1.set_nights(3);

    b1.assignRoom(r1);

    return 0;
}

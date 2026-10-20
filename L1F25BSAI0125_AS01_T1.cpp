/*
Name: Afaq Ejaz
Roll No: L1F25BSAI0125
Assignment No: 1
Question No: 1
Question Statement: 
Task 1: Object & Class Structure (Week 1 Concepts)
Using OOP fundamentals such as classes, objects, attributes, methods, encapsulation, and access specifiers, design the following:
1.	Create a Guest class with:
◦	Private attributes: guestId, name, nationality
◦	Public methods: setter/getter functions for all attributes
2.	Create a Receptionist class with:
◦	Public attributes: name, deskNumber
◦	Public function: displayInfo() showing receptionist details
3.	Write a brief explanation describing how objects model real-world entities like guests and receptionists.
(Refer concepts: Class, Object, Encapsulation, Access Specifiers)

*/

#include <iostream>
using namespace std;

class Guest{
    private:
    int guestId;
    string name;
    string nationality;
    public:
    void set_guestId(int gid){
        guestId = gid;
       
    }
    int get_guestId(){
        return guestId;
    }
    
    void set_name(string n){
        name = n;
    }
    
    string get_name(){
        return name;
    }
    
    void set_nationality(string nat) {
        nationality = nat;
    }
    
    string get_nationality() {
        return nationality;
    }
};


class Receptionist{
  public:
    
  string name;
  int deskNumber;
  
  void display_info(){
    cout << "Name is: " << name << " deskNumber is : " << deskNumber << endl;
  }
};


int main()
{
    Guest g1;
    g1.set_guestId(101);
    g1.set_name("Ali");
    g1.set_nationality("Pakistani");

    cout << "Guest ID is: " << g1.get_guestId() << endl;
    cout << "Name is: " << g1.get_name() << endl;
    cout << "Nationality is: " << g1.get_nationality() << endl;

    Receptionist r1;
    r1.name = "Sara";
    r1.deskNumber = 3;
    r1.display_info();

    return 0;
}

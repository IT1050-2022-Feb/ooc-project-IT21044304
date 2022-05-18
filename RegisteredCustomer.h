#include <iostream>

using namespace std;

class RegisteredCustomer {
  private :
    string name;
    string address;
    string tel;
    int age;
    string customerNo;
  public :
    RegisteredCustomer() {
      name = "Shashani";
      address = "Kottawa";
      tel = "0711108805";
      age = 20;
      customerNo = "C001";
    } ;
    void display() {
      cout << "This is a registered customer class." << endl ;
    }
    void displayDetails() {
      cout << "Registered Customer Name : " << name << endl;
      cout << "Registered Customer Address : " << address << endl;
      cout << "Registered Customer Telephone Number : " << tel << endl;
      cout << "Registered Customer Age : " << age << endl;
      cout << "...................................." << endl << endl;
    }
    ~RegisteredCustomer() {
      cout << "Delete Registered Customer class." << endl;
    }
} ;
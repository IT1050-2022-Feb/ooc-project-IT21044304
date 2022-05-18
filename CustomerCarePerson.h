# include <iostream>

using namespace std ;

class CustomerCarePerson {
    protected :
        string empNo;
        string name;
        string address;
        double sallary;
        string tel;
        int age;

    public :
        CustomerCarePerson() {
            empNo ="E001";
            name = "Thathsarani";
            address = "Kandy";
            tel = "0777523879";
            age = 20;
        }   ;
        void display() {
            cout << "This is a customer care person class." << endl ; 
        }
        void displayDetails() {
            cout << "Customer Care Person Name : " << name << endl;
            cout << "Customer Care Person Addres : " << address << endl;
            cout << "Customer Care Person Telephone Number : " << tel << endl;
            cout << "Customer Care Person Age : " << age << endl;
            cout << "..................................." << endl << endl;
        } 
        double calcSalary() {};
        ~CustomerCarePerson() {
            cout << "Delete Customer Person class." << endl;
        }
}   ;
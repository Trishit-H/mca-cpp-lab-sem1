// Write a C++ program to create three objects for a class named pntr_obj with data
// members such as roll_no & name. Create a member function set_data() for setting the
// data values and a print() member function to print which object has invoked it using the
// 'this' pointer.

#include <cstring>
#include <iostream>
using namespace std;

class pntr_obj {
    private:
        int roll_no;
        string name;

    public:
        void set_data(int roll_no, string name) {
            this->roll_no = roll_no;
            this->name = name;
        }

        void print() {
            cout << "\nPrint function called by object stored at memory address: "
                 << this << endl;
            cout << "Name: " << this->name << endl;
            cout << "Roll Number: " << this->roll_no << endl;
        }
};

int main() {
    pntr_obj obj_1, obj_2;

    // Set data for both the objects
    obj_1.set_data(23, "John");
    obj_2.set_data(24, "Alex");

    // Prints the address and data for Object 1
    obj_1.print();

    // Prints the address and data for Object 2
    obj_2.print();

    return 0;
}

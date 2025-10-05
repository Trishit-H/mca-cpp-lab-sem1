// Develop a C++ program to find the greatest of two numbers using
// this pointer, which returns the member variable.

#include <iostream>
using namespace std;

class Number {
    private:
        int num;

    public:
        Number(int num) {
            this->num = num;
        }

        Number &greater_num(Number &obj) {
            if (this->num > obj.num) {
                return *this;
            } else {
                return obj;
            }
        }

        int get_value() {
            return this->num;
        }
};

int main() {
    Number num_1(25);
    Number num_2(30);

    cout << "Greater number: " << num_1.greater_num(num_2).get_value() << endl;

    return 0;
}

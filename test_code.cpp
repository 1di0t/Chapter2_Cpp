/**************************************************************
                    Operator Overloading
 **************************************************************/
#include <iostream>

using namespace std;


class Complex {//���Ҽ�
public:
    int real_num;
    int imaginary_num;

    Complex(int real_num,int imaginary_num) {
        this->real_num = real_num;
        this->imaginary_num = imaginary_num;
    }

    void printing() {
        cout << real_num << " + " << imaginary_num << "i\n";
    }

    //prefix operator
    Complex operator++();
    //postfix operator
    Complex operator++(int);
};
//prefix operator
Complex Complex::operator++() {
    return Complex(++this->real_num, this->imaginary_num);

    //this->real_num += 1;
    //return Complex(++this->real_num, this->imaginary_num);
}
//postfix operator
Complex Complex::operator++(int) {
    Complex backup(this->real_num, this->imaginary_num);
    this->real_num++;
    return backup;
}

//Nonmember operator overloading
ostream& operator<< (ostream& left, Complex& right) {
    left << right.real_num << " + " << right.imaginary_num << "i\n";
    return left;
}

int main() {
    Complex complex_1(10, 9);
    Complex complex_2 = complex_1++;
    cout << complex_2;
    return 0;
}

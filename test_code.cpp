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
};
//General function
Complex operator+(Complex left,Complex right) {
    int real = left.real_num + right.real_num;
    int imaginary = left.imaginary_num + right.imaginary_num;

    return Complex(real, imaginary);
}

int main() {
    Complex complex(10,8);
    Complex complex2(-3, 8);
    cout << complex.imaginary_num << endl;

    Complex complex3 = complex + complex2;
    //Complex complex3 = complex.operator+(complex2);//operating like this code

    complex3.printing();

    return 0;
}

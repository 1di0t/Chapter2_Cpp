/**************************************************************
 * typeid �����ڷ� Ŭ���� �̸��� Ȯ���ϴ� ���α׷�            *
 **************************************************************/
#include <iostream>
#include <string>
#include <typeinfo> 
using namespace std;

class Animal {};
class Horse {};

int main()
{
	Animal a;
	Horse h;
	int i;
	cout << typeid(a).name() << endl;
	cout << typeid(Animal).name() << endl;
	cout << typeid(h).name() << endl;
	cout << typeid(i).name() << endl;


	return 0;
}
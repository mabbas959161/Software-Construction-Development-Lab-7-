#include <iostream>
using namespace std;

int main()
{
    int number = 25;

    int *ptr = &number;

    cout << "Value of number: " << number << endl;
    cout << "Address of number: " << &number << endl;
    cout << "Value using pointer: " << *ptr << endl;
    cout << "Address stored in pointer: " << ptr << endl;

    return 0;
}

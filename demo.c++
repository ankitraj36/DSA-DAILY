#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int *ptr = &a;
    int **ptr2 = &ptr;

    cout << "The value of a is: " << &a << endl;

    cout << "The value of ptr is: " << ptr << endl;

    cout << "The value of ptr is: " << &ptr << endl;
    cout << "The value pointed to by ptr is: " << *ptr << endl;


    cout << "The value of ptr2 is: " << **(ptr2) << endl;
    return 0;
}
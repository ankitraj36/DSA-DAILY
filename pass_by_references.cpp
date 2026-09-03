// g++ -std=c++11 demo.cpp -o demo && ./demo


#include <iostream>
using namespace std;


void changeValue(int &x) {
    x = 10;
}


int main() {
    int a = 5;
    cout << "Before changeValue: " << a << endl;
    changeValue(a);
    cout << "After changeValue: " << a << endl;
    return 0;
}


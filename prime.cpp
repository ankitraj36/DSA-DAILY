// Online C++ compiler (editor)
// Write and run C++ online using this editor.

#include <iostream>
using namespace std;


string isprime(int n){
    for(int i = 2; i*i <= n; i++){
        if (n % i == 0){
                  return "not prime";
        }
      
    }
      return "prime";
}

int main() {
    // Write C++ code here
    int n =277;

    std::cout << isprime(n);
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int a = 4 , b = 8;

    cout << (a ^ b) << endl; // ^ = XOR
    // 0 ^0 = 0 1^1 = 0 1^0 = 1 0^1 = 1 then 4^b = 100^1000 = 1100 = 12
    return 0;
}
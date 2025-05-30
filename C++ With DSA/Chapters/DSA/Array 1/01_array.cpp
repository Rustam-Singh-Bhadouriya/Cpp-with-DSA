#include <iostream>
// #include <array>
using namespace std;

int main() {
    int arr[5] = {1,2,3,4,5};
    // n-1 = 1 2 3 4 5 _
    cout << arr[0] << endl;
    cout << arr[1] << endl;
    cout << arr[2] << endl;
    cout << arr[3] << endl;
    cout << arr[4] << endl;
    // cout << arr[5] << endl; //here you will find a garbag value

    return 0;
}
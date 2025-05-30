#include <iostream>
// #include <array>
using namespace std;

int main() {
    int marks[5] = {100 , 89 , 88 , 78 , 68}; // 0 1 2 3 4
    // n-1 = 100 , 89 , 88 , 78 , 68 _

    int sz = sizeof(marks);
    cout << sz << endl; // you can find 20 bcz it is size
    int s = sizeof(marks) / sizeof(int); // here is real size of arr -> 5
    cout << s << endl;
    return 0;
}
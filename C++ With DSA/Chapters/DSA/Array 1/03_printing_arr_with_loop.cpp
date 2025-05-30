#include <iostream>
// #include <array>
using namespace std;

int main() {
    int marks[5] = {100 , 89 , 88 , 78 , 68}; // 0 1 2 3 4

    int sz = sizeof(marks);
    // cout << sz << endl; // you can find 20 bcz it is size
    int s = sizeof(marks) / sizeof(int); // here is real size of arr -> 5
    // cout << s << endl;

    // print array with loop and s = 5 
    // sizeof marks -> 20 / sizeof int -> 4 then 20/4 -> 5 
    // and it is array (marks) size
    for (int i = 0; i < s; i++)
    {
        /* code */
        cout << marks[i] << endl;
    }
    
    return 0;
}
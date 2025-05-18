#include <iostream>
using namespace std;

int main() {
    // () for no error
    // arithmatic oprator - * / % -
    cout<<(325*2);
    // relational oprator == != > < 
    cout<<(3==2); // 0
    // logical oprator && || !
    // && = and if both are true
    cout<<(2 == 2) && (2==2); // true (1)
    cout<<(2 == 2) || (3==2); // true(1)
    cout<< !(4 == 4); // false(0) but statment is true but ! converts false
    
    return 0;
}
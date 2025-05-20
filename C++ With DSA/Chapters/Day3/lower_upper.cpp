#include <iostream>
using namespace std;
/*
find which is lower and which is capital
A -> 65 and Z -> 90
z -> 97 and z -> 122
*/
int main() {
    char value;
    cout << "Enter Character: ";
    cin>>value;
    if (value >= 65 && value <= 90)
    {
        cout << "Capital";
    } else if (value >= 97 && value <= 122)
    {
        cout << "LowerCase";
    } else{
        cout<<"This is not a alphabet value";
    }
    
    
    return 0;
}
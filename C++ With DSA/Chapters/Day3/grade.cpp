#include <iostream>
using namespace std;

/*
marks are up to 90 -> A
marks are up to 80 and down to 90 -> B
marks are up to 33 and down to 80 -> C
marks are down to 33 -> F
*/

int main() {
    int marks;
    cout<<"Enter marks: ";
    cin>>marks;
    if(marks >= 90){
        cout<<"Your grade is A";
    } else if(marks >= 80 && marks < 90){
        cout<<"Your grade is B";
    } else if(marks >= 33 && marks < 80){
        cout<<"Your grade is C";
    } else{
        cout<<"F!";
    }
    return 0;
}
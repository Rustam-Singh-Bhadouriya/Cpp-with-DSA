#include <iostream>
using namespace std;

double sum(double a , double b){
    return a+b;
}

double min(double a , double b){
    double mini = a;
    if (mini < b)
    {
        /* code */
        mini = b;
    }
    return mini;
}

int main() {
    cout << sum(100.23488459894,89.4357394579823579) << endl;
    cout << min(100 , 89);
    return 0; // we can type any number
}
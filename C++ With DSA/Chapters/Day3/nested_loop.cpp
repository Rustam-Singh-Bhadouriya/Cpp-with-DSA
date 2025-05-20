#include <iostream>
using namespace std;

int main() {
    // loop in loop called nested loop
    int itration = 7;
    for (int i = 1; i <= itration; i++){
        // printing N starts 
        int n = 10;
        for (int j = 0; j <= n; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
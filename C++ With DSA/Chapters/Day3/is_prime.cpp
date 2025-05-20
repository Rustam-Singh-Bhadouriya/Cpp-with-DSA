#include <iostream>
using namespace std;

int main() {
    int n = 7;
    for (int i = 1; i <= n; i++)
    {
        if(((n%2)-1 ) == 0){
            cout<<"prime";
            break;
        }
    }
    
    return 0;
}
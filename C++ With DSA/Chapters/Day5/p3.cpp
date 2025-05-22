#include <iostream>
using namespace std;

bool isprime(int y){
    if (y <= 1)
    {
        /* code */
        return false;
    }
    
    for (int i = 2; i*i <= y; i++)
    {
        /* code */
        if (y% i == 0)
        {
            /* code */
            return false;
        }
        
    }
    return true;
    
}

void printprime(int x){
    for (int i = 2; i <= x; i++)
    {
        if (isprime(i))
        {
            cout<<i<<endl;
        }
        
    }
    return;
}

int main() {
    int x = 9;
    printprime(x);
    return 0;
}
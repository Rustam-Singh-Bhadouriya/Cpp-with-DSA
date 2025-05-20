#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter number: ";
    cin>>n;
    // use 20 max of number
    long long factorial = 1;
    for (int i = 1; i <= n; i++)
    {
        if (n == 0 || n == 1)
        {
            factorial = 1;
        } else{
            factorial = factorial * i;
        }

        
    }
    cout << factorial;
    return 0;
}
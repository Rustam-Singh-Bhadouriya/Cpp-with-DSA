#include <iostream>
using namespace std;

int main() {
    int n;
    int count = 0;
    cout<<"Enter number : ";
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        if (i%2 == 1) // We can also use i % 2 != 0 but try some new
        {
            count += i;
        }
        
    }
    cout<<count;
    return 0;
}
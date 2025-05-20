#include <iostream>
using namespace std;
// if number is devide by then count += that i digit
int main() {
    int n;
    cout<<"Enter number: ";
    cin>>n;
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i%3 == 0)
        {
            count += i;
        }
        
    }
    cout<<count;
    
    return 0;
}
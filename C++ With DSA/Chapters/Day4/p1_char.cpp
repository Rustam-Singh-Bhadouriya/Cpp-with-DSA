#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter number: ";
    cin>>n;
    char ch = 'A';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
    cout<<"After pattern: "<<ch<<endl;
    return 0;
}
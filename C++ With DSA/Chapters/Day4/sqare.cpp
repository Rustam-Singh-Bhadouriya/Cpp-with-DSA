#include <iostream>
using namespace std;

int main() {
    int n = 26;
    
    for (int i = 0; i < n; i++)
    {
        // printing A B C D as * * * * X 4
        char ch = 'A';
        for (int j = 0; j < n; j++)
        {
            cout<<ch<< " ";
            ch++;
        }
        cout<<endl;
        // for star and number
        // for (int j = 1; j <= n; j++)
        // {
        //     // cout<<"X ";
        //     cout<<j<<" ";
        // }
        // cout<<endl;
    }
    
    return 0;
}
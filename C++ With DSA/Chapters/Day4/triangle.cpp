#include <iostream>
using namespace std;

int main() {
    int n = 3;
    char ch = '*';
    for (int i = 0; i < n; i++)
    {
        /* code */
        for (int j = 0; j < i+1; j++)
        {
            cout<<ch;
        }
        
        cout<<endl;
    }
    return 0;
}
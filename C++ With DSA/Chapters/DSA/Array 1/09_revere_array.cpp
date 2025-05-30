#include <iostream>
using namespace std;

int main() {
    // doesn't work try to fix it! it's a problem you will need to change code
    int arr[6] = {1,2,3,4,5,6};
    
    int j = 5;
    for (int i = 0; i < 6; i++)
    {
        /* code */
        arr[i] = arr[j];
        cout << j << endl;
        j--;
    }

    for (int i = 0; i < 6; i++)
    {
        /* code */
        cout << arr[i] <<endl;
    }
    
    
    return 0;
}
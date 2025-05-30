#include <iostream>
using namespace std;

int main() {
    int arr[5] = {5 , 15 , -15 , 1 , 6 };
    int smallest = INT8_MAX; // 127 number
    for(int i = 0; i < 5 ; i++){
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
        
    }
    // Logic => arr i is 5 < 0 -> smallest = 5.......
    // and so more
    cout << smallest;
    return 0;
}
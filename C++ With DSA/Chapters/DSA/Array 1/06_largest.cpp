#include <iostream>
using namespace std;

int main() {
    int arr[5] = {5 , 15 , -15 , 1 , 6 };
    int greatest = 0;
    for(int i = 0; i < 5 ; i++){
        if (arr[i] > greatest)
        {
            greatest = arr[i];
        }
        
    }
    //Logic => if arr's i let take 5 > 0 yes - > 
    // greatest -> 5 and 15 > 5 greatest -> 15
    // so largest is 15
    cout << greatest;
    return 0;
}
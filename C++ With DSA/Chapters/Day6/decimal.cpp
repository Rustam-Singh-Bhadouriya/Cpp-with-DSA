#include <iostream>
using namespace std;

int main() {
    int pow = 1 , Bnum = 101 , ans = 0;
    while (Bnum > 0)
    {
        /* code */
        int rem = Bnum%10;
        Bnum /= 10;
        ans += (rem *pow);
        pow *= 2;
    }
    
    cout << ans;
    return 0;
}
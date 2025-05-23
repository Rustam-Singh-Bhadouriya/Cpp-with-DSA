#include <iostream>
using namespace std;

int main() {
    int deciNum = 101;
    int ans = 0;
    int power = 1;
    while (deciNum > 0)
    {
        /* code */
        int reminder = deciNum%2;
        deciNum = deciNum/2;
        ans += (reminder*power);
        power = power*10;
    }
    cout<<ans<<endl;
    return 0;
}
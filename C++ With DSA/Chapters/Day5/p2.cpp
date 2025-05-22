#include <iostream>
using namespace std;

long long factorial(int k){
    long long ans = 1;
    for (int i = 1; i <= k; i++)
    {
        ans *= i;
    }
    return ans;
}

long long ncr(int x , int y){
    if (y>x)
    {
        cout<<"Invalid r is greater then n!..\n";
    }
    
    long long ans = factorial(x) / (factorial(y) * (factorial(x-y)));
    cout<<"Answer is = " << ans;
    return ans;
}

int main() {
    int n = 8;
    int r = 2;
    // n! / (r! * (n-r)!)
    ncr(n,r);

    return 0;
}
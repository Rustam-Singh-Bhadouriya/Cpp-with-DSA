#include <iostream>
using namespace std;

int main() {
    int count = 1;  
    while(count <= 5){
        if(count == 5){
            cout<<count;
        }else{
            cout<<count<<", ";
        }
        count++;
    }
    cout<<endl;
    return 0;
}
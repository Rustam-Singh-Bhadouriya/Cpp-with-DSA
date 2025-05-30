#include <iostream>
using namespace std;

// this is a algoritham

// preferd and can use this function any where you want but new should made by you
int search(int arr[] , int size){
    for(int i = 0; i < size ; i++){

        if (arr[i] == 8)
        {
            return i;
        }
        
    }
    return -1;
    // this is esiest but created by other developer and i created that one by myself
    // but it is hard to use in your main function and I prefer it and try to find
    // some more ways to simple linear search by yourself
}

int main() {
    int arr[] = {4,2,7,8,1,2,5};
    int index = 0;
    // you can change target as i selected 8 as you can change or user input
    // my easy methord time complexity -> O(n) and space complexity -> O(1) and it is fast
    // and it is fastest of all and working very good and best simple linear search algoritham which i often use 
    // you must use it!
    for (int i = 0; i < 7; i++)
    {
        /* code */
        for(int j=0; j < 7 ; j++){

            if (arr[j] == 8)
            {
                /* code */
                cout << "8 index is: " << j << endl;
                index = j;
                break;
            } 

        }
        if (arr[index] != 8)
        {
            /* code */
            cout << -1;
        }
        

        break;
    }
    
    /* - By course mean Second methord -*/

    cout << search(arr , 7);


    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    // initlizining times and number(array)
    int times;
    cout << "Enter how many numbers you will enter: ";
    cin >> times;
    int number[times] = {};

    // Taking Value in number(array)
    for (int i = 0; i < times; i++)
    {
        cout << "Enter Number: ";
        cin >> number[i];
    }

    // printing Value of number(array) on screen
    for (int i = 0; i < times; i++)
    {
        cout << number[i] << endl;
    }

    return 0;
}
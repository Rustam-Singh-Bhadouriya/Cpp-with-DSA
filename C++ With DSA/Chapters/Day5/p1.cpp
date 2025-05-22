#include <iostream>
using namespace std;

int sumOfCharacters(int x)
{
    int temp = x;
    int lenght = 0;
    while (temp != 0)
    {
        temp = temp/10;
        lenght++;
    }
    

    int remender = 0;
    int sum = 0;

    for (int i = 0; i < lenght; i++)
    {
        /* code */
        remender = x % 10;
        sum += remender;
        x = x / 10;
    }
    cout<<"Sum of number = "<<sum;
    return sum;
}

int main()
{
    int x;
    cout<<"Enter value: ";
    cin>>x;
    sumOfCharacters(x);
    return 0;
}
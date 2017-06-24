#include <iostream>
#include <string>
#include <stdio.h>
#include<conio.h>
using namespace std;

int main()
{
    int num1 = 0;
    int num2 = 1;
    bool isPrime = true;
    int num_next = 1;
    int n;
    cin >> n;
    if (n >= 1)
        cout << num1 << "\n";
    if (n >= 2)
        cout << num2 << "\n";
    for (int i = 0; i < n - 2; i++)
    {
        num_next = num1 + num2;
        if ((num_next % 3 == 0) && (num_next % 5 == 0)) //when F(n) is divisible by 15
            cout << "FizzBuzz\n";
        else if (num_next % 3 == 0) //when F(n) is divisible by 3
            cout << "Buzz\n";
        else if (num_next % 5 == 0) //when F(n) is divisible by 5
            cout << "Fizz\n";
        else
        {
            for (int j = 2; j < num_next; j++)
            {
                if (num_next % j == 0 || num_next == 2)
                {
                    isPrime = false;
                    break;
                }
            }
            if (isPrime && num_next != 1)   //when F(n) is prime
            {
                cout << "BuzzFizz\n";
            }
            else
                cout << num_next << "\n";
        }
        num1 = num2;
        num2 = num_next;
    }

    return 0;
}

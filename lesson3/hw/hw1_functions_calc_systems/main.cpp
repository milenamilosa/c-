#include <iostream>

using namespace std;

int my_function(int number, int what_system);

int main()
{
    int number, what_system = 0;

    do {
    printf("Please enter a number you want to convert:\n{Note: it should be a positive integer!}\n\n-> ");
    cin >> number;
    } while (number < 0);

    do {
    printf("\nPlease enter the system you want to convert to.\n{Note: you can enter munber between 2 and 16!)\n\n-> ");
    cin >> what_system;
    } while (what_system < 2 || what_system > 16);

    printf("The entered number(%i) in %i system is %i.\n", number, what_system, my_function(number, what_system));
}

int my_function(int number, int what_system)
{
    int temp, counter = 0;
    int result = 0;

    for (int i = number; i != 0; i/=what_system)
    {
        temp = i%what_system;
        result += temp;

        if (result == 0) // may remove brackets for 1 line in 'if'
        {
            counter ++;
        }
        else
        {
            result *= 10;
        }
    }

    temp = 0;

    for (int i = result; i != 0; i /= 10)
    {
        temp += i % 10;
        temp *= 10;
    }

    if (counter == 0)
        temp/= 10;
    else
    {
        for (int i = 1; i < counter; i++)
        {
            temp *= 10;
        }
    }

    system("cls");
    return temp;
}

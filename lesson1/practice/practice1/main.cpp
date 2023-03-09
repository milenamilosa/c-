#include <iostream>

using namespace std;

int main()
{
    int a, n, sum = 0;

    do
    {
        printf("Input number: ");
        cin >> a;
        system("cls");
    }
    while (a < 0);

    for (int i = a; i != 0; i /= 10)
    {
        n += 1;
        sum += i%10;
    }


    printf("Quantity of characters in entered number [%i]: %i.\n\n", a, n);
    printf("Sum of characters in entered number [%i]: %i.\n\n", a, sum);

    return 0;
}

#include <iostream>
using namespace std;
int main()
{
    int number, temp = 0;

    printf("Enter number to return: ");
    cin >> number;


    for (int i = number; i != 0; i /= 10)
    {
        temp += i % 10;
        temp *= 10;
    }
    temp/= 10;



    printf("\n\n%i", number );
    printf("\n\n%i", temp );

return 0;
}


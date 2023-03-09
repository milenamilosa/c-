#include <iostream>

using namespace std;

int main()
{
    int number = 0;

    while (number <5 || number % 2 == 0)
    {
        printf("Enter length of the star (odd number): ");
        cin >> number;
        system("cls");
    }

    for (int i = 0;	i < number; i++)
	{
		for (int j = 0; j < number; j++)
		{
			if (i == j)
            {
				printf(" * ");
            }

            else if (i+j == number-1)
            {
                printf(" * ");
            }
            else if ( i == number/2 )
            {
                printf(" * ");
            }
            else if ( j == number/2 )
            {
                printf(" * ");
            }

			else
				printf("   ");
		}
		printf("\n\n");
	}
    return 0;
}

#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main()
{
	int size = 0;
    int max = 0;
	srand(time(NULL));

	do
    {
	printf("Enter the size of an array: ");
	cin >> size;
    system("cls");

    } while (size < 5 || size % 2 == 0);

	int ar[size][size];

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            ar[i][j] = rand()%90+10;
        }
    }
//
//    for (int i = 0; i < size; i++)
//    {
//        for (int j = 0; j < size; j++)
//        {
//            if (i <= j && i+j >= size-1)
//            {
//				if (ar[i][j] > max)
//                  max = ar[i][j];
//            }
//            if (i >= j && i+j <= size-1)
//                ar[i][j] = 0;
//
//        }
//    }

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (i <= j && i+j <= size-1 || i >= j && i+j >= size-1)
            {
				if (ar[i][j] > max)
                    max = ar[i][j];

            }
        }
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%i ",ar[i][j]);
        }
        printf("\n");
    }

    printf("Max value in this figure is %i.", max);

}

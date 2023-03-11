#include <iostream>
#include <stdlib.h>
#include<time.h>

using namespace std;

int main()
{
    const int SIZE = 10;
    int ar[SIZE];
    srand(time(NULL));

    for (int i = 0; i < SIZE; i++)
    {
        ar[i] = rand()%100;
    }
    for (int i = 0; i < SIZE; i++)
    {
        printf("%i ", ar[i]);
    }
    printf("\n");

    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 1; j < SIZE; j++)
            if (ar[j-1] > ar[j])
                swap(ar[j-1], ar[j]);
    }

    for (int i = 0; i < SIZE; i++)
    {
        printf("%i ", ar[i]);
    }
    printf("\n");

    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 1; j < SIZE; j++)
            if (ar[j-1] < ar[j])
                swap(ar[j-1], ar[j]);
    }

    for (int i = 0; i < SIZE; i++)
    {
        printf("%i ", ar[i]);
    }
    printf("\n");


}

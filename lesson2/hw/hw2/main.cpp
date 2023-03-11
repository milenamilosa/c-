#include <iostream>

using namespace std;

int main()
{
    const int size = 5;
    int ar[size];
    int pair_sum, impair_sum = 0;

    for (int i = 0; i < size; i++)
    {
        printf("Enter element value: ");
        cin >> ar[i];
    }

    for (int i = 0; i < size; i++)
    {
        if (i % 2 == 0)
            pair_sum += ar[i];
        else
            impair_sum += ar[i];
    }

    printf("Pair element value sum is %i.\nImpair element value sum is %i.", pair_sum, impair_sum);
}

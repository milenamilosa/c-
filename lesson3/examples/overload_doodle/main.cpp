#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;


template <typename T> T Average(T ar[], int SIZE)
{
    T res = 0;
    for (int i = 0; i < SIZE; i++)
    {
     res += ar[i];
    }
    res /= SIZE;
    return res;
}


int main()
{
    int SIZE = 0;
    int A[] = {1, 2, 3, 9, 8, 7};
    int B[SIZE];
    srand(time(NULL));

    printf("Enter size of the array: \n\n");
    cin >> SIZE;
    printf("\nThe array we get:\n");
//    cout << "\n\n" << Average(A, 6) << "\n\n";

    for (int i = 0; i < SIZE; i++)
    {
        B[i] = rand()%100;
//        B[i] +=  0.5;
        printf("%i, ", B[i]);
    }
    printf("\n\n");
    system("pause");

    printf("\nTest function:\n");
    cout << Average(B, SIZE) << "\n\n";

}

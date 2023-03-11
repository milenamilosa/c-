#include <iostream>
#include <stdlib.h>
#include<time.h>

using namespace std;

int main()
{
    srand(time(NULL));
    int array[10];
    for (int i=0;i<10;i++)
    {
        array[i]=rand()%100;
        cout << array[i] << "\n";
    }

    return 0;
}

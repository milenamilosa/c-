#include <iostream>

using namespace std;

int main()
{
    int start, ending, sum;

    printf("Enter start number: \n");
    cin >> start;
    printf("Enter ending number: \n");
    cin >> ending;

    while (start <= ending)
    {
        if (start % 2 != 0)
        {
            sum += start;
        }
        start += 1;
    }

    printf("Sum of the odd numbers in the certain range is %i", sum);

    return 0;
}

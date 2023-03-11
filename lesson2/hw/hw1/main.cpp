#include <iostream>

using namespace std;

int main()
{
    const int size = 5;
    int ar[size];

    for (int i = 0; i < size; i++)
    {
        printf("Enter element value: ");
        cin >> ar[i];
    }

    for (int i = size-1; i >= 0; --i)
    {
        cout << ar[i] << "\n";
    }

    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    int length, position;
    char symb;

    printf("Enter the length of the line: \n");
    cin >> length;
    printf("Enter symbol you want to use: \n");
    cin >> symb;
    printf("Select which line to draw. 1 - horizontal, 2 - vertical: \n");
    cin >> position;

    switch (position)
    {
    case 1:
        for(int i = length; i > 0; --i)
        {
            printf("%c ", symb);
        }
        break;
    case 2:
        for(int i = length; i > 0; --i)
        {
            printf("%c \n", symb);
        }
        break;
    default:
        printf("\nError!!! This operator isn’t correct\n");
    }

}

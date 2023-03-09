#include <iostream>

using namespace std;

int main()
{
    char white, black;

    printf("Enter white square symbol: ");
    cin >> white;
    printf("Enter black square symbol: ");
    cin >> black;

    for (int i = 0; i < 8; ++i)
    {
        for (int j = 0; j < 8; ++j)
        {
            if (i % 2 == 0 && j % 2 == 0 || i % 2 != 0 && j % 2 != 0)
            {
                for (int k = 0; k < 3; k++)
                    printf("%c ", white);
            }
            else if (i % 2 != 0 && j % 2 == 0 || i % 2 == 0 && j % 2 != 0)
            {
                for (int k = 0; k<3; k++)
                    printf("%c ", black);
            }
        }
        printf("\n");
    }

    return 0;
}

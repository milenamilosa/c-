#include <iostream>

#include <string>


using namespace std;



int main()

{
    int count = 0;
    
    printf("Enter: ");
    cin >> count;
    
   
    for (int i = 0; i <= count; i++)
    {
        printf("\n");

    for (int j = 0; j < i; j++)
    {
        printf("# ");
    }
    }

    
    printf("\n\n");
    
    for (int i = count; i >= 0 ; i--)
    {
        printf("\ni");

    for (int j = 0; j < i; j++)
    {
        printf("j");
    }
    }
    
    printf("\n\n");
    for (int i = count; i > 0; i--)
    {
        printf("\n");
  
    for (int j = i; j > 0; j--)

    {
        printf("# ");
    }

    }
    
    printf("\n\n");
    
    for (int i = count; i >= 0; i--)
    {
        printf("\n");

    for (int j = count; j > i; j--)
    {
        printf("#");
    
    for (int j = count; j > i; j--)
    {
        printf(" ");
    }
    }
    }
    
    printf("\n\n\n");

    
    for (int i = 1; i <= count; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%i", j);
        }
        
        printf("\n");
    }
    
    printf("\n\n");
    
    int ccount, count1, k = 0;


    for(int i = 1; i <= count; ++i) {
        for(int space = 1; space <= count-i; ++space) {
            cout << "  ";
            ++ccount;
        }

        while(k != 2*i-1) {
            if (ccount <= count-1) {
                cout << i+k << " ";
                ++ccount;
            }
            else {
                ++count1;
                cout << i+k-2*count1 << " ";
            }
            ++k;
        }
        count1 = ccount = k = 0;

        cout << endl;
    }
    
}
#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int average(int ar[], int size)
{
    int res = 0;
    for (int i = 0; i < size; i++)
    {
        res += ar[i];
    }
    res /= size;
    printf("\nAverage for int array is:\n");
    return res;
}

long average(long ar[], int size)
{
    long res = 0;
    for (int i = 0; i < size; i++)
    {
        res += ar[i];
    }
    res /= size;
    printf("\nAverage for long array is:\n");
    return res;
}

float average(float ar[], int size)
{
    float res = 0;
    for (int i = 0; i < size; i++)
    {
        res += ar[i];
    }
    res /= size;
    printf("\nAverage for float array is:\n");
    return res;
}

double average(double ar[], int size)
{
    double res = 0;
    for (int i = 0; i < size; i++)
    {
        res += ar[i];
    }
    res /= size;
    printf("\nAverage for double array is:\n");
    return res;
}


int main()
{
    int size = 6;
//    int size = 0;
//    printf("Enter the size of an array:\n\n");
//    cin >> size;
    int br[] = { 10, 20, 30, 40, 50, 60 };
    long cr[] = { 10L, 20L, 30L, 40L, 50L, 60L };
    float dr[] = { 0.2, 0.8, 0.2, 0.1, 0.9, 0.5 };
    double er[] = { 0.254, 0.868, 0.755, 0.151, 0.967, 0.509 };


    cout << average(br, size);
    cout << average(cr, size);
    cout << average(dr, size);
    cout << average(er, size);

//    string type;
//	int size = 0;
//	int ar[size];
//	srand(time(NULL));
//
//	do
//    {
//    printf("Enter the type of an array:\n\n");
//	cin >> type;
//	printf("Enter the size of an array:\n\n");
//	cin >> size;
//    system("cls");
//    } while (size < 0);
//
//    if (type == "int")
//    {
//        int br[0];
//        for (int i = 0; i < size; i++)
//        {
//            br[i] = rand()%100;
//            printf("%i ", br[i]);
//        }
//    }
//
//    else if (type == "float")
//    {
//        int cr[0];
//        for (int i = 0; i < size; i++)
//        {
//            float r = (float)((rand() << 15 + rand()) & ((1 << 24) - 1)) / (1 << 24);
//            cr[i] = r;
//            printf("%f ", cr[i]);
//        }
//    }
//
//    else if (type == "long")
//    {
//        int  dr[0];
//        for (int i = 0; i < size; i++)
//        {
//            dr[i] = rand()%10000+1000;
//            printf("%i ", dr[i]);
//        }
//    }

}

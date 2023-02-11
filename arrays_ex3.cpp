#include <cctype>
#include <iostream>
#include <cstring>
using namespace std;

int main() 
{
    char arr[256] = " ";
    char ch;

    cin.getline(arr, 256);
  
    for(int i = 0; i < strlen(arr); ++i)
    {
        if (i%2==0)
        {
            ch = toupper(arr[i]);
            cout << ch;
        }
        
        else
        {
            ch = tolower(arr[i]);
            cout << ch;
        }
    }

}
#include <iostream>

using namespace std;

int main()
{
	int num1, num2 = 0;
	char symb = '\0';
	float res = 0;

    printf("Enter num1: ");
	cin >> num1;
	printf("Enter num2: ");
	cin >> num2;

	printf("Choose an operator [+, -, *, /, %]");
	cin >> symb;



	switch(symb)
	{
	    case '+':
	        res += num1 + num2;
	        break;
        case '-':
	        res -= num1 - num2;
	        break;
        case '*':
	        res *= num1 * num2;
	        break;
        case '/':
	        num2 !=0 ? res /= num1 / num2 : printf("Error. Division by 0.");
	        break;
        case '%':
	        res = num1 % num2;
	        break;
        default:
            printf("Wrong operation!!!");
            return 0;
	}

    printf("Res is %.2f", res);






	return 0;
}

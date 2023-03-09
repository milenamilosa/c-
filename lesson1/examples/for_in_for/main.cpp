
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");


	//Var2
	char osn_char = '*', diag_char = '#';

	int N = 5;
	cout << "главная диагональ\n" << endl;
	// N - размерность таблицы
	for (int i = 0;	i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			//главная диагональ
			if (i == j)
				cout << " " << diag_char << " ";
			else
				cout << "   ";
		}
		cout << endl;
	}
	cout << endl;

	// N - размерность таблицы
	cout << "над главной диагональю\n" << endl;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			//над главной диагональю
			if (i < j)
				cout << " " << diag_char << " ";
			else
				cout << " " << osn_char << " ";
		}
		cout << endl;
	}
	cout << endl;

	// N - размерность таблицы
	cout << "под главной диагональю\n" << endl;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			//под главной диагональю
			if (i > j)
				cout << " " << diag_char << " ";
			else
				cout << " " << osn_char << " ";
		}
		cout << endl;
	}
	cout << endl;


	// N - размерность таблицы
	cout << "побочная диагональ\n" << endl;
	for (int i = 0;	i < N; i++)
	{
		for (int j = 0;	j < N; j++)
		{
			//побочная диагональ
			if (i + j == N - 1)
				cout << " " << diag_char << " ";
			else
				cout << " " << osn_char << " ";
		}
		cout << endl;
	}
	cout << endl;

	// N - размерность таблицы
	cout << "над побочной диагональю\n" << endl;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			//над побочной диагональю
			if (i + j < N - 1)
				cout << " " << diag_char << " ";
			else
				cout << " " << osn_char << " ";
		}
		cout << endl;
	}
	cout << endl;

	// N - размерность таблицы
	cout << "под побочной диагональю\n" << endl;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			//под побочной диагональю
			if (i + j > N - 1)
				cout << " " << diag_char << " ";
			else
				cout << " " << osn_char << " ";
		}
		cout << endl;
	}
	cout << endl;
	system("pause");
	//Var2
}

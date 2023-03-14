#include <iostream>

using namespace std;

int max_element(int n, int array[])
// function to find max elem for an array with  int  type elements
{
	int value = array[0];
	for (int i = 1; i < n; i++)
		value = value > array[i] ? value : array[i];
	cout << "\nFor (int) : ";
	return value;
}

long max_element(int n, long array[])
// function to find max elem for an array with  long  type elements
{
	long value = array[0];
	for (int i = 1; i < n; i++)
		value = value > array[i] ? value : array[i];
	cout << "\nFor (long) : ";
	return value;
}

// returned data type does not affect overload
// lets change places of function parametres
long max_element(int array[], int n)
// function to find max elem for an array with  int  type elements (once again but-)
{
	int value = array[0];
	for (int i = 1; i < n; i++)
		value = value > array[i] ? value : array[i];
	cout << "\nFor (int) : ";
	return long(value);
}

float max_element(int n, float array[])
// function to find max elem for an array with   float   type elements
{
	float value = array[0];
	for (int i = 1; i < n; i++)
		value = value > array[i] ? value : array[i];
	cout << "\nFor (float) : ";
	return value;
}

double max_element(int n, double array[])
// function to find max elem for an array with  double   type elements
{
	double value = array[0];
	for (int i = 1; i < n; i++)
		value = value > array[i] ? value : array[i];
	cout << "\nFor (double) : ";
	return value;
}

int main()
{
	int size = 6;
	int i[] = { 10, 60, 30, 40, 50, 20 };
	long l[] = { 12L, 44L, 5L, 22L, 37L, 30L };
	float f[] = { 0.1f, 0.6f, 0.4f, 0.3f, 0.5f, 0.2f };
	double d[] = { 0.01, 0.05, 0.06, 0.04, 0.03, 0.12 };

	cout << "max_elem(" << size <<",x) = " << max_element(size, i) <<"\n";
	cout << "max_elem(" << size << ",f) = " << max_element(size, l) << "\n";
	cout << "max_elem(x," << size << ") = " << max_element(i, size) << "\n";
	cout << "max_elem(" << size << ",y) = " << max_element(size, f) << "\n";
	cout << "max elem(" << size << ",z) = " << max_element(size, d) << "\n";
	cout << "\n";
}

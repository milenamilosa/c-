#include <iostream>

using namespace std;

int main() {

	//��������� ����������� ��� ������ � �����������
	enum command { straight, right, left = -1 };
	enum direction { north = 1, west, south, east };
	//���������� ���������� ��� �������� �������
	//� ������������ ����������� ������
	int Command, Direction;
	cout << "Enter the start direction the robot" << endl;
	cout << "\t 1- North\n"
		<< "\t 2- West\n"
		<< "\t 3- South\n"
		<< "\t 4- East\n";
	cin >> Direction;
	cout << "Select action :" << endl;
	cout << "\t 0- straight on\n"
		<< "\t 1- turn right\n"
		<< "\t -1- turn left\n";
	cin >> Command;

	switch (Direction)
		// ���������� ����������� ����������� ������
	{
	case north: // ���� ����� ���������� ������� �� �����
		switch (Command)
			// ���������� ���������� ��������� ������
		{
		case straight:
			cout << "The robot is looking at the notrh\n";
			break;
		case right:
			cout << "The robot is looking at the east\n";
			break;
		case left:
			cout << "The robot is looking at the west\n";
			break;
		}
		break;
	case west: // ���� ����� ���������� ������� �� �����
		switch (Command)
			// ���������� ���������� ��������� ������
		{
		case straight:
			cout << "The robot is looking at the west\n";
			break;
		case right:
			cout << "The robot is looking at the north\n";
			break;
		case left:
			cout << "The robot is looking at the south\n";
			break;
		}
		break;
	case south: // ���� ����� ���������� ������� �� ��
		switch (Command)
			// ���������� ���������� ��������� ������
		{
		case straight:
			cout << "The robot is looking at the south\n";
			break;
		case right:
			cout << "The robot is looking at the west\n";
			break;
		case left:
			cout << "The robot is looking at the east\n";
			break;
		}
		break;
	case east: // ���� ����� ���������� ������� �� ������
		switch (Command)
			// ���������� ���������� ��������� ������
		{
		case straight:
			cout << "The robot is looking at the east\n";
			break;
		case right:
			cout << "The robot is looking at the south\n";
			break;
		case left:
			cout << "The robot is looking at the north\n";
			break;
		}
		break;

	default:
		cout << "not found" << endl;
	}
}

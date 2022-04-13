//TODO ���� ����������� �����,
//TODO ��������� ����������� �� �������
//TODO ��������� �������� ���������

#include "Stack.h"

#include <iostream>
#include <locale>

#include <string>

using namespace std;

void printMenu(string& expression);

int calculateExpression(string& expression);

void main()
{
	setlocale(LC_ALL, "ru");

	// ������� ����������
	string expression;

	//���������� ��� ����������������� �����.
	int userMenuChoice = -1;

	// ������� ����-����.
	while (userMenuChoice != 0)
	{
		system("cls");
		printMenu(expression);

		cin >> userMenuChoice;
		cin.ignore();

		switch (userMenuChoice)
		{
		case 1:

			system("pause");
			break;

		case 2:

			system("pause");
			break;

		case 0:
			cout << "�� ��������!\n";
			userMenuChoice = 0;
			system("pause");
			break;

		default:
			cout << "� �� ������� ���, ��������� ����\n";
			cin.clear();
			system("pause");
			break;
		}
	}
}


void printMenu(string& expression)
{
	cout << "������������ ������ #7 ����-03-21 ������� �.�. ������� 17\n\n"
		"������� 2 - ��������� ��������� � ������ ��������.\n"
		"~~~~~~~~~~~~~~~~~����~~~~~~~~~~~~~~~\n"
		"�������� ���������: ";
	cout << expression;
	cout << "������� [1], ����� ������ ��������� � ����������� ������� ��� ������.\n"
		"������� [2], ����� �������� �������� ��������� ���������.\n"
		"������� [0], ����� ��������� ������ ���������.\n";
	cout << "��� �����: ";
}



template<typename T>
T calculateExpression(string& expression)
{

	Stack <int> operands;
	for (size_t i = 0; i < expression.length(); i++)
	{
		if (expression[i] != '+' &&
			expression[i] != '-' &&
			expression[i] != '*' &&
			expression[i] != '/'&&)
		{
			operands.push(stoi(expression[i]);
		}
		else
		{
			int tempResult;
			char op = expression[i];
			switch (op)
			{ 
			case '+':
				tempResult = operands.pop() + operands.pop();
				break;
			case '+':
				tempResult = operands.pop() + operands.pop();
				break;
			case '/':
				tempResult = operands.pop() + operands.pop();
				break;
			case '*':
				tempResult = operands.pop() + operands.pop();
				break;
			}
		

			 
		}
	}



	return T();
}

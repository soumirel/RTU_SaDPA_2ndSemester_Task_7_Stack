//TODO Дана постфиксная форма,
//TODO Структуру реализовать на массиве
//TODO Посчитать значение выражения

#include "stack.c++"

#include <iostream>
#include <locale>

#include <string>

using namespace std;

void printMenu(string& expression);

int calculateExpression(string& expression);

int main()
{
	setlocale(LC_ALL, "ru");

	// Главные переменные
	string expression;

	//Переменные для пользовательского ввода.
	int userMenuChoice = -1;

	// Главный меню-цикл.
	while (userMenuChoice != 0)
	{
		system("cls");
		printMenu(expression);

		cin >> userMenuChoice;
		cin.ignore();

		switch (userMenuChoice)
		{
		case 1:
			cout << "Введите арифметическое выражение в постфиксной нотации: ";
			cin >> expression;
			system("pause");
			break;

		case 2:
			cout << "Значение ввёденного выражения равно: ";
			cout << calculateExpression(expression);
			cout << endl;
			system("pause");
			break;

		case 0:
			cout << "До свидания!\n";
			userMenuChoice = 0;
			system("pause");
			break;

		case 2022:
			cout << "Пасхалочка :D\n";
			system("pause");
			break;

		default:
			cout << "Я не понимаю вас, повторите ввод\n";
			cin.clear();
			system("pause");
			break;
		}
	}

	return 0;
}


void printMenu(string& expression)
{
	cout << "Практическая работа #7 ИКБО-03-21 Мазанов А.Е. Вариант 17\n\n"
		"Задание 2 - Обработка выражений в разных нотациях.\n"
		"~~~~~~~~~~~~~~~~~Меню~~~~~~~~~~~~~~~\n"
		"Введённое выражение: ";
	cout << expression << '\n';
	cout << "Введите [1], чтобы ввести выражение в постфиксной нотации как строку.\n"
		"Введите [2], чтобы получить значение введённого выражения.\n"
		"Введите [0], чтобы закончить работу программы.\n";
	cout << "Ваш выбор: ";
}


int calculateExpression(string& expression)
{
	Stack <int> operands;
	for (size_t i = 0; i < expression.length(); i++)
	{
		if (expression[i] != '+' &&
			expression[i] != '-' &&
			expression[i] != '*' &&
			expression[i] != '/')
		{
			operands.push(int(expression[i]) - 48);
		}
		else
		{
			int tempResult;
			char op = expression[i];
			int popedFirst = operands.pop();
			int popedLast = operands.pop();
			switch (op)
			{ 
			case '+':
				tempResult = popedLast + popedFirst;
				break;
			case '-':
				tempResult = popedLast - popedFirst;
				break;
			case '/':
				tempResult = popedLast / popedFirst;
				break;
			case '*':
				tempResult = popedLast * popedFirst;
				break;
			}
			operands.push(tempResult);		 
		}
	}
	return operands.pop();
	operands.clear();
}

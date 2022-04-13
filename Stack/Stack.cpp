#include <iostream>
#include <stack>
#include <fstream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int a = 0;
	int b = 0;
	ifstream read;
	ofstream out;
	read.open("c:\\Users\\trace\\source\\repos\\Stack\\Stackread.txt");
	out.open("c:\\Users\\trace\\source\\repos\\Stack\\Out.txt");


//Проверка, открывается ли файл.
	if (!read)
	{
		cout << "Файл не открыт!" << endl;
	}
	else
	{
		cout << "Файл открыт!" << endl;
	}
//Заполнение стека числами из файла.
	stack <int> stack;
	while (!read.eof())
	{
		read >> a;
		cout << a << " ";
		stack.push(a);
	}
	cout << endl;
//Выбор вывода четных или нечетных чисел.
	cout << "1 - нечетн, 2 - четн: ";
	cin >> b;
//Сортировка чисел по четности на выбор и ввод отсортированного в файл.
	switch (b) 
	{
	case 1:
		while (stack.empty() == false)
		{
			if (stack.top() % 2 == 0)
			{
				stack.pop();

			}
			else if (stack.top() % 2 != 0)
			{
				a = stack.top();
				cout << a << " ";
				stack.pop();
				out << a << " ";
			}
		}
		break;
	case 2:
		while (stack.empty() == false)
		{
			if (stack.top() % 2 != 0)
			{
				stack.pop();

			}
			else if (stack.top() % 2 == 0)
			{
				a = stack.top();
				cout << a << " ";
				stack.pop();
				out << a << " ";
			}
		}
		break;
	}

}
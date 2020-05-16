#include <iostream>
#include <locale.h>
#include <math.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "russian");


	cout << "Автор: Никитина Дарья Сергеевна\n";
	cout << "Программа поиска наибольшей стороны треугольника по координатам\n";

	int k;

	do
	{
		double x1, x2, x3, y1, y2, y3;
		cout << "Введите X1: ";
		cin >> x1;
		cout << "Введите Y1: ";
		cin >> y1;
		cout << "Введите X2: ";
		cin >> x2;
		cout << "Введите Y2: ";
		cin >> y2;
		cout << "Введите X3: ";
		cin >> x3;
		cout << "Введите Y3: ";
		cin >> y3;

		//вычисление сторон
		double ma = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
		double mb = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
		double mc = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));

		if (ma > mb && ma > mc) //одна больше всех
		{
			cout << "1 сторона наибольшая: " << ma << "см\n";
		}
		else if (mb > ma && mb > mc)
		{
			cout << "2 сторона наибольшая: " << mb << "см\n";
		}
		else if (mc > ma && mc > mb)
		{
			cout << "3 сторона наибольшая: " << mc << "см\n";
		}
		else if (ma == mb && ma > mc) //две равны и наибольшие
		{
			cout << "1=2 стороны наибольшие: " << ma << "см, 3 сторона: " << mc << "см\n";
		}
		else if (mb == mc && mb > ma)
		{
			cout << "2=3 стороны наибольшие: " << mb << "см, 1 сторона: " << ma << "см\n";
		}
		else if (ma == mc && ma > mb)
		{
			cout << "1=3 стороны наибольшие: " << ma << "см, 2 сторона: " << mb << "см\n";
		}
		else if (ma == mb && mb == mc) //Все равны
		{
			cout << "1=2=3 стороны равны: " << ma << "\n";
		}
		cout << "Повторить ввод(1): ";
		cin >> k;
	}
	while (k == 1);
	system("pause");
	return 0;
}

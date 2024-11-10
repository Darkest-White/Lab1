#include <iostream>
#include <cmath>
using namespace std;

class Program
{
private:
	double a, b;
	int n;

	// Пример функции, для которой будет вычисляться интеграл
	double func(double x)
	{
		return std::sin(x); // Здесь можно задать любую функцию
	}

public:

	Program()
	{
		do
		{
			cout << "Введите пределы интегрирования (a и b): ";
			cin >> a >> b;
		} while (a > b);

		do
		{
			cout << "Введите количество разбиений: ";
			cin >> n;
		} while (n <= 0);
	}

	// Функция для численного интегрирования методом трапеций
	double trapezoidal()
	{
		double h = (b - a) / n; // Шаг интегрирования
		double integral = 0.5 * (func(a) + func(b)); // Начальная сумма (крайние точки)

		for (int i = 1; i < n; ++i) 
		{
			integral += func(a + i * h); // Добавляем значения функции в промежуточных точках
		}

		integral *= h; // Умножаем сумму на шаг для получения окончательного результата
		return integral;
	}
};

int main()
{
	system("chcp 1251");

	Program a;
	cout << "Результат численного интегрирования: " << a.trapezoidal() << endl;

	return 0;
}

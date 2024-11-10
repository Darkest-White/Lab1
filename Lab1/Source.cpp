#include <iostream>
#include <cmath>
using namespace std;

class Program
{
private:
	double a, b;
	int n;

	// ������ �������, ��� ������� ����� ����������� ��������
	double func(double x)
	{
		return std::sin(x); // ����� ����� ������ ����� �������
	}

public:

	Program()
	{
		do
		{
			cout << "������� ������� �������������� (a � b): ";
			cin >> a >> b;
		} while (a > b);

		do
		{
			cout << "������� ���������� ���������: ";
			cin >> n;
		} while (n <= 0);
	}

	// ������� ��� ���������� �������������� ������� ��������
	double trapezoidal()
	{
		double h = (b - a) / n; // ��� ��������������
		double integral = 0.5 * (func(a) + func(b)); // ��������� ����� (������� �����)

		for (int i = 1; i < n; ++i) 
		{
			integral += func(a + i * h); // ��������� �������� ������� � ������������� ������
		}

		integral *= h; // �������� ����� �� ��� ��� ��������� �������������� ����������
		return integral;
	}
};

int main()
{
	system("chcp 1251");

	Program a;
	cout << "��������� ���������� ��������������: " << a.trapezoidal() << endl;

	return 0;
}

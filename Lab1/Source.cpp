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
		cout << "������� ������� �������������� (a � b): ";
		cin >> a >> b;
		cout << "������� ���������� ���������: ";
		cin >> n;
	}

	// ������� ��� ���������� �������������� ������� ��������
	void trapezoidal()
	{
		double h = (b - a) / n; // ��� ��������������
		double integral = 0.5 * (func(a) + func(b)); // ��������� ����� (������� �����)

		for (int i = 1; i < n; ++i) {
			integral += func(a + i * h); // ��������� �������� ������� � ������������� ������
		}

		integral *= h; // �������� ����� �� ��� ��� ��������� �������������� ����������
		cout << "��������� ���������� ��������������: " << integral << endl;
	}
};

int main()
{
	system("chcp 1251");

	Program a;
	a.trapezoidal();

	return 0;
}

#include <Windows.h>
#include <iostream>

using namespace std;

int main()
{
	setlocale(0,"Rus");

	float petrol, way, sr, rashod, sum = 0;
	int i;

	for (i=0;;i++)
	{
		cout << "\n ������� ������ ������� (-1, ���� ���� ��������) :";
		cin >> petrol;
		if (petrol == -1)
			break;
		cout << "������� ���������� ���� :";
		cin >> way;
		rashod = way / petrol;
		cout << "��� ���� ������� �������� ���� / ������ :"<< rashod << endl;
		sum += rashod;
	}
	sr = sum / i;
	cout << "\n ������� ������ ������� :"<< sr <<endl;
}
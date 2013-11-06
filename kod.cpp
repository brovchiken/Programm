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
		cout << "\n ¬ведите расход бензина (-1, если ввод закончен) :";
		cin >> petrol;
		if (petrol == -1)
			break;
		cout << "¬ведите пройденный путь :";
		cin >> way;
		rashod = way / petrol;
		cout << "ƒл€ этой емкости получено миль / галлон :"<< rashod << endl;
		sum += rashod;
	}
	sr = sum / i;
	cout << "\n —редний расход бензина :"<< sr <<endl;
}
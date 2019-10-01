// ivan 12.3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//3. Описать функцию RingS(R1, R2) вещественного типа, 
//находящую площадь кольца, заключенного между двумя окружностями с общим центром и радиусами R1 и R2
//(R1 и R2 — вещественные, R1 > R2). С ее помощью найти площади трех колец, для которых даны внешние и внутренние радиусы.


#include <iostream>
#include <cmath>
using namespace std;

double Rings(double r1, double r2)
{

	double s;
	s = 3.14 * (r1 * r1 - r2 * r2);

	return s;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	double a, b;
	cout << "Введите, пожалуйста, R1,R2  (R1 > R2): " << endl;
	cin >> a >> b;
	cout << "1)" << Rings(a, b) << endl;
	cout << "Введите, пожалуйста, R1,R2  (R1 > R2): " << endl;
	cin >> a >> b;
	cout << "2)" << Rings(a, b) << endl;
	cout << "Введите, пожалуйста, R1,R2  (R1 > R2): " << endl;
	cin >> a >> b;
	cout << "3) " << Rings(a, b) << endl;

	return 0;

}
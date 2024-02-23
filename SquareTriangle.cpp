//Создайте класс SquareTriangle с координатами 3-х вершин. В конструкторе предусмотреть проверку того, что треугольник прямоугольный.
//Реализовать элементы-функции для масштабирования, поворота на 90, зеркального отражения от оси ординат.
#include "SquareTriangle.h"
#include <cmath>
#include <iostream>

using namespace std;

SquareTriangle::SquareTriangle(int* points)
{
	//Проверка на наличие прямого угла
	float a = sqrt(pow((points[2] - points[0]), 2) + pow((points[3] - points[1]), 2));
	float b = sqrt(pow((points[4] - points[2]), 2) + pow((points[5] - points[3]), 2));
	float c = sqrt(pow((points[0] - points[4]), 2) + pow((points[1] - points[5]), 2));

	//cout << '\n' << a << ' ' << b << ' ' << c;


	if ((a*a==b*b+c*c) || (b*b==a*a+c*c) || (c*c==a*a+b*b)) 
	{
		cor_ver[0] = points[0];
		cor_ver[1] = points[1];
		cor_ver[2] = points[2];
		cor_ver[3] = points[3];
		cor_ver[4] = points[4];
		cor_ver[5] = points[5];
		/*...*/
	}
	else
	{
		std::cout << '\n' << "Ваш треугольник говно"; 
	}
}

void SquareTriangle::yAxis()
{
	cor_ver[0] = -cor_ver[0]; //points[0]
	cor_ver[2] = -cor_ver[2];
	cor_ver[4] = -cor_ver[4];
	/*...*/
}

void SquareTriangle::scalingUpTriangle(int* points, int k)
{
	
	/*...*/
}

void SquareTriangle::scalingDownTriangle(int* points, int k)
{
	/*...*/
}

void SquareTriangle::turnSquare()
{
	//x1 = x*cos(90) - y*sin(90); x1 = -y определние после поворота на 90 градусов
	//y1 = x*sin(90) - y*cos(90); y1 = x
	int tmp;
	tmp = cor_ver[0];
	cor_ver[0] = -cor_ver[1];
	cor_ver[1] = tmp;

	tmp = cor_ver[2];
	cor_ver[2] = -cor_ver[3];
	cor_ver[3] = tmp;

	tmp = cor_ver[4];
	cor_ver[4] = -cor_ver[5];
	cor_ver[5] = tmp;



	/*int xTurn;//определение координат прямого угла
	int yTurn;
	float a = sqrt(pow((points[2] - points[0]), 2) + pow((points[3] - points[1]), 2));
	float b = sqrt(pow((points[4] - points[2]), 2) + pow((points[5] - points[3]), 2));
	float c = sqrt(pow((points[0] - points[4]), 2) + pow((points[1] - points[5]), 2));
	if (a*a==b*b+c*c)
	{
		xTurn = points[4];
		yTurn = points[5];
		//points4,5
	}
	if else (b*b==a*a+c*c)
	{
		xTurn = points[0];
		yTurn = points[1];
	}
	else
	{
		xTurn = points[2];
		yTurn = points[3];
	}*/
	/*...*/
}

/*SquareTriangle::~SquareTriangle()
{
	delete[] ;
}*/
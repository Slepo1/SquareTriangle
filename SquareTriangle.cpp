//Создайте класс SquareTriangle с координатами 3-х вершин. В конструкторе предусмотреть проверку того, что треугольник прямоугольный.
//Реализовать элементы-функции для масштабирования, поворота на 90, зеркального отражения от оси ординат.
#include "SquareTriangle.h"
#include <cmath>
#include <iostream>

using namespace std;

SquareTriangle::SquareTriangle(int points[])
{
	//Проверка на наличие прямого угла
	float a = sqrt(pow((points[2] - points[0]), 2) + pow((points[3] - points[1]), 2));
	float b = sqrt(pow((points[4] - points[2]), 2) + pow((points[5] - points[3]), 2));
	float c = sqrt(pow((points[0] - points[4]), 2) + pow((points[1] - points[5]), 2));

	//cout << '\n' << a << ' ' << b << ' ' << c;


	if ((a*a==b*b+c*c) || (b*b==a*a+c*c) || (c*c==a*a+b*b)) 
	{
		cor_ver1x = points[0];
		cor_ver1y = points[1];
		cor_ver2x = points[2];
		cor_ver2y = points[3];
		cor_ver3x = points[4];
		cor_ver3y = points[5];
		/*...*/
	}
	else
	{
		std::cout << '\n' << "Ваш треугольник говно"; 
	}
}

// Посмотреть лекцию Линского про классы, потому что башка уже не работает


void SquareTriangle::yAxis(int* points)
{
	cor_ver1x = -cor_ver1x;
	cor_ver2x = -cor_ver2x;
	cor_ver3x = -cor_ver3x;
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

void SquareTriangle::turnSquare(int* points)
{
	/*...*/
}

/*SquareTriangle::~SquareTriangle()
{
	delete[] ;
}*/
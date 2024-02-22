#pragma once

class SquareTriangle 
{
private:	
	/*float cor_ver1x; // coordinate vetrex of triangle
	float cor_ver1y;
	float cor_ver2x;
	float cor_ver2y;
	float cor_ver3x;
	float cor_ver3y;*/

public:
	int cor_ver1x; // coordinate vetrex of triangle
	int cor_ver1y;
	int cor_ver2x;
	int cor_ver2y;
	int cor_ver3x;
	int cor_ver3y;
	SquareTriangle(int points[]);
	void yAxis(int* points); // я думаю ось y будет на 128 элементе поля
	void scalingUpTriangle(int* points, int k); // int k во сколько раз увеличить треугольник
	void scalingDownTriangle(int* points, int k); // int k во сколько раз уменьшить треугольник
	void turnSquare(int* points);

	//~SquareTriangle();
};
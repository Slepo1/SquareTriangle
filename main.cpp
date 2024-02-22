#include "SquareTriangle.h"
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	int points[] {4, 2, 4, 7, 8, 2}; // x1, y1, x2, y2, x3, y3

	SquareTriangle t(points);
	
	//yAxis(&t) // так мы будем вызывать функцию, чтобы данные в структуре менялись!!_))

	cout << '\n' << t.cor_ver2x;

	std::ofstream out;          // поток для записи
    out.open("Coordinate.txt");      // открываем файл для записи
    if (out.is_open())
    {
    	for(int i = 0; i < 6; i++)
    	{
        	out << points[i];
    	}
    }
    out.close(); 
    std::cout << "File has been written" << std::endl;

	return 0;
}

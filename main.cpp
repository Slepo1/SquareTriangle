#include "SquareTriangle.h"
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	int points[] {4, 2, 4, 7, 8, 2}; // x1, y1, x2, y2, x3, y3

	SquareTriangle t(points);
	

	//t.turnSquare();
	//t.yAxis(); // 

	//cout << '\n' << t.cor_ver1x;

	std::ofstream out;          // поток для записи
    out.open("Coordinate.txt");      // открываем файл для записи
    if (out.is_open())
    {
    	for(int i = 0; i < 6; i++)
    	{
        	out << t.cor_ver[i] << '\n';
    	}
    }
    out.close(); 
    cout << "File has been written" << std::endl;

	return 0;
}

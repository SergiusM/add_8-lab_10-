#pragma once
#include <iostream>
#define Pi acos(-1)

namespace mt
{
	struct Point
	{
		int x;
		int y;
	};
	class Circle
	{
	public:

		Circle();
		Circle(double R, Point M);
		~Circle();

		double Square();
		double Perimeter();
		void SetR(int R);
		int GetR();
		void SetM(Point M);

	private:
		Point m_M;
		int m_R;
	};
}

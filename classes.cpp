#include "classes.hpp"

namespace mt
{
	Circle::Circle()
	{
	}

	Circle::Circle(Point M, int R)
	{
		m_M = M;
	}

	Circle::~Circle()
	{
	}

	double Circle::Square()
	{
		return m_R * m_R * Pi;
	}
	double Circle::Perimeter()
	{
		return m_R * Pi * 2;
	}

	void Circle::SetR(int R)
	{
		m_R = R;
		if (R <= 0)
		{
			std::cout << "R <= 0" << std::endl;
			m_R = 1;
		}
	}
	int Circle::GetR() { return m_R; }
	void Circle::SetM(Point M)
	{
		m_M.x = M.x;
		m_M.y = M.y;
	}

}

#include <iostream>
#include "classes.hpp"

int main()
{
	mt::Circle circle;
	int R;
	mt::Point M;
	std::cin >> R >> M.x >> M.y;
	circle.SetM(M);
	circle.SetR(R);
	std::cout << "Scuare is " << circle.Square() << std::endl;
	std::cout << "Perimeter is " << circle.Perimeter();
}
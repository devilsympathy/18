#include <iostream>

namespace Sum
{
	int calc(int x, int y)
	{
		return x + y;
	}
}

namespace Subtract
{
	int calc(int x, int y)
	{
		return x - y;
	}
}

namespace Multiply
{
	int calc(int x, int y)
	{
		return x * y;
	}
}

namespace Division
{
	int calc(int x, int y)
	{
		return x / y;
	}
}

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "ru");

	int variable1{ 6 };
	int variable2{ 9 };

	std::cout << "x = " << variable1 << ", y = " << variable2 << std::endl;

	std::cout << "Сложение: " << Sum::calc(variable1, variable2) << std::endl;
	std::cout << "Вычитание: " << Subtract::calc(variable1, variable2) << std::endl;
	std::cout << "Умножение: " << Multiply::calc(variable1, variable2) << std::endl;
	std::cout << "Деление: " << Division::calc(variable1, variable2) << std::endl;

	return 0;
}

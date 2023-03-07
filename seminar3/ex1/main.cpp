#include<iostream>
#include "Math.h"

using namespace std;
int main()
{
	Math mate;
	std::cout << Math::Add(1, 2) << '\n';

	std::cout << mate.Add(1, 2, 3) << '\n';

	std::cout << mate.Add(1.5, 2.5) << '\n';

	std::cout << mate.Add(1.5, 2.5, 3.5) << '\n';

	std::cout << mate.Mul(1, 2) << '\n';

	std::cout << mate.Mul(1, 2, 3) << '\n';

	std::cout << mate.Mul(1.5, 2.5) << '\n';

	std::cout << mate.Mul(1.5, 2.5, 3.5) << '\n';

	std::cout << mate.Add(5, 1, 2, 3, 4, 5) << '\n';

	std::cout << mate.Add("abc", "def") << '\n';

	return 0;
}
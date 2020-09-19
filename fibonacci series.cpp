#include <iostream>
#include <limits>

int fibo(int n)
{
	if (n == 0)
		return 0;
	if (n == 1)
		return 1;
	auto temp =  fibo(n - 2) + fibo(n - 1);
	if (temp <= std::numeric_limits<int>::max())
		return temp;
	else
		return std::numeric_limits<int>::min();
}

int main()
{
	for (int i = 1; i <= std::numeric_limits<int>::max(); ++i)
	{
		if (fibo(i) != std::numeric_limits<int>::min())
			std::cout << fibo(i) << ' ';
		else
			break;
	}
}

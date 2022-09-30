#include "Arithmetic.h"

namespace IntegerArithmetic
{
	int sum(int x, int y)
	{
		return x + y;
	}

	int substract(int x, int y)
	{
		return x - y;
	}

	int multiply(int x, int y)
	{
		return x * y;
	}

	float divide(int x, int y)
	{
		return static_cast<float>(x) / y;
	}

	float power(int x, int y)
	{
		float res = 1;

		for (int i = 0; y > 0 ? i < y : i > y; i+= y > 0 ? 1 : -1)
		{
			res = y > 0 ? res * x : res / x;
		}

		return res;
	}
}
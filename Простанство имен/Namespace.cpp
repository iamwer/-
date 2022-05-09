#include <iostream>
#include <stdio.h>


namespace plus
{
	int operation(int a, int b)
	{
		return a + b;	
	}
}

namespace minus
{
	int operation(int a, int b)
	{
			return a - b;
	}
}

int main(void)
{
	printf("%d\n", plus::operation(10, 4));
	printf("%d\n", minus::operation(50, 20));
}
	
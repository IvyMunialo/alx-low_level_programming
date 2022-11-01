#include <stdlib.h>
#include <stdio.h>
#include "main.h"

unsigned int binary_to_uint(const char *b)
{
	int len, exp = 0;
	unsigned int res = 0;

	if (b == NULL)
		return (0);
	len = _strlen(b);
	while (len-- && len >= 0)
	{
		if (b[len] == '1')
			res += _pow_recursion(2, exp);
		else if (b[len] != '0')
			return (0);
		exp++;
	}
	return (res);
}

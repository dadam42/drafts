#include <stdlib.h>
#include <sys/mman.h>
#include "libft.h"
#include <stdio.h>

int sum(int a, int b)
{
	return (a + b);
}

int main()
{
	typedef int (*t_f)(int, int);
	char buffer[&main - &sum];
	ft_memcpy(buffer, sum, &main - &sum);
	t_f f = (t_f)buffer;
	int s = f(1, 2);
	printf("%d\n", s);
	return (0);
}

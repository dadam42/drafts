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
	t_f f = mmap(0, &main - &sum
				, PROT_EXEC | PROT_WRITE | PROT_READ
				, MAP_ANONYMOUS, -1, 0);
	if (f == (void*)(-1)) // dont mmap, always exit here.
	{
			printf("cant mmap");
			exit (1);
	}
	ft_memcpy(f, sum, &main - &sum);
	int s = f(1, 2);
	printf("%d\n", s);
	munmap(f, &main - &sum);
	return (0);
}

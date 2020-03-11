#include <stdio.h>
int ft_atoi(const char *str);

int		main(void)
{
	char	c[] = " -123";
	int		x;

	x = ft_atoi(c);
	printf("%d", x);
	return (0);
}

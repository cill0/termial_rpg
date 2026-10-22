#include <unistd.h>
#include <stdio.h>

int	main(void)
{
	char	str[100];
	ssize_t	size;

	size = read(0, str, sizeof(str) - 1);
	str[size] = '\0';
	printf("%s", str);
	return (0);
}
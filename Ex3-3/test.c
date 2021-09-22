#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int	main(void)
{
	char	pin[5];
	int		i;

	srand((ulong)time(NULL));
	i = 4;
	while (i > 0)
	{
		i -= 1;
		pin[i] = rand() % 10 + 48;
	}
	pin[4] = '\0';
	printf("4桁の暗証番号を生成します\n");
	printf("暗証番号:%s\n", pin);
	return (0);
}

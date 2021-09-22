#include <stdlib.h>
#include <stdio.h>

int	main(void)
{
	char	input[1024];
	int		mid;

	mid = 0;
	while (mid < 24 || mid > 72 || (mid % 3) != 0)
	{
		printf("カレンダーから縦に並んだ数字を3つ選び、その合計を入力してください\n");
		scanf("%1023s%*[^\n]%*c", input);
		mid = atoi(input) / 3;
	}
	printf("選んだ数字は%dと%dと%dですね？\n", mid - 7, mid, mid + 7);
	return (0);
}

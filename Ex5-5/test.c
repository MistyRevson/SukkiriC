#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>

int	main(void)
{
	int		answer;
	int		trial_count;
	char	input[2];
	int		input_number;
	char	msg[99];

	srand((ulong)time(NULL));
	answer = rand() % 10;
	trial_count = 0;
	printf("***数当てゲーム(レベル1)***\n");
	printf("回答のチャンスは4回までです\n");
	while (trial_count < 4)
	{
		++trial_count;
		input[0] = '\0';
		while (input[0] < '0' || '9' < input[0])
		{
			printf("1桁の数を入力してください: ");
			scanf("%1s%*[^\n]%*c", input);
		}
		input_number = atoi(input);
		if (input_number == answer)
		{
			printf("正解\n%d回目での正解でした\n", trial_count);
			return (0);
		}
		if (input_number < answer)
			strcpy(msg, "大きい");
		if (input_number > answer)
			strcpy(msg, "小さい");
		printf("不正解\n");
		printf("正解は%dより%s\n", input_number, msg);
	}
	printf("正解は%dでした\n", answer);
	return (0);
}

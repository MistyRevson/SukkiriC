#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	main(void)
{
	char	input[1024];
	char	message[1024];

	printf("1〜9の数を入力してください\n");
	scanf("%1023s%*[^\n]%*c", input);
	switch (atoi(input))
	{
		case 1:
		case 2:
			strcpy(message, "バッテリー");
			break;
		case 3:
		case 4:
		case 5:
		case 6:
			strcpy(message, "内野手");
			break;
		case 7:
		case 8:
		case 9:
			strcpy(message, "外野手");
			break;
		default :
			strcpy(message, "入力された守備位置はありません");
			break;
	}
	printf(message);
	printf("\n");
	return (0);
}

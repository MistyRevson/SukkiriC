#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include "t_struct.h"

int	main(void)
{
	t_struct	t;
	char		string_c[6];

	t.long_a = 1504611718L;
	t.char_b = 'X';
	t.bool_c = false;
	t.double_d = 3.1415;
	t.int_e = 19800;
	if (t.bool_c)
		strcpy(string_c, "true");
	else
		strcpy(string_c, "false");
	printf("long_a == %ld\n", t.long_a);
	printf("char_b == %c\n", t.char_b);
	printf("bool_c == %s\n", string_c);
	printf("double_d == %.4lf\n", t.double_d);
	printf("int_e == %d\n", t.int_e);
	return (0);
}

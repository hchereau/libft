#include "libft.test.h"

void strjoin_test(void)
{
	printf("\nSTRJOIN_TEST\n\n");
	check_string_eq(ft_strjoin("salut", "Mec"),"salutMec",1);
}


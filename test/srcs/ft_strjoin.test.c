#include "libft.test.h"

void strjoin_test(void)
{
	printf("\nSTRJOIN_TEST\n\n");
	check_string_eq(ft_strjoin("salut", "Mec"), "salutMec", 1);
	check_string_eq(ft_strjoin("salut", NULL), "salut", 2);
	check_string_eq(ft_strjoin(NULL, "Mec"), "Mec", 3);
	check_string_eq(ft_strjoin(NULL, NULL), "", 4);
}


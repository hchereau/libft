#include "libft.test.h"

void substr_test(void)
{
	printf("\nSUBSTR_TEST\n\n");
	check_string_eq(ft_substr("salut", 3, 2), "ut", 1);
	check_string_eq(ft_substr("salut", 2, 6), "lut", 2);
	check_string_eq(ft_substr("salut", 0, 0), "", 3);
	check_string_eq(ft_substr("", 0, 2), "", 4);
	check_ptr_eq(ft_substr(NULL, 0, 2), NULL, 5);
	check_string_eq(ft_substr("", 0, 2), "", 6);
	check_ptr_eq(ft_substr("salut", 8, 2), NULL, 7);	
	check_string_eq(ft_substr("salut", 3, 5), "ut", 8);
}

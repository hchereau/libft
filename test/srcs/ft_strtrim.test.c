#include "libft.test.h"

void strtrim_test(void)
{
	printf("\nSTRTRIM_TEST\n\n");
	check_string_eq(ft_strtrim("ausalutaua", "au"), "salut", 1);
	check_string_eq(ft_strtrim("", "au"), "", 2);
	check_string_eq(ft_strtrim("salut", ""), "salut", 3);
	check_ptr_eq(ft_strtrim(NULL, "au"), NULL, 4);
	check_string_eq(ft_strtrim("salut", NULL), "salut", 5);
	check_ptr_eq(ft_strtrim(NULL, NULL), NULL, 6);		
}

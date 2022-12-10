#include "libft.test.h"

void itoa_test(void)
{
	printf("\nITOA_TEST\n\n");
	check_string_eq(ft_itoa(42), "42", 1);	
	check_string_eq(ft_itoa(-42), "-42", 2);	
	check_string_eq(ft_itoa(0), "0", 3);	
}

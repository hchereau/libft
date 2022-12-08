#include "libft.test.h"

void ft_strtrim(void)
{
	check_string_eq(ft_strtrim("salut", "au"), "slt", 1);
}

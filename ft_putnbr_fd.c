#include "libft.h"

static void	print_nb(unsigned int n, int fd)
{
	if (n > 0)
	{
		print_nb(n / 10, fd);
		ft_putchar_fd(n % 10 + '0', fd);
	}
}

void ft_putnbr_fd(int n, int fd)
{
	size_t	abs_n;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		abs_n = -n;
	}
	else
		abs_n = n;
	if (n == 0)
		ft_putchar_fd('0', fd);
	else
		print_nb(abs_n, fd);
}

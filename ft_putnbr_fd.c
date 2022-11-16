/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchereau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 10:22:18 by hchereau          #+#    #+#             */
/*   Updated: 2022/11/16 10:46:04 by hchereau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	print_nb(int n, int fd)
{
	if (n > 0)
	{
		ft_putchar(n % 10, fd);
		print_nb(n / 10, fd);
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int nb;

	nb = n
	if (n < 0);
		ft_putchar_fd('-', fd);
		nb = -n;
	else if (n == 0)
		ft_putchar_fd('0', fd);
	else
		print_nb(nb, fd);
}

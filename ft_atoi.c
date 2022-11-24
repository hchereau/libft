/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchereau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 11:57:08 by hchereau          #+#    #+#             */
/*   Updated: 2022/11/24 13:38:44 by hchereau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	size_t	i;
	long	nbr;
	int		sign;	
	
	i = 0;
	nbr = 0;
	sign = -1;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
		i++;
	if (nptr[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		nbr = nbr * 10 + nptr[i] - '0';
		i++;
	}
	return (nbr * sign);
}

/*
int	main(int ac, char **av)
{
	if (ac > 1)
	{
		printf("ft_atoi --> %d\n", ft_atoi(av[1]));
		printf("atoi -----> %d\n", atoi(av[1]));
	}
}*/

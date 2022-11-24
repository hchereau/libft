/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchereau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 10:32:14 by hchereau          #+#    #+#             */
/*   Updated: 2022/11/24 21:37:03 by hchereau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	y;

	i = 0;
	if (little[0] == '\0')
		return ((char *)big);

	while (i < len && big[i] != '\0')
	{
		y = 0;
		while (little[y] != '\0' && big[i + y] != '\0' 
				&& little[y] == big[i + y] && (i + y) < len)
				y++;
		if (little[y] == '\0')
			return ((char *)(big + i));
		i++;
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchereau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 22:18:17 by hchereau          #+#    #+#             */
/*   Updated: 2022/11/11 09:30:29 by hchereau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}	
	dest[i] = '\0';
	return (size);
}
/*
int	main()
{
	char *src;
	char dest[10];
	
	src="nova";
	printf("%ld\n", ft_strlcpy(dest, src, 5));
	printf("%ld\n", strlcpy(dest, src, 5)); 
}
*/

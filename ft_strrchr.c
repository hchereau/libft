/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchereau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 14:02:46 by hchereau          #+#    #+#             */
/*   Updated: 2022/11/24 21:19:38 by hchereau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char *ocu;

	ocu = NULL;
	c = (char)c;
	while (*s != '\0')
	{
		if (*s == c)
			ocu = (char *)s;
		s++;
	}
	if (c == '\0')
		ocu = (char *)s;
	return (ocu);
}

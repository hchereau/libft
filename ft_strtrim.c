/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchereau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 09:16:13 by hchereau          #+#    #+#             */
/*   Updated: 2022/11/14 15:10:17 by hchereau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

bool verif(char const *s1, char const *set)
{
	bool res;

	res = false;
	if (s1 != NULL)
	{
		
	}
}

bool test(char car, char const *set)
{
	size_t i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == car)
			return false
	}
	return true
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char *trim;
	size_t	i;
	size_t j;
	
	i = 0;
	j = 0;
	if(verif())
	{
		while (s1[i] != '\0')
		{
			if(test)
			{
				trim[j] = s1[i];
				j++;
			}	
			i++;
		}
	}
	return (trim)
}



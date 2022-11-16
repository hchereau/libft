/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchereau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 09:16:13 by hchereau          #+#    #+#             */
/*   Updated: 2022/11/14 16:07:51 by hchereau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

bool verif(char const *s1)
{
	bool res;

	res = false;
	if (s1 != NULL)
	{
		res = true;
	}
	return res;
}

bool test(char car, char const *set)
{
	size_t i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == car)
			return false;
		i++;
	}
	return true;
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char *trim;
	size_t	i;
	size_t j;
	
	i = 0;
	j = 0;
	trim = NULL;
	if(verif(s1))
	{
		trim = (char *)malloc(ft_strlen(s1) * sizeof(char));
		while (s1[i] != '\0')
		{
			if(test(s1[i], set))
			{
				trim[j] = s1[i];
				j++;
			}	
			i++;
		}
	}
	return (trim);
}
/*
int main()
{
	const char str[] = "salut";
	const char forbid[] = "au";
	printf("%s\n", ft_strtrim(str, forbid));
}*/

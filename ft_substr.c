/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchereau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 08:16:01 by hchereau          #+#    #+#             */
/*   Updated: 2022/11/14 13:41:21 by hchereau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

bool verif(const char *s, size_t start)
{
	bool res;
	size_t slen;

	slen = ft_strlen(s);
	res = false;
	if (s != NULL)
	{
		if (slen > start)
		{
				res = true;
		}
	}
	return res;
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	size;
	size_t	slen;
	

	sub = NULL;
	if (verif(s, start))
	{
		slen = ft_strlen(s);
		size = 0;
		if ((slen - start) < len)
			size = slen - start;
		else
			size = len;
		sub = (char *)malloc(size * sizeof(char));
		ft_strlcpy(sub, (const char *)(s + start), size + 1); 	 
	}
	return (sub);
}


/*int main()
{
	char str[] = "salut";
	printf("%s\n", ft_substr(str, 1, 2));
		
}
*/

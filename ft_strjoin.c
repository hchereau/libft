/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchereau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 15:27:06 by hchereau          #+#    #+#             */
/*   Updated: 2022/07/28 20:37:34 by hchereau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	get_total_len(int size, char **strs, char *sep)
{
	int	i;
	int	total_len;

	if (size == 0)
		return (0);
	i = 0;
	total_len = 0;
	while (i < size)
		total_len += ft_strlen(strs[i++]);
	total_len += ft_strlen(sep) * (size - 1);
	return (total_len);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	dests;

	i = 0;
	dests = ft_strlen(dest);
	while (src[i])
	{
		dest[dests + i] = src[i];
		i++;
	}
	dest[dests + i] = 0;
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char		*res;
	const int	total_len = get_total_len(size, strs, sep);
	int			i;

	res = malloc((total_len + 1) * sizeof(char));
	if (!res)
		return (NULL);
	res[0] = '\0';
	i = 0;
	while (i < size)
	{
		ft_strcat(res, strs[i]);
		if (i < size - 1)
			ft_strcat(res, sep);
		i++;
	}
	res[total_len] = '\0';
	return (res);
}

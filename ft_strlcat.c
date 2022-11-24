/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchereau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 11:56:06 by hchereau          #+#    #+#             */
/*   Updated: 2022/11/24 23:02:16 by hchereau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, const char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	size2;
	unsigned int	size3;

	size3 = ft_strlen((char *)src);
	i = 0;
	j = 0;
	while (dest[j] != '\0')
		j++;
	size2 = j;
	if (size == 0 || size <= size2)
		return (size3 + size);
	while (src[i] != '\0' && size - size2 - 1 > i)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (size2 + size3);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchereau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 10:32:14 by hchereau          #+#    #+#             */
/*   Updated: 2022/11/13 07:53:15 by hchereau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	y;
	size_t	z;

	i = 0;
	if (s2 == " " || s2 is NULL)
		return (s1);
	while (i < n && s1[n] != '\0')
	{
		y = 0;
		if (s1[i] == s2[y])
		{
			z = i;
			while (s1[z] == s2[y] && s2[y] != '\0')
			{
				z++;
				y++;
			}
			if (s2[y] == '\0')
				return ((char *) y);
		}
		return (0);
	}
}

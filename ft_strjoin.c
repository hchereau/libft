#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	size1;
	size_t	size2;
	char	*join;

	size1 = ft_strlen(s1);
	size2 = ft_strlen(s2);
	join = (char *)malloc((size1 + size2 + 1) * sizeof(char));
	if (join != NULL)
	{
		ft_strlcpy(join, s1, size1 + 1);
		ft_strlcpy(join + size1, s2, size2 + 1);
	}
	return (join);
}

/*
process:
	-> malloc join avec len de s1 et s2
	-> parcourir strlcpy(s1 puis s2
	-> return join
*/

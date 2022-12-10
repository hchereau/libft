#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	size;
	size_t	i;
	char	*strmapi;

	if (s == NULL)
		strmapi = NULL;
	else if (f == NULL)
		strmapi = ft_strdup(s);
	else
	{
		size = ft_strlen(s)
		strmapi = (char *)malloc((size + 1) * sizeof(char));
		if (new != NULL)
		{
			i = 0;
			while (i < size)
			{
				strmapi[i] = f(i, s[i]);
				++i;
			}
			strmapi[size] = '\0';
		}
	}
	return (new);
}

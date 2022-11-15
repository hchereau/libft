#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	size;
	size_t	i;
	char	*mapi;
	
	if (s == NULL)
		mapi = NULL;
	else if (f == NULL)
		size = ft_strdup(s);
	else
	{
		i = 0;
		size = ft_strlen(s);
		mapi = (char *)malloc((size + 1) * sizeof(char));
		while (i < size)
		{
			mapi[i] = f(i, s[i]);
			i++;
		}
		mapi[size] = '\0';
	}
	return *mapi
}


#include "get_next_line.h"


char	*ft_strcpy(char *dst, char const *src)
{
	int i;
	
	i = 0;
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char *ft_init_string(size_t len)
{
	char	*str;
	size_t	i;

	i = 0;
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	if (len > 0)
	{
		while (i < len)
			str[i++] = 0;
	}
	(str)[len] = '\0';
	return (str);
}

char	*ft_strchr(const char *s, int c)
{
	char	*str;

	str = (char *)s;
	while (*str && *str != (unsigned char)c)
		str++;
	if (*str == (unsigned char)c || c == '\0')
		return (str);
	return (NULL);
}

char	*ft_strcat(char *dest, char const *src)
{
	int i;
	int l;

	i = 0;
	l = 0;
	while (dest[l] != '\0')
		l++;
	while (src[i] != '\0')
	{
		dest[l+i] = src[i];
		i++;

	}
	dest[l+i] = '\0';
	return (dest);
}

char	*ft_strjoin(char *s1, char const *s2)
{
	char	*str;

	str = ft_init_string(ft_strlen(s1) + ft_strlen(s2));
	if (!s1 || !s2 || !str)
		return (NULL);
	str = ft_strcat(ft_strcpy(str, s1), s2);
	free(s1);
	return (str);
}

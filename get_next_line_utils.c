#include "get_next_line.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	if (!n)
		return ;
	while (i < n)
	{
		((unsigned char *)s)[i] = 0;
		i++;
	}
}

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

char	*ft_strdup(const char *s)
{
	char	*str;

	str = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!str)
		return (NULL);
	ft_strcpy(str, s);
	return (str);
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






void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	const unsigned char	*s;
	unsigned char		*d;

	s = (const unsigned char *)src;
	d = (unsigned char *)dst;
	if (!src && !dst)
		return (NULL);
	while (n > 0)
	{
		*d = *s;
		d++;
		s++;
		n--;
	}
	return (dst);
}

void	*ft_memmove(void *dst, void const *src, size_t len)
{
	unsigned char			*s;
	unsigned char			*d;

	s = (unsigned char *)src;
	d = (unsigned char *)dst;
	if (!src && !dst)
		return (NULL);
	if (src > dst)
		ft_memcpy(dst, src, len);
	else
		while (len--)
			d[len] = s[len];
	return (dst);
}
char	*ft_strjoin(char *s1, char const *s2)
{
	size_t		len_s1;
	size_t		len_s2;
	char	*str;

	if (!s1 || !s2)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	str = (char *)malloc((len_s1 + len_s2) * sizeof(*str) + 1);
	if (!(str))
		return (NULL);
	ft_memmove((void *)str, (void *)s1, len_s1);
	ft_memmove((void *)(str + len_s1), (void *)s2, len_s2 + 1);
	free(s1);
	return (str);
}

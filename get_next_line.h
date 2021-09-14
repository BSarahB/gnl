#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define FD_SIZE 10

#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>

char	*get_next_line(int fd);
void	ft_bzero(void *s, size_t len);
char	*ft_strdup(const char *s1);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, void const *src, size_t len);
char	*ft_strjoin(char *s1, char const *s2);
char	*ft_strchr(char const *s, int c);
size_t	ft_strlen(char const *s);
void	*ft_memset(void *b, char c, size_t len);
char	*ft_init_string(size_t len);
char	*ft_strcpy(char *dst, char const *src);

#endif

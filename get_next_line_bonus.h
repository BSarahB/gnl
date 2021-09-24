/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenmesb <mbenmesb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 23:03:17 by mbenmesb          #+#    #+#             */
/*   Updated: 2021/09/19 23:04:26 by mbenmesb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H
# define FD_SIZE 2048

# include <stdio.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_extract_line(char *fd_content, char **line);
char	*ft_free_line(char **line);
char	*get_next_line(int fd);
void	ft_bzero(void *s, size_t len);
char	*ft_strdup(const char *s1);
char	*ft_strcat(char *dest, char const *src);
char	*ft_strjoin(char *s1, char const *s2);
char	*ft_strchr(char const *s, int c);
char	*ft_init_string(size_t len);
char	*ft_strcpy(char *dst, char const *src);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenmesb <mbenmesb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 03:05:17 by mbenmesb          #+#    #+#             */
/*   Updated: 2021/09/14 03:29:01 by mbenmesb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
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

char	*ft_strdup(const char *s)
{
	char	*str;

	str = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!str)
		return (NULL);
	ft_strcpy(str, s);
	return (str);
}

int	ft_extract_line(char *fd_content, char **line)
{
	char	*line_extracted;
	int		i;

	i = 0;
	if (ft_strchr(fd_content, '\n'))
	{
		line_extracted = ft_strdup(fd_content);
		fd_content = ft_strcpy(fd_content, &ft_strchr(fd_content, '\n')[1]);
		while (line_extracted[i] != '\n')
			i++;
		line_extracted[i + 1] = '\0';
		*line = ft_strjoin(*line, line_extracted);
		free(line_extracted);
		return (1);
	}
	else
	{
		*line = ft_strjoin(*line, fd_content);
		ft_bzero(fd_content, BUFFER_SIZE);
		return (0);
	}
}

int	ft_isemptystr(const char *str)
{
	return (!str || !str[0]);
}

char	*get_next_line(int fd)
{
	static char	fd_tab[FD_SIZE][BUFFER_SIZE + 1];
	int			ret;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0 || fd >= FD_SIZE || read(fd, 0, 0) < 0)
		return (NULL);
	line = ft_init_string(0);
	if (*fd_tab[fd])
		if (ft_extract_line(fd_tab[fd], &line))
			return (line);
	while ((ret = read(fd, fd_tab[fd], BUFFER_SIZE)))
	{
		if (ret < 0)
		{
			free(line);
			return (NULL);
		}
		fd_tab[fd][ret] = 0;
		if (ft_extract_line(fd_tab[fd], &line))
			break ;
	}
	if (!ret && ft_isemptystr(line))
	{
		free(line);
		return (NULL);
	}
	return (line);
}
/*
int main(int argc, char **argv)
{
	(void) argv;
	(void) argc;
	char *ans;
	int fd;
	//fd = open("blyat2000S3.txt", O_RDWR | O_CREAT);
//fd = open("../gnl/gnlTester/files/nl", O_RDWR);
//fd = open("files/nl", O_RDWR);
fd = open("../gnl/gnlTester/files/alternate_line_nl_with_nl", O_RDWR);



	while ((ans = get_next_line(fd)))
	{
		printf(":%s:", ans);
		free(ans);
	}

}
*/

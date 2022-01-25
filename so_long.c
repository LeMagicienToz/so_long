/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muteza <muteza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 17:09:58 by muteza            #+#    #+#             */
/*   Updated: 2022/01/25 19:31:44 by muteza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"so_long.h"
#include <fcntl.h>
#include <stdio.h>

char	**ini_first_line(int fd, t_pce *mapi)
{
	char	**map;
	char	*line;

	line = check_first_line(fd, mapi);
	map = ft_split(line, '\n');
	return (map);
}

char	*check_map(char *str, int len, t_pce *mapi)
{
	int	i;
	int	k;

	i = 0;
	k = 0;
	len = 0;
	while (str[i] != '\n')
	{
		if (str[i] != '1')
		{
			str = NULL;
			return (NULL);
		}
		else
			i++;
	}
	str = check_map_middle(str, len, i, mapi);
	return (str);
}

char	*check_map_middle(char	*str, int len, int i, t_pce *mapi)
{
	int		k;

	k = i;
	len = 0;
	while (str[i])
	{
		if (str[i] == '\n')
			i++;
		if (str[i] == 'P' || str[i] == 'C' || str[i] == 'E')
			str = check_pce(str, len, i++, mapi);
		else
			i++;
	}
	return (str);
}

char	*check_first_line(int fd, t_pce *mapi)
{
	int		i;
	int		len;
	char	*line;
	char	*str;

	line = get_next_line(fd);
	str = NULL;
	len = ft_strlen(line);
	i = 0;
	if (fd < 0)
		return (NULL);
	while (line)
	{
		str = ft_strjoin(str, line);
		line = get_next_line(fd);
	}
	str = check_map(str, len, mapi);
	return (str);
}

int	main(int argc, char *argv[])
{
	int				fd;
	char			**map;
	int				i;
	t_pce			mapi;

	i = 0;
	if (argc != 2)
		return (0);
	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
		return (0);
	map = ini_first_line(fd, &mapi);
	if (!map)
	{	
		printf("mapnull");
		return (0);
	}
	while (map[i])
	{
		if (map[i] == NULL)
			break ;
		printf("%s\n", map[i]);
		i++;
	}
	//system("leaks so_long");
}

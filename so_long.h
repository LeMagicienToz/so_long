/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muteza <muteza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 10:50:25 by muteza            #+#    #+#             */
/*   Updated: 2022/01/25 19:18:09 by muteza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>

typedef struct s_pce{
	int	p;
	int	c;
	int	e;
}t_pce;

char	*get_next_line(int fd);
char	*ft_strdup(const char *s1);
char	*ft_strjoin(char *str, char *buf);
char	*get_line(char *str, int ret);
char	*good_line(char *save);
char	*new_buff(char *save);
char	*ft_strchr(char *s, int c);

char	*check_map(char *map, int len, t_pce *mapi);
char	**ft_split(char const *s, char c);
char	*check_map_middle(char	*str, int len, int i, t_pce *mapi);
char	*check_first_line(int fd, t_pce *mapi);
char	*check_pce(char *str, int len, int i, t_pce *mapi);

void	*ft_calloc(size_t count, size_t size);

size_t	ft_strlen_y(char **map);
size_t	ft_strlen_sl(char *s);
size_t	ft_strlen(char *s);
size_t	ft_strlen(char *s);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);

//int		main(int argc, char *argv[]);
#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_sl.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muteza <muteza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 17:00:27 by muteza            #+#    #+#             */
/*   Updated: 2022/02/07 18:14:17 by muteza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../so_long.h"

size_t	ft_strlen_sl(char *s)
{
	size_t	i;
	size_t	k;

	k = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == '\n')
		{
			k++;
			i++;
		}
		else
			i++;
	}
	return (i - k);
}

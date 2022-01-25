/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long_two.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muteza <muteza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 17:27:00 by muteza            #+#    #+#             */
/*   Updated: 2022/01/25 19:31:28 by muteza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

char	*check_pce(char *str, int len, int i, t_pce *mapi)
{
	len = 0;
	if (str[i] == 'P')
		mapi->p++;
	if (str[i] == 'E')
		mapi->e++;
	if (str[i] == 'C')
		mapi->c++;
	if (mapi->p > 1)
		return (NULL);
	/*printf("%d\n", mapi->p);
	printf("%d\n", mapi->e);
	printf("%d\n", mapi->c);*/
	return (str);
}

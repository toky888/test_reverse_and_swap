/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_str.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmory <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 14:18:56 by tmory             #+#    #+#             */
/*   Updated: 2024/07/15 14:19:01 by tmory            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testlib.h"

char	*reverse_str(char *str)
{
	int		ln;
	int		i;
	char	ctemp;
	char	*temp;

	temp = ft_strdup(str);
	ln = ft_strlen(temp);
	i = 0;
	while(i != ln/2)
	{
		ctemp = temp[ln - 1 - i];
		temp[ln - 1 - i] = temp[i];
		temp[i] = ctemp;
		i++;
	}

	return (temp);
}

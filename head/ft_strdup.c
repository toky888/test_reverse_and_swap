/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmory <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 13:44:44 by tmory             #+#    #+#             */
/*   Updated: 2024/07/15 13:44:49 by tmory            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testlib.h"

char	*ft_strdup(const char *s)
{
	int		ln;
	char	*str;

	ln = ft_strlen((char *)s);
	str = malloc(sizeof(char) * (ln + 1));
	if (!str)
		return (NULL);
	str[ln] = '\0';
	while(ln != 0)
	{
		str[ln - 1] = s[ln - 1];
		ln--;
	}
	return (str);
}

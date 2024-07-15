/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmory <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 09:23:09 by tmory             #+#    #+#             */
/*   Updated: 2024/07/15 09:25:56 by tmory            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "head/testlib.h"
#include <string.h>

int	main()
{
	char 	*text;
	char	*test;
	text = "dodo";
	test = ft_strdup(text);
	printf("%s len = %d \n%s len = %d\n", text, ft_strlen(text), test, ft_strlen(test));

	char *str;
	char *dup;
	char *dup2;

	str = "hi";
	printf("%d\n", ft_strlen(str));
	printf("%s$ @original adress  %p\n", str, str);
	dup = strdup(str);
	printf("%s$ @strdup adress    %p\n", dup, dup);
	free(dup);
	dup2 = ft_strdup(str);
	printf("%s$ @ft_strdup adress %p\n", dup2, dup2);
	free(dup2);
	free(test);
	return(0);
}

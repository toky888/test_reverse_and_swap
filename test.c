/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmory <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 08:20:41 by tmory             #+#    #+#             */
/*   Updated: 2024/07/15 08:20:50 by tmory            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./head/testlib.h"

int	main()
{
	int x;
	int y;
	char *text_1;
	char *text_2;

	x = 3;
	y = 8;
	text_1 = "first";
	text_2 = "second";
	printf("first : %d and %d\n", x, y);
	swap(&x, &y);
	printf("second : %d and %d\n", x, y);
	printf("first text : %s and %s\n", text_1, text_2);
	swap_str(&text_1, &text_2);
	printf("second text : %s and %s\n", text_1, text_2);
	text_1 = reverse_str(text_1);
	text_2 = reverse_str(text_2);
	printf("reverse-swaped text : %s and %s\n", text_1, text_2);
	return(0);
}



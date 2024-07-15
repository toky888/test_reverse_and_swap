/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testlib.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmory <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 09:28:59 by tmory             #+#    #+#             */
/*   Updated: 2024/07/15 09:29:04 by tmory            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TESTLIB_H
# define TESTLIB_H
# include <stdio.h>
# include <stdlib.h>

int		ft_strlen(const char *str);
char	*ft_strdup(const char *s);
void	swap(int *a, int *b);
void	swap_str(char **a, char **b);
char	*reverse_str(char *str);

#endif

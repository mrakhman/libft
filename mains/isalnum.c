/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalnum.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrakhman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/29 20:36:20 by mrakhman          #+#    #+#             */
/*   Updated: 2017/11/29 20:37:51 by mrakhman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int	main(void)
{
	int	a;
	int	b;
	int	c;

	a = 127;
	b = 76;
	c = 177;
	printf("%d, %d, %d\n", ft_isalnum(a), ft_isalnum(b), ft_isalnum(c));
	printf("%d, %d, %d\n", isalnum(a), isalnum(b), isalnum(c));
	return (0);
}

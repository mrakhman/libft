/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isascii.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrakhman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/29 19:47:27 by mrakhman          #+#    #+#             */
/*   Updated: 2017/11/29 19:57:17 by mrakhman         ###   ########.fr       */
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

	a = 0;
	b = 76;
	c = 239;
	printf("%d, %d, %d\n", isascii(a), isascii(b), isascii(c));
	printf("%d, %d, %d\n", ft_isascii(a), ft_isascii(b), ft_isascii(c));
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isprint.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrakhman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/29 21:18:31 by mrakhman          #+#    #+#             */
/*   Updated: 2017/11/29 21:27:30 by mrakhman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int	main(void)
{
	int a;
	int b;
	int c;

	a = 23;
	b = 32;
	c = 126;
	printf("%d, %d, %d\n", ft_isprint(a), ft_isprint(b), ft_isprint(c));
	printf("%d, %d, %d\n", isprint(a), isprint(b), isprint(c));
	return (0);
}

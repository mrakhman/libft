/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tolower.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrakhman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/29 22:04:30 by mrakhman          #+#    #+#             */
/*   Updated: 2017/11/29 22:06:05 by mrakhman         ###   ########.fr       */
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

	a = 'A';
	b = '~';
	c = 69;
	printf("%d, %d, %d\n", ft_tolower(a), ft_tolower(b), ft_tolower(c));
	printf("%d, %d, %d\n", tolower(a), tolower(b), tolower(c));
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   toupper.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrakhman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/29 21:45:21 by mrakhman          #+#    #+#             */
/*   Updated: 2017/11/29 21:58:16 by mrakhman         ###   ########.fr       */
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

	a = 'a';
	b = '~';
	c = 100;
	printf("%d, %d, %d\n", ft_toupper(a), ft_toupper(b), ft_toupper(c));
	printf("%d, %d, %d\n", toupper(a), toupper(b), toupper(c));
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isdigit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrakhman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/29 20:05:40 by mrakhman          #+#    #+#             */
/*   Updated: 2017/11/29 20:13:26 by mrakhman         ###   ########.fr       */
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

	a = 48;
	b = 123;
	c = 57;
	printf("%d, %d, %d\n", ft_isdigit(a), ft_isdigit(b), ft_isdigit(c));
	printf("%d, %d, %d\n", isdigit(a), isdigit(b), isdigit(c));
	return (0);
}

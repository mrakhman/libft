/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalpha.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrakhman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 19:07:57 by mrakhman          #+#    #+#             */
/*   Updated: 2017/11/29 18:20:38 by mrakhman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int	main(void)
{
	char	a;
	char	b;
	char	c;

	a = 'a';
	b = 'O';
	c = '9';
	printf("%d, %d, %d\n", ft_isalpha(a), ft_isalpha(b), ft_isalpha(c));
	printf("%d, %d, %d\n", isalpha(a), isalpha(b), isalpha(c));
	return (0);
}

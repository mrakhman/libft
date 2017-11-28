/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalpha.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrakhman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 19:07:57 by mrakhman          #+#    #+#             */
/*   Updated: 2017/11/28 19:21:21 by mrakhman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int	main(void)
{
	char	*str1;
	char	*str2;

	str1 = "Hello is it number 10?";
	str2 = "IcantThinkOfGettingOld";
	printf("%d, %d\n", ft_isalpha(str1), ft_isalpha(str2));
	printf("%d, %d\n", isalpha(str1), isalpha(str2));
	return (0);
}

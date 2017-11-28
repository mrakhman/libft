/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrakhman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 17:16:41 by mrakhman          #+#    #+#             */
/*   Updated: 2017/11/28 20:33:36 by mrakhman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	main(void)
{
	char	str1[] = "1234i56789";
	char	str2[] = "1234j56789";
	char	str3[] = "1234i56789";

	printf("%d\n", ft_strcmp(str1, str2));
	printf("%d\n\n", strcmp(str1, str2));
	printf("%d\n", ft_strcmp(str2, str1));
	printf("%d\n\n", strcmp(str2, str1));
	printf("%d\n", ft_strcmp(str1, str3));
	printf("%d\n", strcmp(str1, str3));
	return (0);
}

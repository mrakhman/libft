/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncmp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrakhman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 17:51:42 by mrakhman          #+#    #+#             */
/*   Updated: 2017/11/28 20:58:40 by mrakhman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	main(void)
{
	char	str1[] = "12345i78";
	char	str2[] = "12345j912";
	printf("%d\n", ft_strncmp(str1, str2, 6));
	printf("%d\n\n", strncmp(str1, str2, 6));
	printf("%d\n", ft_strncmp(str1, str2, 5));
	printf("%d\n", strncmp(str1, str2, 5));
	return (0);
}

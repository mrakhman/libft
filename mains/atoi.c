/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrakhman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 15:44:30 by mrakhman          #+#    #+#             */
/*   Updated: 2017/11/28 20:51:15 by mrakhman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	main(void)
{
	char	str1[] = "\n\t-9097";
	char	str2[] = "hello1";
	printf("%d\n", ft_atoi(str1));
	printf("%d\n\n", atoi(str1));
	printf("%d\n", ft_atoi(str2));
	printf("%d\n", atoi(str2));
	return (0);
}

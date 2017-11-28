/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrakhman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 17:02:40 by mrakhman          #+#    #+#             */
/*   Updated: 2017/11/28 20:22:43 by mrakhman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	main(void)
{
	char	to_find[] = "big";
	char	wrong[] = "Hello";
	char	str[] = "I want big sun in the sky";
	printf("%s\n", ft_strstr(str, to_find));
	printf("%s\n\n", strstr(str, to_find));
	printf("%s\n", ft_strstr(str, wrong));
	printf("%s\n", strstr(str, wrong));
	return (0);
}

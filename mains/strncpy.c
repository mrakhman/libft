/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrakhman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 16:51:21 by mrakhman          #+#    #+#             */
/*   Updated: 2017/11/28 20:24:57 by mrakhman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	main(void)
{
	char	src[] = "12345";
	char	dest[] = "This is destination";
	printf("%s\n", ft_strncpy(dest, src, 5));
	printf("%s\n\n", strncpy(dest, src, 5));
	printf("%s\n", ft_strncpy(src, dest, 5));
	printf("%s\n", strncpy(src, dest, 5));
	return (0);
}

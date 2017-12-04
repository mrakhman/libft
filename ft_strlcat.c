/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrakhman <mrakhman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/04 15:23:49 by mrakhman          #+#    #+#             */
/*   Updated: 2017/12/04 17:04:29 by mrakhman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while ((((char *)dst)[i] != '\0') && (i < size))
	{
		i++;
		if (((char *)dst)[i] == '\0' || i == size)
		{
			while ((((char *)src)[j] != '\0'))
			{
				((char *)dst)[size + j] = ((char *)src)[j];
				j++;
			}
		}
	}
	((char *)dst)[size + j] = '\0';
	return (i + j);
}

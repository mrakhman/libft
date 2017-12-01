/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrakhman <mrakhman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 17:08:58 by mrakhman          #+#    #+#             */
/*   Updated: 2017/12/01 17:39:29 by mrakhman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *restrict dst, \
	const void *restrict src, int c, size_t n)
{
	size_t	i;

	i = 0;
	while ((i < n) && (((char *)src)[i] != ((unsigned char)c)))
	{
		((char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
		if (((char *)src)[i] == ((unsigned char)c))
		{
			((char *)dst)[i] = ((unsigned char)c);
		}
	}
	return ((char *)dst);
}

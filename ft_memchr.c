/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrakhman <mrakhman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/02 19:01:58 by mrakhman          #+#    #+#             */
/*   Updated: 2017/12/02 19:33:43 by mrakhman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (((char *)s)[i] && (i < n) && (((char *)s)[i] != ((unsigned char)c)))
	{
		i++;
		if (((char *)s)[i] == (unsigned char)c)
		{
			return (&((char *)s)[i]);
		}
	}
	return (NULL);
}

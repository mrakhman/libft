/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrakhman <mrakhman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/02 19:34:54 by mrakhman          #+#    #+#             */
/*   Updated: 2017/12/02 19:58:09 by mrakhman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((((char *)s1)[i] == ((char *)s2)[i]) && (i < n))
	{
		if (s1 == '\0')
			return (0);
		i++;
	}
	if ((((char *)s1)[i] != ((char *)s2)[i]) && (i < n))
		return (((char *)s1)[i] - ((char *)s2)[i]);
	return (0);
}

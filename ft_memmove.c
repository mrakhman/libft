/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrakhman <mrakhman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/02 17:18:35 by mrakhman          #+#    #+#             */
/*   Updated: 2017/12/02 18:47:54 by mrakhman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	while (((char *)src)[i] && (i < len))
	{
		((char *)dst)[i] = ((char *)src)[i];
		i++;
	}
	while (i < len)
	{
		((char *)dst)[i] = '\0';
		i++;
	}
	return (dst);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrakhman <mrakhman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/02 20:55:04 by mrakhman          #+#    #+#             */
/*   Updated: 2017/12/02 21:30:49 by mrakhman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *restrict s1, const char *restrict s2, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (((char *)s1)[i] != '\0')
	{
		i++;
		if (((char *)s1)[i] == '\0')
		{
			while ((((char *)s2)[j] != '\0') && (j < n))
			{
				((char *)s1)[i + j] = ((char *)s2)[j];
				j++;
			}
		}
	}
	((char *)s1)[i + j] = '\0';
	return (s1);
}

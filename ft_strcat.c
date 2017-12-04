/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrakhman <mrakhman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/02 20:17:30 by mrakhman          #+#    #+#             */
/*   Updated: 2017/12/02 20:51:38 by mrakhman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *restrict s1, const char *restrict s2)
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
			while (((char *)s2)[j] != '\0')
			{
				((char *)s1)[i + j] = ((char *)s2)[j];
				j++;
			}
		}
	}
	((char *)s1)[i + j] = '\0';
	return (s1);
}
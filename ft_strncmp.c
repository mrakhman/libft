/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrakhman <mrakhman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 17:47:26 by mrakhman          #+#    #+#             */
/*   Updated: 2017/11/30 21:00:22 by mrakhman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	while (*s1 == *s2 && i < n)
	{
		if (*s1 == '\0')
			return (0);
		s1++;
		s2++;
		i++;
	}
	if (*s1 != *s2 && i < n)
		return (*s1 - *s2);
	return (0);
}

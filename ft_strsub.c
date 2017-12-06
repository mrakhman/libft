/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrakhman <mrakhman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/06 15:28:59 by mrakhman          #+#    #+#             */
/*   Updated: 2017/12/06 18:29:23 by mrakhman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int	j;
	char			*tab;

	i = 0;
	j = 0;
	tab = (char *)malloc(len + 1);
	if (!tab)
		return (NULL);
	if (!s)
		return (NULL);
	while (s[i] != '\0' && i < start)
	{
		i++;
		if (i == start)
		{
			while (j < len)
				tab[j++] = s[i++];
		}
	}
	tab[j] = '\0';
	return (tab);
}

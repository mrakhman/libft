/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrakhman <mrakhman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/06 16:04:14 by mrakhman          #+#    #+#             */
/*   Updated: 2017/12/06 18:28:20 by mrakhman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*tab;
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	k = 0;
	tab = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!tab)
		return (NULL);
	while (s1[i] != '\0')
	{
		tab[k] = s1[i];
		k++;
		i++;
	}
	while (s2[j] != '\0')
	{
		tab[k] = s2[j];
		k++;
		j++;
	}
	tab[k] = '\0';
	return (tab);
}

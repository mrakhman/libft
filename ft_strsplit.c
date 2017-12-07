/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrakhman <mrakhman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/06 19:08:44 by mrakhman          #+#    #+#             */
/*   Updated: 2017/12/07 12:59:38 by mrakhman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	word_nb(char const *s, char c)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	if (s[0] != c)
		len++;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c)
			len++;
		i++;
	}
	return (len);
}

static size_t	word_len(char const *s, char c, int i)
{
	size_t	len_w;

	len_w = 0;
	while (s[i] && s[i] != c)
	{
		len_w++;
		i++;
	}
	return (len_w);
}

char			**ft_strsplit(char const *s, char c)
{
	size_t	k;
	size_t	i;
	size_t	j;
	char	**tab;

	k = 0;
	i = 0;
	tab = (char **)malloc(sizeof(char*) * word_nb(s, c) + 1);
	if (!tab)
		return (NULL);
	while (s[k])
	{
		while (s[k] && s[k] == c)
			k++;
		tab[i] = (char *)malloc(sizeof(char) * (word_len(s, c, k) + 1));
		if (!tab)
			return (NULL);
		j = 0;
		while (s[k] && s[k] != c)
			tab[i][j++] = s[k++];
		tab[i][j] = '\0';
		i++;
	}
	tab[i] = NULL;
	return (tab);
}

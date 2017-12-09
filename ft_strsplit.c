/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrakhman <mrakhman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/06 19:08:44 by mrakhman          #+#    #+#             */
/*   Updated: 2017/12/09 18:18:32 by mrakhman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#define IF_NOT(x) if (!(x)) return (0)

static size_t	word_nb(char const *s, char c)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	if (!s)
		return (0);
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
	if (!s)
		return (0);
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
	IF_NOT(s);
	IF_NOT(tab = (char **)malloc(sizeof(char*) * word_nb(s, c) + 1));
	while (s[k])
	{
		while (s[k] && s[k] == c)
			k++;
		if (!s[k])
			break ;
		IF_NOT((tab[i] = (char *)malloc(sizeof(char) *
			(word_len(s, c, k) + 1))));
		j = 0;
		while (s[k] && s[k] != c)
			tab[i][j++] = s[k++];
		tab[i][j] = '\0';
		i++;
	}
	tab[i] = NULL;
	return (tab);
}

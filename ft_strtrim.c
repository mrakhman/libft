/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrakhman <mrakhman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/06 16:34:49 by mrakhman          #+#    #+#             */
/*   Updated: 2017/12/06 18:27:42 by mrakhman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	tab_start_char(char const *s)
{
	size_t	i;
	size_t	start;

	i = 0;
	while (*s && (s[i] == '\t' || s[i] == '\n' || s[i] == ' '))
	{
		i++;
		if (s[i] != '\t' && s[i] != '\n' && s[i] != ' ')
			start = i;
	}
	return (start);
}

static size_t	tab_end_char(char const *s)
{
	size_t	i;
	size_t	end;

	i = strlen(s) - 1;
	while ((i > 0) && (s[i] == '\t' || s[i] == '\n' || s[i] == ' '))
	{
		i--;
		if (s[i] != '\t' && s[i] != '\n' && s[i] != ' ')
			end = 1 + i;
	}
	return (end);
}

char			*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	j;
	char	*tab;
	size_t	start;
	size_t	end;

	j = 0;
	start = tab_start_char(s);
	end = tab_end_char(s);
	tab = (char *)malloc(end - start + 2);
	if (!tab)
		return (NULL);
	i = start;
	while (i < end)
		tab[j++] = s[i++];
	tab[j] = '\0';
	return (tab);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrakhman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 16:53:51 by mrakhman          #+#    #+#             */
/*   Updated: 2017/11/30 20:16:29 by mrakhman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(const char *haystack, const char *needle)
{
	int	j;
	int	i;
	int	k;

	i = 0;
	j = 0;
	while (haystack[i] != '\0')
	{
		k = i;
		while (needle[j] != '\0' && haystack[k] == needle[j])
		{
			if (needle[j + 1] == '\0')
				return ((char *)&haystack[i]);
			j++;
			k++;
		}
		j = 0;
		i++;
	}
	return (0);
}

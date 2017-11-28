/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrakhman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 16:53:51 by mrakhman          #+#    #+#             */
/*   Updated: 2017/11/28 20:16:46 by mrakhman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	j;
	int	i;
	int	k;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		k = i;
		while (to_find[j] != '\0' && str[k] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
				return (&str[i]);
			j++;
			k++;
		}
		j = 0;
		i++;
	}
	return (0);
}
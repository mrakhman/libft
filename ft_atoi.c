/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrakhman <mrakhman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 15:38:00 by mrakhman          #+#    #+#             */
/*   Updated: 2017/12/08 22:45:56 by mrakhman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int		 	i;
	int 		negat;
	long long 	nb;

	i = 0;
	negat = 1;
	nb = 0;
	while ((str[i] >= 9 && str[i] <= 19) || str[i] == 32)
		i++;
	if (str[i] == '+')
		i++;
	if (str[i] == '-')
	{
		negat = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9' && (nb < 2147483648 ||
				(nb <= 2147483648 && negat == -1)))
	{
		nb = (nb * 10) + (str[i] - '0');
		i++;
	}
	nb *= negat;
	if (nb < -2147483648)
		return (0);
	if (nb > 2147483647)
		return (-1);
	return (nb);
}

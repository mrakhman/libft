/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrakhman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 16:13:41 by mrakhman          #+#    #+#             */
/*   Updated: 2017/11/28 20:28:56 by mrakhman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	main(void)
{
	char	src[] = "Copy me";
	char	dest[] = "This is destination str";
	printf("%s\n", ft_strcpy(dest, src));
	printf("%s\n", strcpy(dest, src));
	return (0);
}

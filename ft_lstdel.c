/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrakhman <mrakhman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/11 19:01:03 by mrakhman          #+#    #+#             */
/*   Updated: 2017/12/11 19:49:31 by mrakhman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void(*del)(void*, size_t))
{
	if (!alst)
		return ;
	del((*alst)->content, (*alst)->content_size);
	del((*alst)->next->content, (*alst)->next->content_size);
	free(*alst);
	free((*alst)->next);
	*alst = NULL;
}

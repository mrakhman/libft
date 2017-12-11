/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrakhman <mrakhman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 19:24:36 by mrakhman          #+#    #+#             */
/*   Updated: 2017/12/11 19:49:34 by mrakhman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <strings.h>
#include "libft.h"

static void *del(void *content, size_t content_size)
{
	t_list *tmp;

	ft_memdel(tmp->content);
	tmp->content_size = 0;
	return (tmp);
}


int	main(void)
{
/*
printf("\n\n\x1B[33m%s\x1B[37m\n", "-[ft_lstnew]-");
	t_list *student;

	student = ft_lstnew("Paul", sizeof("Paul"));
	printf("\x1B[32mContent:\x1B[37m %s\t \x1B[32mContent_size:\x1B[37m %lu\n", student->content, student->content_size);

*/
printf("\n\n\x1B[33m%s\x1B[37m\n", "-[ft_lstdel]-");
	t_list *student;
	t_list **ptr;
	ptr = &student;

	student = ft_lstnew("Paul", sizeof("Paul"));
	ft_lstdelone(ptr, del(student->content, student->content_size));
	printf("\x1B[32mContent:\x1B[37m %s\t \x1B[32mContent_size:\x1B[37m %lu\n", student->content, student->content_size);

/*
printf("\n\n\x1B[33m%s\x1B[37m\n", "-[ft_strdel]-");
	char	s[] = "Hello, I'm a string";
	printf("\x1B[32mString:\x1B[37m %s\n", s);
	ft_strclr(s);
	printf("\x1B[32mStrings are equal:\x1B[37m %d\n", ft_memcmp(s, "\0\0\0", 4));


printf("\n\n\x1B[33m%s\x1B[37m\n", "-[ft_striter]-");	
	char ss[] = "012345";
	printf("\x1B[32mOriginal string:\x1B[37m %s\n", ss);
	printf("\x1B[32mFunction = ascii char + 1:\x1B[37m %s\n", " *c = *c + 1");
	printf("\x1B[32mString to compare:\x1B[37m %s\n", "123456");
	ft_striter(ss, test_ft_striter);
	printf("\x1B[32mStrings are equal:\x1B[37m %d\n", ft_strcmp(ss, "123456"));
*/

	return (0);
}

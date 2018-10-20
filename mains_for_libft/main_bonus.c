/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrakhman <mrakhman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 19:24:36 by mrakhman          #+#    #+#             */
/*   Updated: 2017/12/13 19:27:59 by mrakhman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <strings.h>
#include "libft.h"

static void del(void *content, size_t content_size)
{
	content = NULL;
	content_size = 0;
}

static void test_ft_lstiter(t_list *elem)
{
	elem->content = "HELLO";
	elem->content_size = sizeof("HELLO");
}

int	main(void)
{
/*
printf("\n\n\x1B[33m%s\x1B[37m\n", "-[ft_lstnew]-");
	t_list *student;

	student = ft_lstnew("Paul", sizeof("Paul"));
	printf("\x1B[32mContent:\x1B[37m %s\t \x1B[32mContent_size:\x1B[37m %lu\n", student->content, student->content_size);

*/

printf("\n\n\x1B[33m%s\x1B[37m\n", "-[ft_lstdelone]-");
	t_list *student;
	t_list **ptr;
	ptr = &student;

	student = ft_lstnew("Paul", sizeof("Paul"));
	printf("\x1B[32mAddress:\x1B[37m %p\t \x1B[32mContent:\x1B[37m %s\t \x1B[32mContent_size:\x1B[37m %lu\n", student, student->content, student->content_size);
	
	ft_lstdelone(ptr, &del);
	printf("\x1B[32mStudent address is deleted:\x1B[37m %p\n", student);


printf("\n\n\x1B[33m%s\x1B[37m\n", "-[ft_lstdel]-");
	t_list *student1;
	t_list *student2;
	//t_list **ptr1;

	//ptr1 = &student1;
	student1 = ft_lstnew("Patrick", sizeof("Patrick"));
	student2 = ft_lstnew("Garry", sizeof("Garry"));
	student1->next = student2;
	printf("\x1B[32mStudent[1] Address:\x1B[37m %p\t \x1B[32mContent:\x1B[37m %s\t \x1B[32mContent_size:\x1B[37m %lu\n", student1, student1->content, student1->content_size);
	printf("\x1B[32mStudent[2] Address:\x1B[37m %p\t \x1B[32mContent:\x1B[37m %s\t\t \x1B[32mContent_size:\x1B[37m %lu\n\n", student2, student2->content, student2->content_size);

	ft_lstdel(&student1, &del);
	printf("\x1B[32mStudent[1] address is deleted:\x1B[37m %p\n", student1);


printf("\n\n\x1B[33m%s\x1B[37m\n", "-[ft_lstadd]-");
	t_list *student_1;
	t_list *student_new;
	student_1 = ft_lstnew("Patrick", sizeof("Patrick"));
	student_new = ft_lstnew("Garry", sizeof("Garry"));
	ft_lstadd(&student_1, student_new);
	//printf("\x1B[32mStudent_new:\x1B[37m %p\t \x1B[32mStudent_1:\x1B[37m %p\n", student_new, student_new->next);
	printf("\x1B[32mStudent_new Address:\x1B[37m \t%p\t \x1B[32mContent:\x1B[37m %s\t\t \x1B[32mContent_size:\x1B[37m %lu\n", student_new, student_new->content, student_new->content_size);
	printf("\x1B[32mStudent_1 Address:\x1B[37m \t%p\t \x1B[32mContent:\x1B[37m %s\t \x1B[32mContent_size:\x1B[37m %lu\n\n", student_new->next, student_new->next->content, student_new->next->content_size);


printf("\n\n\x1B[33m%s\x1B[37m\n", "-[ft_lstiter]-");
	t_list *first;
	t_list *second;
	t_list *third;

	first = ft_lstnew("first", sizeof("first"));
	second = ft_lstnew("second", sizeof("second"));
	third = ft_lstnew("third", sizeof("third"));
	first->next = second;
	second->next = third;
	ft_lstiter(first, &test_ft_lstiter);
	printf("\x1B[32mFirst Address:\x1B[37m \t%p\t \x1B[32mContent:\x1B[37m %s\t\t \x1B[32mContent_size:\x1B[37m %lu\n", first, first->content, first->content_size);
	printf("\x1B[32mSecond Address:\x1B[37m %p\t \x1B[32mContent:\x1B[37m %s\t\t \x1B[32mContent_size:\x1B[37m %lu\n", first->next, first->next->content, first->next->content_size);
	printf("\x1B[32mThird Address:\x1B[37m \t%p\t \x1B[32mContent:\x1B[37m %s\t\t \x1B[32mContent_size:\x1B[37m %lu\n", first->next->next, first->next->next->content, first->next->next->content_size);


//printf("\n\n\x1B[33m%s\x1B[37m\n", "-[ft_lstmap]-");


	return (0);
}

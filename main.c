/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrakhman <mrakhman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 19:24:36 by mrakhman          #+#    #+#             */
/*   Updated: 2017/12/01 17:46:49 by mrakhman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <strings.h>
#include "libft.h"

int	main(void)
{

/*
printf("\n%s\n", "-[strlen]-");

	char	*s;
	s = "123456789";
	printf("%lu\n", ft_strlen(s));
	printf("%lu\n", strlen(s));


printf("\n%s\n", "-[atoi]-");

	char	str1[] = "\n\t-9097";
	char	str2[] = "hello1";
	printf("%d\n", ft_atoi(str1));
	printf("%d\n\n", atoi(str1));
	printf("%d\n", ft_atoi(str2));
	printf("%d\n",	atoi(str2));

	
printf("\n%s\n", "-[strcpy]-");
	char	source[] = "Copy me";
	char	dest[] = "This is destination str";
	printf("%s\n", ft_strcpy(dest, source));
	printf("%s\n", strcpy(dest, source));

	
printf("\n%s\n", "-[strncpy]-");
	char	src[] = "12345";
	char	dst[] = "This is destination";
	printf("%s\n", ft_strncpy(dst, src, 5));
	printf("%s\n\n", strncpy(dst, src, 5));
	printf("%s\n", ft_strncpy(src, dst, 5));
	printf("%s\n", strncpy(src, dst, 5));


printf("\n%s\n", "-[strstr]-");
	char	to_find[] = "big";
	char	wrong[] = "Hello";
	char	str[] = "I want big sun in the sky";
	printf("%s\n", ft_strstr(str, to_find));
	printf("%s\n\n", strstr(str, to_find));
	printf("%s\n", ft_strstr(str, wrong));
	printf("%s\n", strstr(str, wrong));

	
printf("\n%s\n", "-[strcmp]-");
	char	str_a[] = "1234i56789";
	char	str_b[] = "1234j56789";
	char	str_c[] = "1234i56789";

	printf("%d\n", ft_strcmp(str_a, str_b));
	printf("%d\n\n", strcmp(str_a, str_b));
	printf("%d\n", ft_strcmp(str_b, str_a));
	printf("%d\n\n", strcmp(str_b, str_a));
	printf("%d\n", ft_strcmp(str_a, str_c));
	printf("%d\n", strcmp(str_a, str_c));


printf("\n%s\n", "-[strncmp]-");
	char	s1[] = "12345i78";
	char	s2[] = "12345j912";
	printf("%d\n", ft_strncmp(s1, s2, 6));
	printf("%d\n\n", strncmp(s1, s2, 6));
	printf("%d\n", ft_strncmp(s1, s2, 5));
	printf("%d\n", strncmp(s1, s2, 5));


printf("\n%s\n", "-[isalpha]-");
	char	a;
	char	b;
	char	c;

	a = 'a';
	b = 'O';
	c = '9';
	printf("%d, %d, %d\n", ft_isalpha(a), ft_isalpha(b), ft_isalpha(c));
	printf("%d, %d, %d\n", isalpha(a), isalpha(b), isalpha(c));


printf("\n%s\n", "-[strdup]-");
	char	srce[] = "Source string";
	printf("%s\n", ft_strdup(srce));
	printf("%s\n", strdup(srce));

	
printf("\n%s\n", "-[isascii]-");
	int	d;
	int	e;
	int	f;

	d = 127;
	e = 76;
	f = 177;
	printf("%d, %d, %d\n", ft_isascii(d), ft_isascii(e), ft_isascii(f));
	printf("%d, %d, %d\n", isascii(d), isascii(e), isascii(f));

	
printf("\n%s\n", "-[isdigit]-");
	int g;
	int h;
	int i;

	g = 48;
	h = 123;
	i = 57;
	printf("%d, %d, %d\n", ft_isdigit(g), ft_isdigit(h), ft_isdigit(i));
	printf("%d, %d, %d\n", isdigit(g), isdigit(h), isdigit(i));

	
printf("\n%s\n", "-[isalnum]-");
	int	a1;
	int	b1;
	int	c1;

	a1 = 127;
	b1 = 76;
	c1 = 177;
	printf("%d, %d, %d\n", ft_isalnum(a1), ft_isalnum(b1), ft_isalnum(c1));
	printf("%d, %d, %d\n", isalnum(a1), isalnum(b1), isalnum(c1));

	
printf("\n%s\n", "-[isprint]-");
	a = 23;
	b = 32;
	c = 126;
	printf("%d, %d, %d\n", ft_isprint(a), ft_isprint(b), ft_isprint(c));
	printf("%d, %d, %d\n", isprint(a), isprint(b), isprint(c));

	
printf("\n%s\n", "-[toupper]-");
	a = 'a';
	b = '~';
	c = 100;
	printf("%d, %d, %d\n", ft_toupper(a), ft_toupper(b), ft_toupper(c));
	printf("%d, %d, %d\n", toupper(a), toupper(b), toupper(c));

	
printf("\n%s\n", "-[tolower]-");
	a = 'A';
	b = '~';
	c = 69;
	printf("%d, %d, %d\n", ft_tolower(a), ft_tolower(b), ft_tolower(c));
	printf("%d, %d, %d\n", tolower(a), tolower(b), tolower(c));



printf("\n%s\n", "-[strnstr]-");
	char	find[] = "big";
	char	absent[] = "Hello";
	char	st[] = "I want big sun in the sky";
	int		l = 8;
	printf("%s\n", ft_strnstr(st, find, l));
	printf("%s\n\n", strnstr(st, find, l));
	printf("%s\n", ft_strnstr(st, absent, l));
	printf("%s\n", strnstr(st, absent, l));


printf("\n%s\n", "-[memset]-");
	int len_bytes = 8;
	char try[8];
	int try2[8];
	printf("%s\n", ft_memset(try, 'u', len_bytes));
	printf("%s\n\n", ft_memset(try2, 2, len_bytes));
	printf("%s\n", memset(try, 'u', len_bytes));
	printf("%s\n", memset(try2, 2, len_bytes));


printf("\n%s\n", "-[bzero]-");
	char *try0;
	char *try1;

	try0 = malloc(20*sizeof(char));
	try1 = malloc(20*sizeof(char));
	strcpy(try0, "Hello people");
	bzero(try0, 2);
	strcpy(try1, "Hello people");
	ft_bzero(try1, 2);
	printf("%s\n", try0+2);
	printf("%s\n", try1+2);


printf("\n%s\n", "-[memcpy]-");	
	int size = 20;
	char from[size];
	char to[size];
	char from1[size];
	char to1[size];

	strcpy(from, "hello people");
	strcpy(from1, "hello people");
	ft_memcpy(to, from, 7);
	memcpy(to1, from1, 7);
	printf("%s\n", to);
	printf("%s\n", to1);


printf("\n%s\n", "-[memccpy]-");
	int size2 = 20;
	char from2[size2];
	char to2[size2];
	char from3[size2];
	char to3[size2];

	strcpy(from2, "Hello people");
	strcpy(from3, "Hello people");
	ft_memccpy(to2, from2, 'o', 7);
	memccpy(to3, from3, 'o', 7);
	printf("%s\n", to2);
	printf("%s\n", to3);

*/

printf("\n%s\n", "-[]-");



/*
printf("\n%s\n", "-[]-");		
*/	
	return (0);
}

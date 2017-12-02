/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrakhman <mrakhman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 19:24:36 by mrakhman          #+#    #+#             */
/*   Updated: 2017/12/02 21:52:33 by mrakhman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <strings.h>
#include "libft.h"

int	main(void)
{


printf("\n%s\n", "-[strlen]-");

	char	*s;
	s = "123456789";
	printf("\x1B[32mlibft >>>\x1B[37m %lu\n", ft_strlen(s));
	printf("\x1B[32mlibc >>>\x1B[37m %lu\n", strlen(s));


printf("\n%s\n", "-[atoi]-");

	char	str1[] = "\n\t-9097";
	char	str2[] = "hello1";
	printf("\x1B[32mlibft >>>\x1B[37m %d\n", ft_atoi(str1));
	printf("\x1B[32mlibc >>>\x1B[37m %d\n\n", atoi(str1));
	printf("\x1B[32mlibft >>>\x1B[37m %d\n", ft_atoi(str2));
	printf("\x1B[32mlibc >>>\x1B[37m %d\n",	atoi(str2));

	
printf("\n%s\n", "-[strcpy]-");
	char	source[] = "Copy me";
	char	dest[] = "This is destination str";
	printf("\x1B[32mlibft >>>\x1B[37m %s\n", ft_strcpy(dest, source));
	printf("\x1B[32mlibc >>>\x1B[37m %s\n", strcpy(dest, source));

	
printf("\n%s\n", "-[strncpy]-");
	char	src[] = "12345";
	char	dst[] = "This is destination";
	printf("\x1B[32mlibft >>>\x1B[37m %s\n", ft_strncpy(dst, src, 5));
	printf("\x1B[32mlibc >>>\x1B[37m %s\n\n", strncpy(dst, src, 5));
	printf("\x1B[32mlibft >>>\x1B[37m %s\n", ft_strncpy(src, dst, 5));
	printf("\x1B[32mlibc >>>\x1B[37m %s\n", strncpy(src, dst, 5));


printf("\n%s\n", "-[strstr]-");
	char	to_find[] = "big";
	char	wrong[] = "Hello";
	char	str[] = "I want big sun in the sky";
	printf("\x1B[32mlibft >>>\x1B[37m %s\n", ft_strstr(str, to_find));
	printf("\x1B[32mlibc >>>\x1B[37m %s\n\n", strstr(str, to_find));
	printf("\x1B[32mlibft >>>\x1B[37m %s\n", ft_strstr(str, wrong));
	printf("\x1B[32mlibc >>>\x1B[37m %s\n", strstr(str, wrong));

	
printf("\n%s\n", "-[strcmp]-");
	char	str_a[] = "1234i56789";
	char	str_b[] = "1234j56789";
	char	str_c[] = "1234i56789";

	printf("\x1B[32mlibft >>>\x1B[37m %d\n", ft_strcmp(str_a, str_b));
	printf("\x1B[32mlibc >>>\x1B[37m %d\n\n", strcmp(str_a, str_b));
	printf("\x1B[32mlibft >>>\x1B[37m %d\n", ft_strcmp(str_b, str_a));
	printf("\x1B[32mlibc >>>\x1B[37m %d\n\n", strcmp(str_b, str_a));
	printf("\x1B[32mlibft >>>\x1B[37m %d\n", ft_strcmp(str_a, str_c));
	printf("\x1B[32mlibc >>>\x1B[37m %d\n", strcmp(str_a, str_c));


printf("\n%s\n", "-[strncmp]-");
	char	s1[] = "12345i78";
	char	s2[] = "12345j912";
	printf("\x1B[32mlibft >>>\x1B[37m %d\n", ft_strncmp(s1, s2, 6));
	printf("\x1B[32mlibc >>>\x1B[37m %d\n\n", strncmp(s1, s2, 6));
	printf("\x1B[32mlibft >>>\x1B[37m %d\n", ft_strncmp(s1, s2, 5));
	printf("\x1B[32mlibc >>>\x1B[37m %d\n", strncmp(s1, s2, 5));


printf("\n%s\n", "-[isalpha]-");
	char	a;
	char	b;
	char	c;

	a = 'a';
	b = 'O';
	c = '9';
	printf("\x1B[32mlibft >>>\x1B[37m %d, %d, %d\n", ft_isalpha(a), ft_isalpha(b), ft_isalpha(c));
	printf("\x1B[32mlibc >>>\x1B[37m %d, %d, %d\n", isalpha(a), isalpha(b), isalpha(c));


printf("\n%s\n", "-[strdup]-");
	char	srce[] = "Source string";
	printf("\x1B[32mlibft >>>\x1B[37m %s\n", ft_strdup(srce));
	printf("\x1B[32mlibc >>>\x1B[37m %s\n", strdup(srce));

	
printf("\n%s\n", "-[isascii]-");
	int	d;
	int	e;
	int	f;

	d = 127;
	e = 76;
	f = 177;
	printf("\x1B[32mlibft >>>\x1B[37m%d, %d, %d\n", ft_isascii(d), ft_isascii(e), ft_isascii(f));
	printf("\x1B[32mlibc >>>\x1B[37m%d, %d, %d\n", isascii(d), isascii(e), isascii(f));

	
printf("\n%s\n", "-[isdigit]-");
	int g;
	int h;
	int i;

	g = 48;
	h = 123;
	i = 57;
	printf("\x1B[32mlibft >>>\x1B[37m %d, %d, %d\n", ft_isdigit(g), ft_isdigit(h), ft_isdigit(i));
	printf("\x1B[32mlibc >>>\x1B[37m %d, %d, %d\n", isdigit(g), isdigit(h), isdigit(i));

	
printf("\n%s\n", "-[isalnum]-");
	int	a1;
	int	b1;
	int	c1;

	a1 = 127;
	b1 = 76;
	c1 = 177;
	printf("\x1B[32mlibft >>>\x1B[37m %d, %d, %d\n", ft_isalnum(a1), ft_isalnum(b1), ft_isalnum(c1));
	printf("\x1B[32mlibc >>>\x1B[37m %d, %d, %d\n", isalnum(a1), isalnum(b1), isalnum(c1));

	
printf("\n%s\n", "-[isprint]-");
	a = 23;
	b = 32;
	c = 126;
	printf("\x1B[32mlibft >>>\x1B[37m %d, %d, %d\n", ft_isprint(a), ft_isprint(b), ft_isprint(c));
	printf("\x1B[32mlibc >>>\x1B[37m %d, %d, %d\n", isprint(a), isprint(b), isprint(c));

	
printf("\n%s\n", "-[toupper]-");
	a = 'a';
	b = '~';
	c = 100;
	printf("\x1B[32mlibft >>>\x1B[37m %d, %d, %d\n", ft_toupper(a), ft_toupper(b), ft_toupper(c));
	printf("\x1B[32mlibc >>>\x1B[37m %d, %d, %d\n", toupper(a), toupper(b), toupper(c));

	
printf("\n%s\n", "-[tolower]-");
	a = 'A';
	b = '~';
	c = 69;
	printf("\x1B[32mlibft >>>\x1B[37m %d, %d, %d\n", ft_tolower(a), ft_tolower(b), ft_tolower(c));
	printf("\x1B[32mlibc >>>\x1B[37m %d, %d, %d\n", tolower(a), tolower(b), tolower(c));



printf("\n%s\n", "-[strnstr]-");
	char	find[] = "big";
	char	absent[] = "Hello";
	char	st[] = "I want big sun in the sky";
	int		l = 8;
	printf("\x1B[32mlibft >>>\x1B[37m %s\n", ft_strnstr(st, find, l));
	printf("\x1B[32mlibc >>>\x1B[37m %s\n\n", strnstr(st, find, l));
	printf("\x1B[32mlibft >>>\x1B[37m %s\n", ft_strnstr(st, absent, l));
	printf("\x1B[32mlibc >>>\x1B[37m %s\n", strnstr(st, absent, l));


printf("\n%s\n", "-[memset]-");
	int len_bytes = 7;
	char try[8];
	char tryy[8];
	printf("\x1B[32mlibft >>>\x1B[37m %s\n", ft_memset(try, 'u', len_bytes));
	printf("\x1B[32mlibc >>>\x1B[37m %s\n", memset(tryy, 'u', len_bytes));



printf("\n%s\n", "-[bzero]-");
	char *try0;
	char *try1;

	try0 = malloc(20*sizeof(char));
	try1 = malloc(20*sizeof(char));
	strcpy(try0, "Hello people");
	strcpy(try1, "Hello people");
	ft_bzero(try1, 2);
	bzero(try0, 2);
	printf("\x1B[32mlibft >>>\x1B[37m %s\n", try1+2);
	printf("\x1B[32mlibc >>>\x1B[37m %s\n", try0+2);


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
	printf("\x1B[32mlibft >>>\x1B[37m %s\n", to);
	printf("\x1B[32mlibc >>>\x1B[37m %s\n", to1);


printf("\n%s\n", "-[memccpy]-");
	int size2 = 20;
	char from2[size2];
	char to2[size2];
	char from3[size2];
	char to3[size2];

	strcpy(from2, "Hello people");
	strcpy(from3, "Hello people");
	ft_memccpy(to2, from2, 'z', 15);
	memccpy(to3, from3, 'z', 15);
	printf("\x1B[32mlibft >>>\x1B[37m %s\n", to2);
	printf("\x1B[32mlibc >>>\x1B[37m %s\n", to3);


printf("\n%s\n", "-[memmove]-");
	int size3 = 20;
	char srcc[size3];
	char srcc_1[size3];
	char dstt[size3];
	char dstt_1[size3];
	strcpy(srcc, "Hello people");
	strcpy(srcc_1, "Hello people");
	strcpy(dstt, "wow wow wow wow");
	strcpy(dstt_1, "wow wow wow wow");
	printf("\x1B[32mlibft >>>\x1B[37m %s\n", ft_memmove(dstt, srcc, 7));
	printf("\x1B[32mlibc >>>\x1B[37m %s\n", memmove(dstt_1, srcc_1, 7));	


printf("\n%s\n", "-[memchr]-");		
	int size4 = 20;
	char ss[size4];
	strcpy(ss, "Hello people");
	printf("\x1B[32mlibft >>>\x1B[37m %s\n", ft_memchr(ss, 'p', 8));
	printf("\x1B[32mlibc >>>\x1B[37m %s\n", memchr(ss, 'p', 8));



printf("\n%s\n", "-[memcmp]-");
	int size5 = 20;
	char ss_1[size5];
	char ss_2[size5];
	strcpy(ss_1, "12345i789");
	strcpy(ss_2, "12345j789");
	printf("\x1B[32mlibft >>>\x1B[37m %d\n", ft_memcmp(ss_1, ss_2, 8));
	printf("\x1B[32mlibc >>>\x1B[37m %d\n", memcmp(ss_1, ss_2, 8));



printf("\n%s\n", "-[strcat]-");
	char string1[20] = "Hello, cold";
	char string2[] = " world";
	char string1_1[20] = "Hello, cold";
	char string2_1[] = " world";
	printf("\x1B[32mlibft >>>\x1B[37m %s\n", ft_strcat(string1_1, string2_1));
	printf("\x1B[32mlibc >>>\x1B[37m %s\n", strcat(string1, string2));
	


printf("\n%s\n", "-[strncat]-");
	char string_1[20] = "Hello, cold";
	char string_2[] = " world";
	char string1_2[20] = "Hello, cold";
	char string2_2[] = " world";
	printf("\x1B[32mlibft >>>\x1B[37m %s\n", ft_strncat(string1_2, string2_2, 3));
	printf("\x1B[32mlibc  >>>\x1B[37m %s\n", strncat(string_1, string_2, 3));
	



	return (0);
}

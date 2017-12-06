/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_add.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrakhman <mrakhman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 19:24:36 by mrakhman          #+#    #+#             */
/*   Updated: 2017/12/06 20:55:53 by mrakhman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <strings.h>
#include "libft.h"

/*
 * test function for ft_striter
 *
static void test_ft_striter(char *c)
{
	*c = *c + 1;
}

*
 * test function for ft_striteri
 *
static void	test_ft_striteri(unsigned int i, char *c)
{
	*c = *c + i;
}

*
 * test function for ft_strmap
 *

static char	test_ft_strmap(char c)
{
	return (c + 1);
}

*
 * test function for ft_strmapi
 *

static char	test_ft_strmapi(unsigned int i, char c)
{
	return (c + i);
}

 */



int	main(void)
{

/*
printf("\n\x1B[32m%s\x1B[37m\n", "-[ft_putchar]-");
	ft_putchar('p');


printf("\n\x1B[32m%s\x1B[37m\n", "-[ft_putstr]-");
	ft_putstr("Hello, everyone!");


printf("\n\x1B[32m%s\x1B[37m\n", "-[ft_putnbr]-");
	ft_putnbr(-120);


printf("\n\x1B[33m%s\x1B[37m\n", "-[ft_memalloc]-");
	printf("\x1B[32mAllocate:\x1B[37m %p\n", ft_memalloc(120));
	printf("\n\x1B[32mFail to allocate:\x1B[37m %p\n\n", ft_memalloc(-120));
	printf("\n\x1B[32mToo much to allocate:\x1B[37m %p\n", ft_memalloc(1200000000000000000));


printf("\n\x1B[33m%s\x1B[37m\n", "-[ft_memdel]-");
	void	*ap;
	ap = ft_memalloc(2000);
	printf("\x1B[32mAllocate:\x1B[37m %p\n", ap);
	ft_memdel(&ap);
	printf("\x1B[32mFree:\x1B[37m %p\n", (ap));


printf("\n\x1B[33m%s\x1B[37m\n", "-[ft_strnew]-");
	printf("\x1B[32mAllocate:\x1B[37m %p\n", ft_strnew(120));
	printf("\x1B[32mFail to allocate:\x1B[37m %p\n", ft_strnew(-120));


printf("\n\x1B[33m%s\x1B[37m\n", "-[ft_strdel]-");
	char	*as;
	as = ft_strnew(200);
	printf("\x1B[32mAllocate:\x1B[37m %p\n", as);
	ft_strdel(&as);
	printf("\x1B[32mFree:\x1B[37m %p\n", (as));


printf("\n\x1B[33m%s\x1B[37m\n", "-[ft_strdel]-");
	char	s[] = "Hello, I'm a string";
	printf("\x1B[32mString:\x1B[37m %s\n", s);
	ft_strclr(s);
	printf("\x1B[32mStrings are equal:\x1B[37m %d\n", ft_memcmp(s, "\0\0\0", 4));


printf("\n\x1B[33m%s\x1B[37m\n", "-[ft_striter]-");	
	char ss[] = "012345";
	printf("\x1B[32mOriginal string:\x1B[37m %s\n", ss);
	printf("\x1B[32mFunction = ascii char + 1:\x1B[37m %s\n", " *c = *c + 1");
	printf("\x1B[32mString to compare:\x1B[37m %s\n", "123456");
	ft_striter(ss, test_ft_striter);
	printf("\x1B[32mStrings are equal:\x1B[37m %d\n", ft_strcmp(ss, "123456"));


printf("\n\x1B[33m%s\x1B[37m\n", "-[ft_striteri]-");
	char s_s[] = "0123456";
	printf("\x1B[32mOriginal string:\x1B[37m %s\n", s_s);
	printf("\x1B[32mFunction = ascii char + index:\x1B[37m %s\n", " *s = *s + i");
	printf("\x1B[32mString to compare:\x1B[37m %s\n", "02468:<");
	ft_striteri(s_s, test_ft_striteri);
	printf("\x1B[32mStrings are equal:\x1B[37m %d\n", ft_strcmp(s_s, "02468:<"));


printf("\n\x1B[33m%s\x1B[37m\n", "-[ft_strmap]-");
	char *st;
	st = "012345";
	printf("\x1B[32mOriginal string:\x1B[37m %s\n", st);
	printf("\x1B[32mFunction returns ascii char + 1:\x1B[37m %s\n", "return(c + 1)");
	printf("\x1B[32mString to compare:\x1B[37m %s\n", "123456");
	st = ft_strmap(st, test_ft_strmap);
	printf("\x1B[32mStrings are equal:\x1B[37m %d\n", ft_strcmp(st, "123456"));


printf("\n\x1B[33m%s\x1B[37m\n", "-[ft_strmapi]-");
	char *str;
	str = "0123456";
	printf("\x1B[32mOriginal string:\x1B[37m %s\n", str);
	printf("\x1B[32mFunction returns ascii char + index:\x1B[37m %s\n", "return(c + i)");
	printf("\x1B[32mString to compare:\x1B[37m %s\n", "02468:<");
	str = ft_strmapi(str, test_ft_strmapi);
	printf("\x1B[32mStrings are equal:\x1B[37m %d\n", ft_strcmp(str, "02468:<"));


printf("\n\x1B[33m%s\x1B[37m\n", "-[ft_strequ]-");
	printf("\x1B[32mStrings are equal:\x1B[37m %d\n", ft_strequ("hello", "hello"));
	printf("\x1B[32mStrings are not equal:\x1B[37m %d\n", ft_strequ("helloO", "helloA"));


printf("\n\x1B[33m%s\x1B[37m\n", "-[ft_strnequ]-");
	printf("\x1B[32mStrings are equal:\x1B[37m %d\n", ft_strnequ("helloO", "helloA", 5));
	printf("\x1B[32mStrings are not equal:\x1B[37m %d\n", ft_strnequ("helloO", "helloA", 6));


printf("\n\x1B[33m%s\x1B[37m\n", "-[ft_strsub]-");
	printf("\x1B[32mOriginal string:\x1B[37m %s\n", "How are you doing?");
	printf("\x1B[32mSubstring fails:\x1B[37m %s\n", ft_strsub("", 0, 0));
	printf("\x1B[32mSubstring is:\x1B[37m %s\n", ft_strsub("How are you doing?", 4, 9));
	printf("\x1B[32mSubstring fails:\x1B[37m %s\n", ft_strsub("How are you doing?", 35, 4));


printf("\n\x1B[33m%s\x1B[37m\n", "-[ft_strjoin]-");
	printf("\x1B[32mString 1:\x1B[37m %s\t \x1B[32mString 2:\x1B[37m %s\n", "01234", "56789");
	printf("\x1B[32mConcatenated strings:\x1B[37m %s\n", ft_strjoin("01234", "56789"));
	printf("\x1B[32mConcatenated strings:\x1B[37m %s\n", ft_strjoin("", ""));


printf("\n\x1B[33m%s\x1B[37m\n", "-[ft_strtrim]-");
	printf("\x1B[32mString:\x1B[37m%s\n", "\"\\t_\\nHello I'm\\ta string\\n_\"");
	printf("\x1B[32mWithout whitespaces:\x1B[37m%s\n", ft_strtrim("\t \nHello I'm\ta string!\n "));
*/

printf("\n\x1B[33m%s\x1B[37m\n", "-[ft_strsplit]-");
	int ii = 0;
	char **split;
	char str[] = "*hello*fellow***students*";
	split = ft_strsplit(str, '*');
	while (split[ii])
	{
		printf("%s\n", split[ii]);
		ii++;
	}

	

	return (0);
}

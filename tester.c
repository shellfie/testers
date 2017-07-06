/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshepard <calebshepard@outlook.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 19:12:19 by cshepard          #+#    #+#             */
/*   Updated: 2017/07/05 20:42:08 by cshepard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//compile this as well as your ft method and make sure that their outputs do the same thing

#include <string.h>
#include <stdio.h>

int main(void)
{
	const char *s1 = "This string is 24 chars long";
	const char *s2 = "This string is 42 chars long"; // not actually 42 chars long
	const char *s3 = "A";
	const char *s4 = "a";
	const char *s5 = "b";
	const char *s6 = "Yi";
	const char *s7 = "Yo";
	const char *s8 = "     ";
	const char *s9 = "  ";
	const char *s10 = "2435tws";
	const char *s11 = "wertw short.";
	const char *s12 = "Hello World!";
	const char *s13 = "ba";

	printf("%s\t%s\t%d\n", s1, s2, strcmp(s1, s2));
	printf("%s\t%s\t%d\n", s1, s3, strcmp(s1, s3));
	printf("%s\t%s\t%d\n", s1, s1, strcmp(s1, s1));
	printf("%s\t%s\t%d\n", s1, s4, strcmp(s1, s4));
	printf("%s\t%s\t%d\n", s1, s5, strcmp(s1, s5));
	printf("%s\t%s\t%d\n", s1, s6, strcmp(s1, s6));
	printf("%s\t%s\t%d\n", s1, s7, strcmp(s1, s7));
	printf("%s\t%s\t%d\n", s1, s8, strcmp(s1, s8));
	printf("%s\t%s\t%d\n", s1, s9, strcmp(s1, s9));
	printf("%s\t%s\t%d\n", s1, s10, strcmp(s1, s10));
	printf("%s\t%s\t%d\n", s1, s11, strcmp(s1, s11));
	printf("%s\t%s\t%d\n", s1, s12, strcmp(s1, s12));
	printf("%s\t%s\t%d\n", s6, s7, strcmp(s6, s7));
	printf("%s\t%s\t%d\n", s8, s9, strcmp(s8, s9));
	printf("%s\t%s\t%d\n", s3, s4, strcmp(s3, s4));
	printf("%s\t%s\t%d\n", s4, s5, strcmp(s4, s5));
	printf("%s\t%s\t%d\n", s11, s12, strcmp(s11, s12));
	printf("%s\t%s\t%d\n", s4, s13, strcmp(s4, s13));

	return 0;
}

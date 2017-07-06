/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshepard <calebshepard@outlook.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 20:56:03 by cshepard          #+#    #+#             */
/*   Updated: 2017/07/05 21:00:35 by cshepard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void ft_swap(int *a, int *b)
{
	int tmp;

	*tmp = a;
	*a = b;
	*b = tmp;
}

int main(void)
{
	int a = 5;
	int b = 6;
	printf("Before the swap, we have int a = %d and int b = %d\n", a, b);
	ft_swap(&a, &b);
	printf("After the swap, we have int a = %d and int b = %d\n", a, b);
	return (0);
}

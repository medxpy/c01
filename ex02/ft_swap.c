/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-moum <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 12:14:56 by mel-moum          #+#    #+#             */
/*   Updated: 2021/07/01 12:13:49 by mel-moum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

int main()
{
	int a;
	int b;

	a = 10;
	b = 20;

	ft_swap(&a, &b);
	printf("%d\t", a);
	printf("%d\t", b);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-moum <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 20:27:43 by mel-moum          #+#    #+#             */
/*   Updated: 2021/07/01 15:05:09 by mel-moum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod (int *a, int *b)
{
	int	d;
	int	m;

	d = *a / *b;
	m = *a % *b;
	*a = d;
	*b = m;
}

int main()
{
	int k;
	int j;

	k = 10;
	j = 2;

	int *pt1;
	int *pt2;

	pt1 = &k;
	pt2 = &j;

	ft_ultimate_div_mod(pt1, pt2);	
	printf("%d\t", k);
	printf("%d\t", j);

}

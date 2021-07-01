/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-moum <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 20:27:28 by mel-moum          #+#    #+#             */
/*   Updated: 2021/07/01 12:43:16 by mel-moum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod (int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int main()
{
	int *di;
	int *mo;
//
	int j = 10;
	int k = 2;
	
	di = &j;
	mo = &k;


	ft_div_mod(j, k, di, mo);

	printf("%d\t", j);
	printf("%d\t", k);
}

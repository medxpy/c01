/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-moum <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 18:14:55 by mel-moum          #+#    #+#             */
/*   Updated: 2021/07/01 16:41:38 by mel-moum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
void	ft_rev_int_tab(int *tab, int size)
{
	int start;
	int end;
	int khazan;

	start = 0;

	end = size - 1;

	while (start < size / 2)
	{
		khazan = tab[end];
		tab[end] = tab[start];
		tab[start] = khazan;
		start++;
		end--;
	}
}

int main()
{
	int a[] = {1,5,9,8,6,3};
	int i = 0;
	ft_rev_int_tab(a, 6);
	while(i < 6)
	{
		printf("%d\t", a[i]);
		i++;
	}
}


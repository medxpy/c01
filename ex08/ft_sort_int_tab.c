/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-moum <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 18:15:24 by mel-moum          #+#    #+#             */
/*   Updated: 2021/07/01 17:46:21 by mel-moum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void	ft_sort_int_tab(int *tab, int size)
{
	int	m;
	int	count;

	count = 0;
	while(count < size -1)
	{
		if(tab[count] > tab[count + 1])
		{
			m = tab[count];
			tab[count] = tab[count + 1];
			tab[count + 1] = m;
			count = 0;
		}
		else 
			count++;
	}
}

int main()
{	
	int a[] = {5,8,7,3,2,4,6};
	int count = 0;
	ft_sort_int_tab(a, 7);
	while(count < 7)
	{
		printf("%d", a[count]);
		count++;
	}
}

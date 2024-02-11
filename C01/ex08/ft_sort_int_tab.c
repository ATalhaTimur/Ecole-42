/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abtimur <abtimur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 11:41:15 by abtimur           #+#    #+#             */
/*   Updated: 2024/02/05 14:41:17 by abtimur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	swap;
	int	j;

	while (size >= 0)
	{
		i = 0;
		j = i + 1;
		while (i < size - 1)
		{
			if (tab[i] > tab[j])
			{
				swap = tab [i];
				tab[i] = tab [j];
				tab [j] = swap;
			}
			i++;
			j++;
		}
		size--;
	}
}

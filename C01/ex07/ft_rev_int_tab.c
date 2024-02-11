/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abtimur <abtimur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 16:24:28 by abtimur           #+#    #+#             */
/*   Updated: 2024/02/05 14:41:51 by abtimur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp_size;
	int	temp;
	int	i;

	temp_size = size - 1;
	i = 0;
	while ((size / 2) >= i)
	{
		temp = tab[temp_size];
		tab[temp_size] = tab[i];
		tab[i] = temp;
		temp_size--;
		i++;
	}
}

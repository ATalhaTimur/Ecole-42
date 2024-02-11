/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abtimur <abtimur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 14:45:21 by abtimur           #+#    #+#             */
/*   Updated: 2024/01/31 16:01:10 by abtimur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	wrt(char c)
{
	write(1, &c, 1);
}

void	convert_int_to_char(int i)
{
	int	second;
	int	first;

	if (i < 10)
	{
		wrt('0');
		wrt(i + '0');
	}
	else
	{
		second = i / 10;
		first = i % 10;
		wrt(second + '0');
		wrt(first + '0');
	}
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i <= 99)
	{
		j = i + 1;
		while (j <= 99)
		{
			convert_int_to_char(i);
			wrt(' ');
			convert_int_to_char(j);
			if (i < 98)
			{
				wrt(',');
				wrt(' ');
			}
			j++;
		}
		i++;
	}
}

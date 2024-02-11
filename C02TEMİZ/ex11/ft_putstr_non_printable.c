/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abtimur <abtimur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 00:25:39 by abtimur           #+#    #+#             */
/*   Updated: 2024/02/07 04:27:34 by abtimur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	writer(char c)
{
	write(1, &c, 1);
}

void	converter(char arg)
{
	writer(92);
	writer("0123456789abcdef"[arg / 16]);
	writer("0123456789abcdef"[arg % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 32) && (str[i] <= 126))
		{
			writer(str[i]);
		}
		else
		{
			converter(str[i]);
		}
		i++;
	}
}

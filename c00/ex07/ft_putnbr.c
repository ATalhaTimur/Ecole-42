/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abtimur <abtimur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 16:14:39 by abtimur           #+#    #+#             */
/*   Updated: 2024/01/31 17:19:17 by abtimur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	writer(char arg)
{
	write(1, &arg, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		writer('-');
		writer(50);
		ft_putnbr(147483648);
	}
	else if (nb < 0)
	{
		ft_putnbr(-nb);
	}
	else if (nb <= 9)
	{
		writer(48 + nb);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		writer(48 + nb);
	}
}

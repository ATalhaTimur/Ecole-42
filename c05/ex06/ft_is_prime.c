/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abtimur <abtimur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 18:51:46 by abtimur           #+#    #+#             */
/*   Updated: 2024/02/12 19:53:44 by abtimur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_not_prime(int nb, int *c)
{
	int	i;

	i = 0;
	while ((nb < 12) && i < 5)
	{
		if (*c == nb)
		{
			return (1);
		}
		i++;
		c++;
	}
	return (0);
}

int	ft_is_prime(int nb)
{
	int	i;
	int	z[5];

	z[0] = 2;
	z[1] = 3;
	z[2] = 5;
	z[3] = 7;
	z[4] = 11;
	i = 0;
	if (nb < 2)
		return (0);
	if (nb < 12)
		return (ft_not_prime(nb, &z[0]));
	while (i < 5)
	{
		if ((nb > 11) && ((nb % z[i]) == 0))
			return (0);
		i++;
	}
	return (1);
}

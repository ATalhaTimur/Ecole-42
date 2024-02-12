/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abtimur <abtimur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 20:07:44 by abtimur           #+#    #+#             */
/*   Updated: 2024/02/12 22:23:44 by abtimur          ###   ########.fr       */
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

int	ft_not_twprime(int nb, int *c)
{
	int	i;

	i = 0;
	while (i < 5)
	{
		if ((nb % *c) == 0)
			return (0);
		i++;
		c++;
	}
	return (1);
}

int	ft_controller(int nb)
{
	int	i;
	int	prime;
	int	z[5];

	z[0] = 2;
	z[1] = 3;
	z[2] = 5;
	z[3] = 7;
	z[4] = 11;
	i = 0;
	if (nb < 2)
		prime = 0;
	if (nb < 12)
		prime = (ft_not_prime(nb, &z[0]));
	if ((nb > 11))
		prime = (ft_not_twprime(nb, &z[0]));
	return (prime);
}

int	ft_find_next_prime(int nb)
{
	while (ft_controller(nb) != 1)
	{
		nb = nb + 1;
	}
	return (nb);
}

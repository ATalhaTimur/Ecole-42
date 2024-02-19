/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abtimur <abtimur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 16:57:27 by abtimur           #+#    #+#             */
/*   Updated: 2024/02/11 23:38:47 by abtimur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_controller(char *str, int *index)
{
	int	i;
	int	sign;

	i = 0;
	sign = 1;
	while ((str[i] == ' ') || ((str[i] >= 9) && (str[i] <= 13)))
	{
		i++;
	}
	while ((str[i] == '-') || (str[i] == '+'))
	{
		if (str[i] == '-')
		{
			sign *= -1;
		}
		i++;
	}
	*index = i;
	return (sign);
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;

	result = 0;
	sign = ft_controller(str, &i);
	while (str[i] && ((str[i] >= 48) && (str[i] <= 57)))
	{
		result *= 10;
		result += str[i] - 48;
		i++;
	}
	result *= sign;
	return (result);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abtimur <abtimur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 04:11:40 by abtimur           #+#    #+#             */
/*   Updated: 2024/02/07 04:12:21 by abtimur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	result;

	i = 0;
	result = 1;
	while (str[i] != '\0')
	{
		if (! ((str[i] >= 'A') && (str[i] <= 'Z')))
		{
			if (! ((str[i] >= 'a') && (str[i] <= 'z')))
			{
				result = 0;
				break ;
			}
		}
		i++;
	}
	return (result);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abtimur <abtimur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 23:15:22 by abtimur           #+#    #+#             */
/*   Updated: 2024/02/10 01:45:40 by abtimur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int				result;
	unsigned int	i;

	i = 0;
	result = 0;
	while (((s1[i] != '\0' || s2[i] != '\0') && i < n))
	{
		if (s1[i] > s2[i])
		{
			result = 1;
			break ;
		}
		else if (s1[i] < s2[i])
		{
			result = -1;
			break ;
		}
		i++;
	}
	return (result);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abtimur <abtimur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 22:35:54 by abtimur           #+#    #+#             */
/*   Updated: 2024/02/06 23:01:15 by abtimur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (((str[i] >= 65) && (str[i] <= 90)))
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}
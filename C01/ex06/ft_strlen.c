/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abtimur <abtimur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 14:55:53 by abtimur           #+#    #+#             */
/*   Updated: 2024/02/01 16:23:22 by abtimur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;
	int	temp;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

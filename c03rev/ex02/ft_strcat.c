/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abtimur <abtimur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 22:09:20 by abtimur           #+#    #+#             */
/*   Updated: 2024/02/11 16:12:26 by abtimur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	ft_adder(char *dest, char *src, int index)
{
	int	j;

	j = 0;
	while (src[j] != '\0')
	{
		dest[index + j] = src[j];
		j++;
	}
	dest[index + j] = '\0';
}

char	*ft_strcat(char *dest, char *src)
{
	int	dest_len;

	dest_len = ft_len(dest);
	ft_adder(dest, src, dest_len);
	return (dest);
}

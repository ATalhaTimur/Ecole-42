/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abtimur <abtimur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 01:43:35 by abtimur           #+#    #+#             */
/*   Updated: 2024/02/08 06:00:41 by abtimur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_len(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	ft_adder(char *dest, char *src, unsigned int index, unsigned int nb)
{
	unsigned int	j;
	unsigned int	len;

	j = 0;
	len = ft_len(src);
	while ((len > 0) && (nb > j))
	{
		dest[index] = src[j];
		j++;
		index++;
		len--;
	}
	dest[index] = '\0';
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	if (dest[i] == '\0')
	{
		ft_adder(dest, src, i, nb);
	}
	return (dest);
}

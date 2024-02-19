/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abtimur <abtimur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 23:02:00 by abtimur           #+#    #+#             */
/*   Updated: 2024/02/07 06:39:53 by abtimur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_converter(char c)
{
	if ((c >= 'a') && (c <= 'z'))
	{
		c -= 32;
	}
	return (c);
}

int	ft_len(char *a)
{
	int	i;

	i = 0;
	while (a[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	ft_checker(char *str, int i, int j)
{
	if (((str[j] >= '0') && (str[j] <= '9')))
	{
		str[i] = str[i] + 32;
	}
	else if (((str[j] >= 'A') && (str[j] <= 'Z')))
	{
		str[i] = str[i] + 32;
	}
	else if (((str[j] >= 'a') && (str[j] <= 'z')))
	{
		str[i] = str[i] + 32;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	len = ft_len(str);
	while (str[i] != '\0')
	{
		str[i] = ft_converter(str[i]);
		i++;
	}
	i = 0;
	while (i <= len)
	{
		j = i - 1;
		if ((str[i] >= 'A') && (str[i] <= 'Z'))
		{
			ft_checker(str, i, j);
		}
		i++;
	}
	return (str);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamidi <hhamidi@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 10:45:17 by hhamidi           #+#    #+#             */
/*   Updated: 2025/11/05 13:28:09 by hhamidi          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;
	int	result;

	i = 1;
	result = 0;
	while (result < nb)
	{
		result = i * i;
		if (result == nb)
			return (i);
		i++;
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamidi <hhamidi@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 15:56:07 by hhamidi           #+#    #+#             */
/*   Updated: 2025/11/04 16:48:09 by hhamidi          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	factorial;

	factorial = 1;
	if (nb < 0 || nb < 2 || nb > 12)
	{
		if (nb < 0 || nb > 12)
			return (0);
		else
			return (1);
	}
	while (nb > 0)
	{
		factorial *= nb;
		nb--;
	}
	return (factorial);
}

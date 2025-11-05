/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamidi <hhamidi@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 16:32:40 by hhamidi           #+#    #+#             */
/*   Updated: 2025/11/05 17:11:40 by hhamidi          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_display(int ac, char **av)
{
	int	i;
	int	j;

	i = 1;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			ft_putchar(av[i][j]);
			j++;
		}
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i]- s2[i]);
}

int	main(int ac, char **av)
{
	int	i;
	int	j;
	char	*swap;

	i = 1;
	while (i < ac)
	{
		j = 1;
		while (j < ac)
		{
			if (ft_strcmp(av[j], av[j + 1]) < 0)
			{
				swap = av[j];
				av[j] = av[j + 1];
				av[j + 1] = swap;
			}
			j++;
		}
		i++;
	}
	ft_display(ac, av);
	return (0);
}

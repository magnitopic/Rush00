/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 15:53:22 by alaparic          #+#    #+#             */
/*   Updated: 2022/07/11 15:53:24 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int		n1;
	int		n2;

	n1 = 0;
	while (n1 <= 98)
	{
		n2 = n1 + 1;
		while (n2 <= 99)
		{
			ft_putchar((n1 / 10) + 48);
			ft_putchar((n1 % 10) + 48);
			ft_putchar(' ');
			ft_putchar((n2 / 10) + 48);
			ft_putchar((n2 % 10) + 48);
			if (n1 != 98)
				write(1, ", ", 2);
			n2++;
		}
		n1++;
	}
}

/*int	main(void)
{
	ft_print_comb2();
}*/
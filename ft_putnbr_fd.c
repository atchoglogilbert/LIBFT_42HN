/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katchogl <katchogl@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 20:02:20 by katchogl          #+#    #+#             */
/*   Updated: 2022/10/21 20:41:51 by katchogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
	{
		ft_putchar_fd ('-', fd);
		if (n == -2147483648)
		{
			ft_putchar_fd ('2', fd);
			n = 147483648;
		}
		else
			n = -n;
	}
	if (n >= 10)
	{
		ft_putnbr_fd (n / 10, fd);
		n = n % 10;
	}
	ft_putchar_fd (n + '0', fd);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybulacak <ybulacak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 18:21:10 by ybulacak          #+#    #+#             */
/*   Updated: 2022/07/26 18:21:18 by ybulacak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(int c)
{
	return (write(1, &c, 1));
}

int	ft_putstr(char *var)
{
	int	i;

	if (!var)
		return (ft_putstr("(null)"));
	i = 0;
	while (var[i] != '\0')
		ft_putchar(var[i++]);
	return (i);
}

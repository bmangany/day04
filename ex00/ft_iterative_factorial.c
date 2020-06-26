/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 14:08:20 by bmangany          #+#    #+#             */
/*   Updated: 2020/06/26 14:21:27 by bmangany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int i;
	int f;

	if (nb < 0)
		return (-1);
	if (nb == 0)
		return (1);
	
	i = 1;
	f = nb;
	while (i < nb)
	{
		f = f * i;
		i++;
	}
	return(f);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bissaka- <bissaka-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 00:32:59 by bissaka-          #+#    #+#             */
/*   Updated: 2021/09/14 01:18:43 by bissaka-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	nb;
	int	mil;
	int	i;

	i = 0;
	if (size % 2 == 0)
		mil = size / 2;
	else
		mil = (size - 1) / 2;
	while (i < mil)
	{
		nb = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = nb;
		i++;
	}
}

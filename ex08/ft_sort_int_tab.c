/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bissaka- <bissaka-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 21:32:03 by bissaka-          #+#    #+#             */
/*   Updated: 2021/09/14 21:52:46 by bissaka-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	nb;
	int	i;
	int	cpt;

	i = 0;
	cpt = 1;
	while (cpt <= size)
	{
		while (i < size - 1)
		{
			if (tab[i] < tab[i + 1])
			{
				nb = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = nb;
			}
			i++;
		}
		i = 0;
		cpt++;
	}
}

/*int	main(void)
{
	int tab[]={1,2,3,4,5};
	int i;
	ft_sort_int_tab(tab,5);
	for(i=0;i<5;i++) printf(" %d",tab[i]);
}*/

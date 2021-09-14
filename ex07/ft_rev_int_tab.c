/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bissaka- <bissaka-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 00:32:59 by bissaka-          #+#    #+#             */
/*   Updated: 2021/09/14 21:32:24 by bissaka-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

/*int	main(void)
{
	int tab[]={1,2,3,4};
	int i=0;
	printf("avant permutation ");
	for(i=0;i<4;i++) printf("%d ",tab[i]);
	ft_rev_int_tab(tab,4);
	printf("\napres permutation ");
	for(i=0;i<4;i++) printf("%d ",tab[i]);
}*/

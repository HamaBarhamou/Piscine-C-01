/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bissaka- <bissaka-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 17:27:50 by bissaka-          #+#    #+#             */
/*   Updated: 2021/09/13 17:39:48 by bissaka-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	q;
	int	r;

	q = *a / *b;
	r = *a % *b;
	*a = q;
	*b = r;
}

/*
int	main(void)
{
	int a=15;
	int b=3;
	ft_ultimate_div_mod(&a,&b);
	printf("a=%d b=%d",a,b);
}*/

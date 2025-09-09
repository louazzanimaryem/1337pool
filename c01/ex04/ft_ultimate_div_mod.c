/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouazza <mlouazza@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 20:24:04 by mlouazza          #+#    #+#             */
/*   Updated: 2025/08/17 22:12:56 by mlouazza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
int main ()
{
	int a = 5;
	int b = 2;

	ft_ultimate_div_mod(&a, &b);
	printf("%d\n ", a);
	printf("%d\n", b);
	return 0;
}

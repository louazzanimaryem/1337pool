/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouazza <mlouazza@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 17:57:58 by mlouazza          #+#    #+#             */
/*   Updated: 2025/08/17 22:02:01 by mlouazza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
int main()
{
	int a = 6;
	int b = 2;
	int d;
	int m;
	ft_div_mod(a, b, &d, &m);
	printf("%d\n", d);
	printf("%d\n", m);
	return 0;
}



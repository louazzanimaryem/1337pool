/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouazza <mlouazza@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 18:37:56 by mlouazza          #+#    #+#             */
/*   Updated: 2025/08/13 18:39:32 by mlouazza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1,&c,1);
}
void    ft_putnbr(int nb)
{
    long long int nbr = nb;
    char        rest[200];
    int i = 0;
    if(nbr < 0 )
    {
        write(1,"-",1);
        nbr *= -1;
    }
    while(nbr >= 10)
    {
        rest[i] = nbr % 10 + '0';
        nbr = nbr / 10;
        i++;
    }
    if(nbr <= 9)
    {
        rest[i] = nbr + '0';
    }
    while(i >= 0)
    {
        write(1,&rest[i],1);
        i--;
    }
}
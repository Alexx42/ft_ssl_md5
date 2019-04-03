/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-goff <ale-goff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 11:23:02 by ale-goff          #+#    #+#             */
/*   Updated: 2018/10/03 21:57:06 by ale-goff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_puthex(unsigned long n)
{
	int len;

	len = 0;
	if (n >= 16)
		len += ft_puthex(n / 16);
	n = n % 16;
	n += n < 10 ? '0' : 'a' - 10;
	len += write(1, &n, 1);
	return (len);
}
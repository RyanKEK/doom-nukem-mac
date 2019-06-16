/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohavryle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 20:47:57 by ohavryle          #+#    #+#             */
/*   Updated: 2018/11/05 22:19:38 by ohavryle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

long long int	ft_pow(long long int n, long long int pow)
{
	long long int tmp;
	long long int powtmp;

	if (pow < 0)
		powtmp = -pow;
	else
		powtmp = pow;
	if (powtmp == 0)
		return (1);
	tmp = n;
	while (--powtmp)
		n = n * tmp;
	if (pow >= 0)
		return (n);
	return (1 / n);
}

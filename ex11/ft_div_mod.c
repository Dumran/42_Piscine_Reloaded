/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehkekli <mehkekli@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 16:03:12 by mehkekli          #+#    #+#             */
/*   Updated: 2023/09/29 16:03:15 by mehkekli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int		temp_div;
	int		temp_mod;

	temp_div = a / b;
	temp_mod = a % b;
	*div = temp_div;
	*mod = temp_mod;
}

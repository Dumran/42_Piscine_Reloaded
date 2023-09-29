/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehkekli <mehkekli@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 16:03:23 by mehkekli          #+#    #+#             */
/*   Updated: 2023/09/29 16:03:25 by mehkekli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int		i;
	int		factorial;

	i = 1;
	factorial = 1;
	if (nb < 0)
		return (0);
	else if (nb == 0 || nb == 1)
		return (factorial);
	else
	{
		while (i <= nb)
		{
			factorial *= i;
			i++;
		}
		return (factorial);
	}
}

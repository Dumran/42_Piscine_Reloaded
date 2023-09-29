/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehkekli <mehkekli@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 16:06:17 by mehkekli          #+#    #+#             */
/*   Updated: 2023/09/29 16:06:20 by mehkekli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (tab[a] != 0)
	{
		if (f(tab[a]) == 1)
			b++;
		a++;
	}
	return (b);
}

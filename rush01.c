/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alklein <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/01 12:36:14 by alklein           #+#    #+#             */
/*   Updated: 2018/09/02 18:53:17 by alklein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_repeat(int nbr, char b)
{
	int i;

	i = 0;
	while (i < nbr)
	{
		ft_putchar(b);
		i++;
	}
}

void	ft_printline(char l, int x, int y, int z)
{
	char e;

	e = '\\';
	ft_putchar(l);
	ft_repeat(x - 2, '*');
	if (l == '\\')
		e = '/';
	ft_repeat(z, e);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int i;
	int z;

	z = 1;
	if (x <= 1)
		z = 0;
	if (x <= 0 || y <= 0)
		return ;
	ft_printline('/', x, y, z);
	while (i < y - 2)
	{
		ft_putchar('*');
		ft_repeat(x - 2, ' ');
		ft_repeat(z, '*');
		ft_putchar('\n');
		i++;
	}
	if (y > 1)
		ft_printline('\\', x, y, z);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iren <iren@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/08 18:52:41 by iren              #+#    #+#             */
/*   Updated: 2020/09/02 22:45:51 by iren             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    atoi, atol, atoll - convert a string to an integer
** DESCRIPTION
**  The atoi() function converts the initial portion of the string
**	pointed to by nptr to int.
**	The behavior is the same as strtol(nptr, NULL, 10);
**  except that atoi() does not detect errors.
**
** RETURN VALUE
**        The converted value.
*/

int	ft_atoi(const char *s)
{
	long	res;
	int		i;
	int		minus;

	res = 0;
	i = 0;
	minus = 1;
	while (s[i] == '\t' || s[i] == '\n' || s[i] == ' ' ||
			s[i] == '\v' || s[i] == '\f' || s[i] == '\r')
		i++;
	if (s[i] == '+' || s[i] == '-')
	{
		if (s[i] == '-')
			minus *= (-1);
		i++;
	}
	while (s[i] && (s[i] >= '0' && s[i] <= '9'))
	{
		res = res * 10 + s[i] - '0';
		i++;
	}
	return ((int)minus * res);
}

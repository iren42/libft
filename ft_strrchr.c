/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iren <iren@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/03 15:44:33 by iren              #+#    #+#             */
/*   Updated: 2020/08/31 23:30:18 by iren             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** strchr, strrchr, strchrnul - locate character in string
** DESCRIPTION
**  The strrchr() function returns a pointer to the last occurrence of the
**	character c in the string s.
**
** RETURN VALUE
**  The  strchr()  and  strrchr()  functions return a pointer to the matched
**	character or NULL if the character is not found.
**  The terminating null byte is considered part of the string, so that if c is
**  specified as '\0', these functions return a pointer to the terminator.
*/

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*st;
	char	*res;

	i = 0;
	st = 0;
	res = 0;
	st = (char*)s;
	while (st[i])
	{
		if (c == st[i])
			res = &st[i];
		i++;
	}
	if (c == '\0')
		return (&st[i]);
	return (res);
}

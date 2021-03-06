/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldhanis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 14:52:38 by ldhanis           #+#    #+#             */
/*   Updated: 2018/10/05 15:15:31 by ldhanis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strcat(char *s1, const char *s2)
{
	char *deref_s1;

	deref_s1 = s1;
	while (*deref_s1 != '\0')
		deref_s1++;
	while (*s2 != '\0')
	{
		*deref_s1 = *s2;
		deref_s1++;
		s2++;
	}
	*deref_s1 = '\0';
	return (s1);
}

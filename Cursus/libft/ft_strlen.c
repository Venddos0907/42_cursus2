/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmetzger <mmetzger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 15:19:35 by mmetzger          #+#    #+#             */
/*   Updated: 2022/02/28 14:02:00 by mmetzger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strlen (char str)
{
    int i;

    i = 0;
    while(str[i])
    {
        i++;
    }
    return(i);
}
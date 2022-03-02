/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmetzger <mmetzger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 15:19:40 by mmetzger          #+#    #+#             */
/*   Updated: 2022/03/02 11:25:50 by mmetzger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t i;
    size_t j;
    size_t litlen;

    i = 0;
    litlen = ft_strlen(little);
    if (litlen == 0)
        return((char*)big);
    if (len != 0)
    {
        while (big[i] != '\0' && i <= len - litlen)
        {
            j = 0;
            while (big[i + j] == little[j] && little[j] != '\0')
                j++;
            if (j == litlen)
                return((char*)&big[i]);
            i++;
        }
    }
    return(0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyilmaz <zyilmaz@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 13:53:39 by zyilmaz           #+#    #+#             */
/*   Updated: 2024/10/08 12:56:10 by zyilmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char *ft_toupper(char *str){
    
    int i=0;

    while (str[i])
    {
        if(str[i]>96 && str[i]<123){
            str[i] -= 32;
        }
        i++;
    }
    return str;
}

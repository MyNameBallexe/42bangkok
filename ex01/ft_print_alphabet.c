/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 01:59:52 by marvin            #+#    #+#             */
/*   Updated: 2026/05/09 01:59:52 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_alphabet(void){
    char text;
    text = 'a';
    while(text <= 'z'){
        write(1, &text, 1);
        text++;
    }
}
int main(){
    ft_print_alphabet();
    return 0;
}

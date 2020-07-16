/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nombanjw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 10:37:18 by nombanjw          #+#    #+#             */
/*   Updated: 2020/07/16 12:11:34 by nombanjw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include<stdio.h>
#include <unistd.h>
int ft_iterative_power(int nb, int power){
	int i=1;
	int answ=1;
	if (power < 0){
		return (0);}
		else
		
			while(i<=power){
			 answ=answ*nb;
			 i++;
	        	}  

	return (answ);
}
/*int main() 
{
printf("%d ", ft_iterative_power(3,3));
return 0;
}*/

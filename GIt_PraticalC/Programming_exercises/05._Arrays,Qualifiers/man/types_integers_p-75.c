/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   types_integers_p-75.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaltaza     abaltaza42@outlook.com        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 11:08:53 by abaltaza          #+#    #+#             */
/*   Updated: 2025/03/24 11:08:53 by abaltaza         ###   ########.fr       */
/*                                                                            */
/*   Purpose:                                                            **** */
/*                                                                            */
/*   Usage:                                                              **** */
/* ************************************************************************** */


/********************************************************************************************************
Types of integers


C is considered a medium level language because it allows you to get very close to the actuiual hardware of the machine.


Some languages, like BASIC, got to great lengths to completely isolate the user fro the details oof howw the processor workjs. This sinmmplification comes to a great loss of efficiency. C lets you give detailed information about how the hardware is to be used.

The type specifier int tels the C to use the most efficient size (for the machine that you are using) for the integer. This can be two to four bytes depending on the machine. 

Sometimes you need extra digits to allocate store numbers larger than those allowed in a normal int. Th declaratioon:

	long int answer;

The long qualiofier informs C that you want to allocate more memory. If we are going to use small numbers we can go to short.

The type shoort uses usually two bytes.

BTW an unsigned short int uses all 16 bytes. 


Finally, we consider the very short integer of type char.

table 5-2 INteger printf / scanf conversions

%hd --> (signed) short int
%ld --> (signed)) long int
%lu --> unsigned long int
%u --> unsigned iint
%hu --> unsigned short int

The range oof flavors of integers is listed in Appendix B.

unsigned numbers provide a way os doubling the positive range at the expenseof eliminating negative numbers. They are also useful for things that can never be negative, like counters and indices.

The flavor of number you use will depend on your program and storage requirements. 

********************************************************************************************************/




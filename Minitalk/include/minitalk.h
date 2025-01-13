/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburga-g < aburga-g@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 11:06:33 by aburga-g          #+#    #+#             */
/*   Updated: 2025/01/13 10:22:33 by aburga-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include <signal.h>
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_atoi(const char *str);
void	signal_handler(int signal);
void	send_char(int pid, char c, unsigned int delay);
void	send_str(int pid, const char *str, unsigned int delay);
void	val_arg(int argc, char *argv[]);

#endif
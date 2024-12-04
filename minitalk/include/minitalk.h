#ifndef MINITALK_H
# define MINITALK_H

# define SIGUSR1 10
# define SIGUSR2 12

# include <signal.h>
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_atoi(char *str);
void	signal_handler(int signal);
void	send_char(int pid, char c, unsigned int delay);
void	send_str(int pid, const char *Str, unsigned int delay);

#endif
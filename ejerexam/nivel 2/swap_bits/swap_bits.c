#include <stdio.h>
#include <unistd.h>

unsigned char	swap_bits(unsigned char octet)
{
	return (octet >> 4 | octet << 4);
}

/*void	print_bits(unsigned char octet)
{
	int	bit = 8;

	while (bit--)
	{
		if ((octet >> bit) & 1)
			write (1, "1", 1);
		else
			write (1, "0", 1);
	}
}

int	main()
{
	unsigned int	bit = 0b01000001;
	unsigned char	revers = swap_bits(bit);

	printf("antes del cambio\n");
	print_bits(bit);
	printf("\ndepues del cambio\n");
	print_bits(revers);
	return (0);
}*/

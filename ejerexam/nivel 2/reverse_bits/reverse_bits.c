#include <unistd.h>

unsigned char reverse_bits(unsigned char octet)
{
	unsigned int	bit = 8;
	int				reverse = 0;

	while (bit--)
	{
		reverse = reverse << 1 | (octet & 1);
		octet >>= 1;
	}
	return (reverse);
}

void	print_bits(unsigned char octet)
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

int	main(void)
{
	unsigned int	bit = 00100110;
	unsigned char	revers = reverse_bits(bit);

	write(1, "Byte original: ", 15);
	print_bits(bit);
	write(1, "\nByte invertido: ", 16);
	print_bits(revers);
	return (0);
}

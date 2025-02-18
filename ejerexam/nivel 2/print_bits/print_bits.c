#include <unistd.h>

void	print_bits(unsigned char octet)
{
	unsigned int	bit;

	bit = 8;
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
	print_bits(2);
	return (0);
}

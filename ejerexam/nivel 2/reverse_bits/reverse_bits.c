#include <unistd.h>

unsigned char	reverse_bits(unsigned char octet)
{
	unsigned int	bit;
	unsigned int	rever;

	bit = 7;
	rever = 0;
	while (bit >= 0)
	{
		rever = rever << 1 | octet & 1;
		octet >>= 1;
	}
	return (rever);
}

void	print_bits(unsigned char octet)
{
	int	bit = 7;

	while (bit >= 0)
	{
		if ((octet >> bit) & 1)
			write(1, "1", 1);
		else
			write(1, "0", 1);
		bit--;
	}
}
int main()
{
	unsigned char byte = 00100110; // 38 en decimal
	unsigned char reversed = reverse_bits(byte);

	write(1, "Original: ", 10);
	print_bits(byte);
	write(1, "\nReverso:  ", 10);
	print_bits(reversed);
	write(1, "\n", 1);

	return 0;
}

/**
 * flip_bits - converts a binary number to an integer
 * @n: the parameter input
 * @m: the index of the bit
 * Return: returns the value of the bit at index
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned int bits;
for (bits = 0; n || m; m >>= 1, n >>= 1)
{
if ((n & 1) != (m & 1))
{
bits++;
}

}
return (bits);
}

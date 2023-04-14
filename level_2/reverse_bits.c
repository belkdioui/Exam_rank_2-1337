#include<stdio.h>
// unsigned char reverse_bits(unsigned char octet)
// {
//    int i = 0;
//    unsigned char res = 0; 
//    while(i <= 7)
//    {
//         res = (octet >> i & 1) | res;
//         i++;
//    }
//    return res;
// }
unsigned char	reverse_bits(unsigned char octet)
{
	int		i = 8;
	unsigned char	res = 0;

	while (i > 0)
	{
		res = res * 2 + (octet % 2);
		octet = octet / 2;
		i--;
	}
	return (res);
}
int main()
{
    unsigned char num = 0x5A; // binary 01011010
    unsigned char reversed = reverse_bits(num); // binary 01010101
    
    printf("Original number: %d (0x%x)\n", num, num);
    printf("Reversed number: %d (0x%x)\n", reversed, reversed);
    
    return 0;
}
#include<unistd.h>
void ft_print_comb(void){
	char o_first, o_second, o_third;
	int first = 0, second = first + 1, third = second + 1;
	while(first <= 7){
		while(second <= 8){
			while(third <= 9){
				o_first = first + '0';
				o_second = second + '0';
				o_third = third + '0';
				write(1 ,&o_first ,1);
				write(1 ,&o_second ,1);
				write(1 ,&o_third ,1);
				write(1 ,", " ,2);
				third++;
			}
			second++;
			third = second + 1;
		}
		first++;
		second = first + 1;
		third = second + 1;
	}
}
int main(void){
	ft_print_comb();
	return 0;
}

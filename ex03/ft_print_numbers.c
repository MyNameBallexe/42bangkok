#include<unistd.h>
void ft_print_numbers(void){
	char num;
	int num_start ,num_end ,queue ,div;
	num_start = 1;
	num_end = 10;
	while(num_start <= num_end){
		queue = num_start;
		div = 1;
		while(queue/div >= 10){
			div *= 10;
		}
		while(div > 0){
			num = (queue / div) % 10 + '0';
			write(1, &num ,1);
			div /= 10;
		}
		num_start++;
	}
}
int main(void){
	ft_print_numbers();
	return 0;
}

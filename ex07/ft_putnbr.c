#include<unistd.h>
void ft_putnbr(int nb){
	char num;
	int number, div;
	div = 1;
	if(nb == -2147483648){
		write(1, "-2147483648", 11);
	} else if(nb < 0){
		write(1, "-",1);
		nb *= -1;
	}
	if(nb > 0){
		number = nb;
		while(number/div >= 10){
			div *= 10;
		}
		while(div > 0){
			num = (nb / div) % 10 + '0';
			write(1, &num, 1);
			div /= 10;
		}
	}
	if(nb == 0){
		write(1, "0", 1);
	}
}

int main(void){
	ft_putnbr(-42);
	return 0;
}

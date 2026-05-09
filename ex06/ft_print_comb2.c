#include<unistd.h>
void ft_print_comb2(void){
	char o_first1, o_first2, o_last1, o_last2;
	int first1 = 0, first2 = 0, last1 = first1, last2 = first2 + 1;
	while(first1 <= 9){
		while(first2 <= 8){
			while(last1 <= 9){
				while(last2 <= 9){
					o_first1 = first1 + '0';
					o_first2 = first2 + '0';
					o_last1 = last1 + '0';
					o_last2 = last2 + '0';
					write(1, &o_first1, 1);
					write(1, &o_first2, 1);
					write(1, " ", 1);
					write(1, &o_last1, 1);
					write(1, &o_last2, 1);
					if(first1 == 9 && first2 == 8 && last1 == 9 && last2 == 9){
						write(1, "$", 1);
					} else{
						write(1, ", ", 2);
					}
					last2++;
				}
				last1++;
				last2 = 0;
			}
			first2++;
			if(first2 == 9){
				last1 = first1 + 1;
				last2 = 0;
			} else {
				last1 = first1;
				last2 = first2 + 1;
			}
		}
		first1++;
		first2 = 0;
		last1 = first1;
		last2 = first2;
	}
}
int main(void){
	ft_print_comb2();
	return 0;
}

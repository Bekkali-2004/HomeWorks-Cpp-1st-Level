#include <unistd.h> // <stdio.h>

ft_putchar(char c){
    write(1, &c, 1);
}

int main (){
    ft_putchar('a');
} //ft_putchar()
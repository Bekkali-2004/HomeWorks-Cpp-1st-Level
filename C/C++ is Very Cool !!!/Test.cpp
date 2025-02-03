#include <iostream>

using namespace std;

void ft_putstr(char *str){
    int i = 0;
    while (str[i]){
        cout << str[i];
        i++;
    }
}

int main (){
    char str[] = "Hello World!";
    ft_putstr(str);
    return 0;
}
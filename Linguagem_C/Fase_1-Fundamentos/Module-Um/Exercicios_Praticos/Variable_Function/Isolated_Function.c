#include <stdio.h>

int CalculoDano(int ataque, int defesa){
    if(defesa >= ataque){
        return 0;
    }
    return  ataque - defesa;
}

int main(){

    printf("\n\nO resultado entre Ataque e Defesa foi: %d\n",CalculoDano(10,51));

    return 0;
}
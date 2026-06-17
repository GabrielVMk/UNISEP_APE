int somar(int a, int b){
 return a + b;
}

int main(){
    int nu1, nu2, resto;
    
     printf("dijite o 1° numero: ");
     scanf("%i", &nu1);
     
     printf("dijite o 2° numero: ");
     scanf("%i", &nu2);
     
     resto = somar(nu1, nu2);
     
     printf("a soma de %i e %i é de %d\n", nu1, nu2, resto);
     
     return 0;
}
 int quadrado(int numero){
     return  numero * numero;
 }
 
 int main(){
     int num, resto;
     
     printf("dijite teu nimero: ");
     scanf("%d", &num);
     
     resto = quadrado(num);
     
     printf("O quadrado desse numero é %d\n", resto);
     
     return 0;
 }
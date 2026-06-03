int main(){
    int i, nu1, nu2, maior, menor;
    
    printf("dijite o 1° numero: ");
    scanf("%d", &nu1);
    
    printf("dijite o 2° numero: ");
    scanf("%d", &nu2);
    
    if(nu1 < nu2){
        menor = nu1;
        maior = nu2;
    }else{
        menor = nu2;
        maior = nu1;
    }
    for(i = menor + 1; i < maior; i++){
        printf("%d, ", i);
    }
    printf("\n");
    
    return 0;
}
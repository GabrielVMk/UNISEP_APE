int imparepar(int numero){
    if(numero % 2 == 0){
        return 1;
        
    }else{
        return 0;
    }
}
   
int main(){
    int nu;
    
    printf("dijite teu numero: ");
    scanf("%d", &nu);
    
    if(imparepar(nu)){
        printf("O numero %d é PAR (retorno: 1)\n", nu);
    }else{
        printf("O numero %d é IMPAR (retorno: 0)\n", nu);
    }
    
    return 0;
}    
   
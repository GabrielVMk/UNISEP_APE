int main(){
    int i;
    int opcao;
    
    printf("dijite o N°: ");
    scanf("%d", &opcao);
    
     printf("\n--- Tabuada do %d ---\n", opcao);
    
    for(i = 0; i <=10; i++){
        printf("%d x %d = %d\n", opcao, i, opcao * i);
    }
}

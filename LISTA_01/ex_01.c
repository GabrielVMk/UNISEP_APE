

int main() {
    int n1, n2;
    
    printf("DIjite seu 1° número: ");
    scanf("%d", &n1);
    
    printf("DIjite seu 2° número: ");
    scanf("%d", &n2);
    
    if (n2 == 0){
        printf("ERRO.\n");
    }
    else if (n1 % n2 == 0){
        printf("%d é múltiplo de %d.\n", n1, n2);
    }else{
        printf("%d NÃO é múltiplo de %d.\n", n1, n2);
    }
    return 0;
}

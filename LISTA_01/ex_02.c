
int main() {
    float salario, salarioFinal;

    
    printf("Digite o seu salário: R$ ");
    scanf("%f", &salario);

    
    if (salario > 3000.00) {
        salarioFinal = salario * 1.05; 
    } else {
        salarioFinal = salario * 1.10; 
    }

    printf("O salário final com bônus é: R$ %.2f\n", salarioFinal);

    return 0;
}
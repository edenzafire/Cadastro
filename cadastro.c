#include <stdio.h>
#include <string.h>



// Definição da Struct para armazenar os dados do usuário

 struct Cadastro {
       char nome[50];
       int idade;
       float salario;
       int ativo; // 1 para ativo e 0 para inativo
};

// Função para imprimir os dados do cadastro

void imprimirCadastro(struct Cadastro pessoa){
       printf( "\n==============================\n");
       printf( "      DADOS CADASTRADOS           ");
       printf( "\n==============================\n");
       printf( "Nome          : %-20s\n", pessoa.nome);
       printf( "Idade         : %-3d anos\n", pessoa.idade);
       printf( "Salário       : R$ %.3f\n", pessoa.salario);
       printf( "Status de atividade:%s\n", pessoa.ativo? " Ativo " : " Inativo ");
       printf( "================================\n");
}

int main(){
      struct Cadastro pessoa;

 // Solicitando os dados do usuário.
      printf( "Insira o nome: ");
      fgets(pessoa.nome, 50, stdin);
 // Removendo o \n adicionado pelo fgets
      pessoa.nome[strcspn(pessoa.nome, "\n")] = 0;
      
     printf( "Insira a idade: ");
     scanf( "%d", &pessoa.idade);

     printf( "insira o salário: ");
     scanf( "%f", &pessoa.salario);
  
     printf( "Insira o status (1 para ativo , 0 para inativo): ");
     scanf( "%d", &pessoa.ativo);

 // Imprime os dados cadastrados     
     imprimirCadastro(pessoa);

return 0;
}












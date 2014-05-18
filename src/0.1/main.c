
#include <stdlib.h>
#include <stdio.h>

void logo(){
    int i;
    for(i=0;i<80;i++){
        printf("%c",205);
    }
    printf("\t\t _____    ______   _____    _   _                      \n");
    printf("\t\t/  __ \\   |  ___| /  __ \\  | | | |                     \n");
    printf("\t\t| /  \\/   | |_    | /  \\/  | | | |_ __ _   _ _ __ ___  \n");
    printf("\t\t| |       |  _|   | |      | | | | '__| | | | '_ ` _ \\ \n");
    printf("\t\t| \\__/\\_  | |_    | \\__/\\  \\ \\_/ / |  | |_| | | | | | |\n");
    printf("\t\t \\____(_) \\_(_)    \\____/   \\___/|_|   \\__,_|_| |_| |_|\n\n\n");

    printf("\t\t                _......_\n");
    printf("\t\t         , __.-'\\______\\\\'.______\n");
    printf("\t\t         >`  '-`.--------'---`-`-`-.\n");
    printf("\t\t        /    .-. \\________ \"\" .-.  =\\\n");
    printf("\t\t        '---( o )------------( o )--'\n");
    printf("\t\t             '-'              '-'\n");
    for(i=0;i<80;i++){
        printf("%c",205);
    }
}
void volta(){
    printf("\n\n\n\nPressione qualquer tecla para voltar para o menu principal");
    system("pause>null");
    menuPrin();

}
void quadroHorario(){
    system("cls");
    logo();
    printf("\t\t\t\tQuadro de Horarios");
   volta();
}
void consultaAulas(){
    system("cls");
    logo();
    printf("\t\t\tConsulta de aulas restantes");
    volta();
}
void consultaDatas(){
    system("cls");
    logo();
    printf("\t\t\tConsulta de datas de provas");
    volta();
}
void consultaResutados(){
    system("cls");
    logo();
    printf("\t\t\tConsulta resultado da ultima prova");
    volta();

}
void criticas(){
    char setor[20], reclamacao[300];
    system("cls");
    logo();
    printf("\t\t\t\tCriticas e Sugestoes");
    printf("\n\n\n\nDigite o nome do setor: ");
    gets(setor);

    printf("\nDigite a sua critica/sugestao (limite de 300 caracteres): ");
    gets(reclamacao);
    system("pause>null");
}
void sair(){
    exit(0);
}
void menuPrin(){
    int escolha;
    system("cls");
    logo();
    printf("\n\n\n\n");
    printf("\n\t\t\t1. Quadro de horarios\n");
    printf("\n\t\t\t2. Consultar aulas restantes\n");
    printf("\n\t\t\t3. Consultar datas de provas\n");
    printf("\n\t\t\t4. Consultar resultados da ultima prova\n");
    printf("\n\t\t\t5. Criticas e sugestoes\n");
    printf("\n\t\t\t6. Sair do sistema");
    printf("\n\n\n\t\t\tDigite a opcao: ");
    scanf("%d",&escolha);
    fflush(stdin);
    switch(escolha){
        case 1:{
            quadroHorario();
            break;
        }
        case 2:{
            consultaAulas();
            break;
        }
        case 3:{
            consultaDatas();
            break;
        }
        case 4:{
            consultaResutados();
            break;
        }
        case 5:{
            criticas();
            break;
        }
        case 6:{
            sair();
            break;
        }
    }

}

int main(){
    system("color f9");
    menuPrin();

}

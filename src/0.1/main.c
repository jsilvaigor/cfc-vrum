
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
void menuPrin(){
    int escolha;
    system("cls");
    logo();
    printf("\n\n\n\n");
    printf("\n\t\t\t1. Quadro de horarios\n");
    printf("\n\t\t\t2. Consultar aulas restantes\n");
    printf("\n\t\t\t3. Consultar datas de provas\n");
    printf("\n\t\t\t4. Consultar resultados de provas\n");
    printf("\n\t\t\t5. Criticas e sugestoes\n");
    printf("\n\t\t\t6. Sair do sistema");
    printf("\n\n\n\t\t\tDigite a opcao: ");
    scanf("%d",&escolha);
    switch(escolha){
        case 1:{

            break;
        }
        case 2:{

            break;
        }
        case 3:{
            printf("3");
            break;
        }
        case 4:{
            printf("4");
            break;
        }
        case 5:{
            printf("5");
            break;
        }
        case 6:{
            printf("6");
            break;
        }
    }

}

int main(){
    system("color f9");
    menuPrin();


}

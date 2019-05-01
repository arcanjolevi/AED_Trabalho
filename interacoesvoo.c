#include "interacoesvoo.h"

void insertFlightTerminal(Lista_Voo **v){
    int numeroDeVoos = countListFlight((*v));
    char temp[150];
    Flight temp2;
    printf("Digite o prefixo do voo\n:");
    gets(temp);
    while(isInFlightList((*v),temp) || strlen(temp) == 0){
        if(strlen(temp) == 0){
            printf("Prefixo inválido, redigite\n:");
            gets(temp);
        }else{
            printf("Prefixo já registrado, redigite\n:");
            gets(temp);
        }
    }
    temp2.prefixo = malloc(strlen(temp) + 1);
    strcpy(temp2.prefixo,temp);
    printf("Digite o nome do aeroporto de origem\n:");
    gets(temp);
    while(strlen(temp) == 0){
        printf("Nome inválido, redigite\n:");
        gets(temp);
    }
    temp2.nomeO = malloc(strlen(temp) + 1);
    strcpy(temp2.nomeO,temp);
    printf("Digite a sigla do aeroporto de origem\n:");
    gets(temp);
    while(!checkSig(temp)){
        printf("Sigla inválida, redigite\n:");
        gets(temp);
    }
    strcpy(temp2.siglaO,temp);
    printf("Digite o nome do aeroporto de destino\n:");
    gets(temp);
    while(strlen(temp) == 0){
        printf("Nome inválido, redigite\n:");
        gets(temp);
    }
    while(!checkAirport(temp,temp2.nomeO)){
        printf("Destino inválido, redigite\n:");
        gets(temp);
    }
    temp2.nomeD = malloc(strlen(temp) + 1);
    strcpy(temp2.nomeD,temp);
    printf("Digite a sigla do aeroporto de destino\n:");
    gets(temp);
    while(!checkSig(temp)){
        printf("Sigla inválida, redigite\n:");
        gets(temp);
    }
    strcpy(temp2.siglaD,temp);
    printf("Digite o horário de saída do voo\n:");
    gets(temp);
    while(!checkTime(temp)){
        printf("Hora inválida, redigite\n:");
        gets(temp);
    }
    strcpy(temp2.horaP,temp);
    printf("Digite o horário de chegada do voo\n:");
    gets(temp);
    while(!checkTime(temp)){
        printf("Hora inválida, redigite\n:");
        gets(temp);
    }
    strcpy(temp2.horaC,temp);
    printf("Digite a duração do voo\n:");
    gets(temp);
    while(!checkTime(temp)){
        printf("Hora inválida, redigite\n:");
        gets(temp);
    }
    strcpy(temp2.duracao,temp);
    printf("Digite o tipo da aeronave\n:");
    gets(temp);
    while(strlen(temp) == 0){
        printf("Aeronave inválida, redigite\n:");
        gets(temp);
    }
    temp2.tipo = malloc(strlen(temp) + 1);
    strcpy(temp2.tipo,temp);
    (*v) = insertListFlight((*v), temp2);
    if(countListFlight(*v) == numeroDeVoos+1){
        printf("Voo inserido com sucesso!\n");
    }else{
        printf("Não foi possível inserir o voo\n");
    }
    printf("Pressione qualquer tecla para voltar ao menu\n:");
    getchar();
    free(temp2.nomeD); free(temp2.nomeO); free(temp2.prefixo); free(temp2.tipo);
}

void changeFlightTerminal(Lista_Voo **v){
    char temp[150];
    Flight *desejada = malloc(sizeof(Flight));
    printf("Voos registrados:\n\n");
    printFlightList((*v));
    printf("\nDigite qual voo quer alterar\n:");
    gets(temp);
    while(!isInFlightList((*v),temp) && strcmp(temp,"s") && strcmp(temp,"S")){
        printf("Voo não registrado, redigite ou digite 's' para sair\n:");
        gets(temp);
    }
    if(strcmp(temp,"s") && strcmp(temp,"S")){
        returnStructFlight((*v),desejada,temp);
        printFlight(*desejada);
        (*v) = deleteListFlight((*v),*desejada);
        insertFlightTerminal(v);
    }else{
        printf("Pressione qualquer tecla para voltar ao menu\n:");
        getchar();
    }
}

void deleteFlightTerminal(Lista_Voo **v){
    int numeroDeVoos = countListFlight((*v));
    char temp[150];
    Flight *desejada = malloc(sizeof(Flight));
    printf("Voos registrados:\n\n");
    printFlightList((*v));
    printf("\nDigite qual voo quer deletar\n:");
    gets(temp);
    while(!isInFlightList((*v),temp) && strcmp(temp,"s") && strcmp(temp,"S")){
        printf("Voo não registrado, redigite ou digite 's' para sair\n:");
       gets(temp);
    }if(strcmp(temp,"s") && strcmp(temp,"S")){
        returnStructFlight((*v),desejada,temp);
        (*v) = deleteListFlight((*v),*desejada);
    }
    if(numeroDeVoos == countListFlight((*v))+1){
        printf("Voo removido com sucesso!\n");
    }else{
        printf("Não foi possível remover o voo\n");
    }
    printf("Pressione qualquer tecla para voltar ao menu\n:");
    getchar();
}

void showFlightTerminal(Lista_Voo **v){
    char temp[150];
    Flight *desejada = malloc(sizeof(Flight));
    printf("Voos registrados:\n\n");
    printFlightList((*v));
    printf("\nDigite qual voo que quer mostrar\n:");
    gets(temp);
    while(!isInFlightList((*v),temp) && strcmp(temp,"s") && strcmp(temp,"S")){
        printf("Voo não registrado, redigite ou digite 's' para sair\n:");
        gets(temp);
    }
    if(strcmp(temp,"s") && strcmp(temp,"S")){
        returnStructFlight((*v),desejada,temp);
        printFlight(*desejada);
    }
    printf("Pressione qualquer tecla para voltar ao menu\n:");
    getchar();
}
void CallFlightTest(){
    system("clear");
    int NumeroTestes = FlightInsertTest(NUM_MESTRE);
    TestFlightReport(NumeroTestes,NUM_MESTRE);
    TerminalFlightTest(NumeroTestes,NUM_MESTRE);
    printf("\n\nClique qualquer tecla para voltar ao menu.");
    getchar();
}

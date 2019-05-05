#ifndef INTERACOESAERONAVE_H
#define INTERACOESAERONAVE_H


#include <string.h>
#include <stdio.h>
#include "lista_aeronave.h"
#include "validacao.h"
#include "estruturas.h"
#include "relatoriotesteaeronave.h"
#define ENTRADALISTAS "/home/lucas/materias_faculdade/IES/ProgramaIES_5_AGORAVAI/entrada.txt"

/* Insere uma aeronave via terminal
 * -> Endereço de ponteiro para lista
 * <- Sem retorno
 * Pré-condição: Nenhuma
 * Pós-condição: Se a aeronave for válido, é inserida na lista
 */ 
void insertPlaneTerminal(Lista_Plane **v);

/* Altera uma aeronave via terminal
 * -> Endereço de ponteiro para lista
 * <- Sem retorno
 * Pré-condição: Nenhuma
 * Pós-condição: Se a aeronave for válida, é inserida na lista
 */
void changePlaneTerminal(Lista_Plane **v);

/* Remove uma aeronave via terminal
 * -> Endereço de ponteiro para lista
 * <- Sem retorno
 * Pré-condição: Nenhuma
 * Pós-condição: A aeronave é removida da lista
 */
void deletePlaneTerminal(Lista_Plane **v);

/* Mostra uma aeronave via terminal
 * -> Endereço de ponteiro para lista
 * <- Sem retorno
 * Pré-condição: Nenhuma
 * Pós-condição: A aeronave é mostrada na tela
 */
void showPlaneTerminal(Lista_Plane **v);

/*
 * Faz testes, e mostra o resultado na tela e em um arquivo txt
 * Pré-condição: Nenhuma.
 * Pós-condição: Nunhuma.
 */
void CallPlaneTest();
/*
 * Lê um arquivo com as entradas.
 * Pré-condição: Nenhuma.
 * Pós-condição: Lista alterada.
 */
void InsertFile(Lista_Cliente **client,Lista_Voo **voo);


#endif // INTERACOESAERONAVE_H

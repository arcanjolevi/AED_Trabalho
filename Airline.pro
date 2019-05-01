TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.c \
    controle.c \
    controleaeronave.c \
    controlecliente.c \
    controlevoo.c \
    gerastruct.c \
    grafico.c \
    interacoesvoo.c \
    lista_aeronave.c \
    lista_cliente.c \
    lista_voo.c \
    menus.c \
    relatoriotesteaeronave.c \
    relatoriotesteclietes.c \
    relatoriotestes.c \
    relatoriotestevoo.c \
    testeaeronave.c \
    testecliente.c \
    testevoo.c \
    validacao.c \
    interacoesaeronave.c \
    interacaocliente.c
    

HEADERS += \
    controle.h \
    controleaeronave.h \
    controlecliente.h \
    controlevoo.h \
    estruturas.h \
    gerastruct.h \
    grafico.h \
    interacoesvoo.h \
    lista.c.autosave \
    lista_aeronave.h \
    lista_cliente.h \
    lista_voo.h \
    menus.h \
    relatoriotesteaeronave.h \
    relatoriotesteclietes.h \
    relatoriotestes.h \
    relatoriotestevoo.h \
    testeaeronave.h \
    testecliente.h \
    testevoo.h \
    validacao.h \
    interacoesaeronave.h \
    interacaocliente.h
    

DISTFILES += \
    Parte I.pdf \
    Parte II.pdf \
    Dosumentação do Projeto.odt \
    Airline.pro.user \
    Airline.pro.user.a211861.4.8-pre1 \
    TRABALHO_IES_6.pro.user \
    clientes.txt \
    Documentação.txt \
    modeloComentarios.txt \
    planes.txt \
    RelatorioAeronave.txt \
    RelatorioClient.txt \
    RelatorioTestes.txt \
    teste.txt \
    voos.txt \
    Parte I.pdf \
    Parte II.pdf \
    Dosumentação do Projeto.odt \
    Airline.pro.user \
    Airline.pro.user.a211861.4.8-pre1 \
    TRABALHO_IES_6.pro.user \
    clientes.txt \
    Documentação.txt \
    modeloComentarios.txt \
    planes.txt \
    RelatorioAeronave.txt \
    RelatorioClient.txt \
    RelatorioTestes.txt \
    teste.txt \
    voos.txt

SUBDIRS += \
    Airline.pro \
    TRABALHO_IES_6.pro \
    Airline.pro \
    TRABALHO_IES_6.pro

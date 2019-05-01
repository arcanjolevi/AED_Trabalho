TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.c \
    controle.c \
    gerastruct.c \
    grafico.c \
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
    controlevoo.c \
    controlecliente.c \
    controleaeronave.c \
    interacoesvoo.c

DISTFILES += \
    Parte I.pdf \
    Parte II.pdf \
    Dosumentação do Projeto.odt \
    Airline.pro.user \
    TRABALHO_IES_6.pro.user \
    clientes.txt \
    Documentação.txt \
    main01.txt \
    modeloComentarios.txt \
    planes.txt \
    RelatorioAeronave.txt \
    RelatorioClient.txt \
    RelatorioTestes.txt \
    teste.txt \
    voos.txt \
    voos (copy 1).txt \
    voos (copy 2).txt

SUBDIRS += \
    Airline.pro \
    TRABALHO_IES_6.pro

HEADERS += \
    controle.h \
    estruturas.h \
    gerastruct.h \
    grafico.h \
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
    controlevoo.h \
    controlecliente.h \
    controleaeronave.h \
    interacoesvoo.h

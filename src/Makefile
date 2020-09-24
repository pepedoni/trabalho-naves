# == VARIAVEIS ===
# ================
#
# Podemos declarar algumas variaveis dentro do Makefile (sintaxe similar a bash)
# Isso facilita o seu trabalho caso voce opte trocar alguma versao do
# compilador ou flag para seu processo de compilacao
# Uma variavel com nome VAR eh declarada da seguinte maneira:
# 	VAR=conteudo
# e eh chamada atraves do comando $(VAR)

CC=g++ # compilador, troque para gcc se preferir utilizar C
CFLAGS=-Wall -Wextra # compiler flags, troque o que quiser, exceto bibliotecas externas
EXEC=./tp1.exe # nome do executavel que sera gerado, nao troque
TMPOUT=./tp1.testresult
HEADERS_DIR = ./headers

# === REGRAS =====
# ================
# 
# Aqui declaramos as nossas regras de compilacao.
# Para chamar uma regra, podemos simplesmente digitar
# 	make nome_regra
# Exs.:
# 	make ./tp1
# 	make foo.o
# 	make clean
# Cada regra de compilacao tem a seguinte sintaxe:
#
# NOME_OUTPUT: DEPENDENCIAS
# 	CMD
#
# NOME_OUTPUT eh o nome do arquivo que vai ser gerado (ou qualquer nome caso
# nenhum arquivo seja gerado, ex. clean)
# DEPENDENCIAS sao os nomes dos arquivos necessarios para executar essa regra
# de compilacao
# CMD sao os comandos necessarios para executar a regra (por exemplo, hcamar o
# gcc)


$(EXEC): main.cpp nave.o tipoitem.o tipocelula.o pilha.o fila.o lista.o pilhaencadeada.o listaencadeada.o filaencadeada.o  
	$(CC) $(CFLAGS) main.cpp tipoitem.o tipocelula.o nave.o pilha.o fila.o lista.o pilhaencadeada.o listaencadeada.o filaencadeada.o -o $(EXEC)

tipoitem.o: ${HEADERS_DIR}/TipoItem.hpp  ${HEADERS_DIR}/TipoItem.cpp 
	$(CC) $(CFLAGS) -c ${HEADERS_DIR}/TipoItem.cpp -o tipoitem.o

tipocelula.o: ${HEADERS_DIR}/TipoCelula.hpp  ${HEADERS_DIR}/TipoCelula.cpp 
	$(CC) $(CFLAGS) -c ${HEADERS_DIR}/TipoCelula.cpp -o tipocelula.o
	
fila.o: ${HEADERS_DIR}/Fila.hpp  ${HEADERS_DIR}/Fila.cpp 
	$(CC) $(CFLAGS) -c ${HEADERS_DIR}/Fila.cpp -o fila.o

lista.o: ${HEADERS_DIR}/Lista.hpp  ${HEADERS_DIR}/Lista.cpp 
	$(CC) $(CFLAGS) -c ${HEADERS_DIR}/Lista.cpp -o lista.o

pilha.o: ${HEADERS_DIR}/Pilha.hpp  ${HEADERS_DIR}/Pilha.cpp 
	$(CC) $(CFLAGS) -c ${HEADERS_DIR}/Pilha.cpp -o pilha.o

nave.o: ${HEADERS_DIR}/Nave.cpp 
	$(CC) $(CFLAGS) -c ${HEADERS_DIR}/Nave.cpp -o nave.o

pilhaencadeada.o: ${HEADERS_DIR}/PilhaEncadeada.hpp  ${HEADERS_DIR}/PilhaEncadeada.cpp 
	$(CC) $(CFLAGS) -c ${HEADERS_DIR}/PilhaEncadeada.cpp -o pilhaencadeada.o 

listaencadeada.o: ${HEADERS_DIR}/ListaEncadeada.hpp  ${HEADERS_DIR}/ListaEncadeada.cpp 
	$(CC) $(CFLAGS) -c ${HEADERS_DIR}/ListaEncadeada.cpp -o listaencadeada.o  

filaencadeada.o: ${HEADERS_DIR}/FilaEncadeada.hpp  ${HEADERS_DIR}/FilaEncadeada.cpp 
	$(CC) $(CFLAGS) -c ${HEADERS_DIR}/FilaEncadeada.cpp -o filaencadeada.o  
 
test: $(EXEC)
	@bash run_tests.sh $(EXEC) $(TMPOUT)

clean: 
	rm -rf nave.o tipoitem.o tipocelula.o pilha.o fila.o lista.o pilhaencadeada.o listaencadeada.o filaencadeada.o  

clean_windows:
	del nave.o tipoitem.o tipocelula.o pilha.o fila.o lista.o pilhaencadeada.o listaencadeada.o filaencadeada.o  
# === OUTROS =====
# ================
# 
# Para mais informacoes sobre o Makefile, procure os monitores ou consulte
# outras referencias disponiveis na internet como:
# https://opensource.com/article/18/8/what-how-makefile

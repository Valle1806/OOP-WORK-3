CPP = g++

.SUFFIXES: .cpp

.cpp .o:
	$(CPP) -c $<
	
all: \
	objeto \

objeto: main.o Clave.o ClaveImagen.o ClaveLlave.o ClaveTexto.o
	g++ -o exe *.o

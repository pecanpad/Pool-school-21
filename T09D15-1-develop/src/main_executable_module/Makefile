CC=gcc
CFLAGS=-Wall -Werror -Wextra
GFLAGS=-lm
SRC=main_executable_module.c \
 	../data_libs/data_io.c \
    ../data_libs/data_stat.c \
    ../data_module/data_sort.c \
	../data_module/data_process.c \
	../yet_another_decision_module/decision.c
OBJ=$(SRC: .c=.o)
build=../../build/Quest_3

all: build

build: $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o ../../build/Quest_3 $(GFLAGS)

$(OBJ): $(SRC)
	$(CC) $(CFLAGS) -c $(SRC) $(OBJ)

build_with_static: data_stat.a
	$(CC) $(CFLAGS) main_executable_module.c \
	../data_libs/data_io.c \
	../data_module/data_sort.c \
	../data_module/data_process.c \
	../yet_another_decision_module/decision.c \
	-L. -ldata_stat -o ../../build/Quest_5 -lm

data_stat.a: ../data_libs/data_stat.c
	$(CC) $(CFLAGS) -c ../data_libs/data_stat.c -o data_stat.o
	ar rcs libdata_stat.a data_stat.o

clean:
	rm -f *.o $(build)

rebuild: clean all

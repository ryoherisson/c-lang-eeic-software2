CC = gcc

BINDIR = ./bin
INCLUDE = ./include
LIBDIR = ./lib
SRCDIR = ./src

CFLAGS = -Wall -I$(INCLUDE)
LDFLAGS = -L$(LIBDIR)
LDLIBS = -lqsort

SRC = $(SRCDIR)/main.c
OBJ = $(SRCDIR)/qsort_lib.o
LIB = $(LIBDIR)/libqsort.a

TARGET = $(BINDIR)/qsort

$(TARGET): $(SRC) $(LIB)
		$(CC) $(CFLAGS) -o $@ $< $(LDFLAGS) $(LDLIBS)

$(LIB): $(OBJ)
		$(AR) rsv $@ $^

.PHOINY: tmpclean clean

tmpclean:
		rm -f $(SRCDIR)/*~
clean: tmpclean
		rm -f $(RARGET) $(LIB) $(OBJ)

# # オブジェクトファイルの生成
# gcc -I./include -c -o src/qsort_lib.o src/qsort_lib.c 
# # ar でライブラリにする
# ar rsv lib/libqsort.a src/qsort_lib.o
# # コンパイル
# gcc -o bin/qsort -I./include src/main.c -L./lib -lqsort 

# *~ はEmacsなどのエディタが生成するバックアップファイル（ファイル名に~がつく）を表しています。
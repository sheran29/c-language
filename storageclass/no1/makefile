#make file for no1
cc=gcc
qlab:no1.c extern.c static.c
  $(cc) -o qlab no1.c extern.c static.c
no1.o:no1.c
  $(cc) -c -o no1.o
extern.o:extern.c
  $(cc) -c -o extern.o
static.o:static.c
  $(cc) -c -o static.o
clean:
  rm-rf*.o qlab

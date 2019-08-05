

CALC  = /inst/ee/ee160/ee160/Code.lect/Calc
CHAP4 = /inst/ee/ee160/ee160/Code.text/Chap4

swap: swap.o swaptest.o
	cc swap.o swaptest.o -o swap -lcurses

swapbig: swap.o swap_big.o driver1.o
	cc swap.o swap_big.o driver1.o -o swapbig -lcurses

reorder: swap.o swap_big.o reorder.o driver2.o
	 cc swap.o swap_big.o driver2.o reorder.o -o reorder -lcurses

swap.o: swap.h

swap_big.o: swap_big.h

reorder.o: reorder.h

clean:
	rm -f *.o

driver0: intit.o 

tabblephis: driver1.o display.o move.o ship_random.o ships.o ship_init.o menu.o
	cc driver1.o display.o move.o ship_random.o ships.o ship_init.o menu.o -o tabblephis -lcurses

random: display.o random.o ships.o check.o 
	cc display.o random.o ships.o check.o -o random -lcurses

ships.o: ships.h

move.o: move.h

display.o: display.h

random.o: random.h

clean:
	mv display.o display.sav
	rm -f *.o
	mv display.sav display.o

real_clean: clean
	rm  -f driver1 random

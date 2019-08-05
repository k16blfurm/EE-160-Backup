averages: averages.o avgutil.o
	cc averages.o avgutil.o -o averages -I.

water: water.o reading.o meter.o
	cc water.o reading.o meter.o -o water -I.

clean:
	rm  -f *.o

real_clean: clean
	rm  -f trig a.out core



# makefile for Lab 11

# target to create all executables for this lab
trig: trig.o driver1.o util.o exponent.o exp.o
	cc trig.o driver1.o util.o exponent.o exp.o -o trig 
#complete the dependency and action lines for the following targets 

# source file dependencies
#  You should fill these in and add any additional targets you need

driver1.o: exponent.h trig.h util.h 

trig.o: trig.h

util.o: util.h

exponent.o: exponent.h

exp.o: exp.h

# utility targets

clean:
	rm  -f *.o
        
real_clean: clean
	rm  -f trig a.out core


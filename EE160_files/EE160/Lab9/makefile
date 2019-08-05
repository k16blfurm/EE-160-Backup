# target to make all programs for Lab 9
all: mygrader mygrader2 countgrades

# Problem 1 - grader programs
#	complete the dependency and action lines for your filenames
mygrader:
	cc  -o grader.c assign_grade.c -o mygrader

mygrader2:
	cc  -o grader1.c assign_grade1.c -o mygrader2

assign_grade.c: assign_grade.h

assign_grade1.c: assign_grade1.h

# Problem 2 - grade counter
countgrades:
	cc countgrades.c -o countgrades

# source file dependencies
#	add target lines showing dependencies for your .o files

# utility targets

clean:
	rm -f *.o

real_clean: clean
	rm -f  mygrader mygrader2 countgrades


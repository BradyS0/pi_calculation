main: piCalc

piCalc:
	clang piCalc.c -o piCalc

run:
	./piCalc

clean:
	rm piCalc
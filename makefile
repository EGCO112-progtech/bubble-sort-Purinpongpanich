compile: main.c 
	 gcc  main.c -o test

runSelection: selection
	  ./selection

run: bubble
	 ./test


clean: test
	 rm test

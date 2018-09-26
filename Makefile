dbgTest.out: main.c test.c
	# gcc -g -o dbgTest.out main.c test.c
	ssh paramra@192.168.1.110 'cd /home/paramra/share/dbgTest && gcc -g -o dbgTest.out main.c test.c'

clean:
	rm -f 
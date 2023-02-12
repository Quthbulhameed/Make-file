trie_nombre : trie_nombre.o main.o
	gcc -o trie_nombre trie_nombre.o main.o
    
    
trie_nombre.o : trie_nombre.c
	gcc -o trie_nombre.o -c trie_nombre.c -W -Wall -ansi -std=c99
    
    	
main.o : main.c
	gcc -o main.o -c main.c -W -Wall -ansi -std=c99    
    


# Variables to control Makefile operation

CC = g++
CFLAGS = -Wall -g

n-ary-tree-preorder-traversal: n-ary-tree-preorder-traversal.o
	$(CC) $(CFLAGS) -o n-ary-tree-preorder-traversal n-ary-tree-preorder-traversal.o

n-ary-tree-preorder-traversal.o: n-ary-tree-preorder-traversal.cpp
	$(CC) $(CFLAGS) -c n-ary-tree-preorder-traversal.cpp

clean:
	rm -rf n-ary-tree-preorder-traversal n-ary-tree-preorder-traversal.o

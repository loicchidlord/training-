#Pour compiler exécuter make all
all : TP1_1.c

#Question 1
Q1 : TP1_1.c
	gcc -o TP1_1 TP1_1.c -lm

#Question 4
NR : NewRaph.c
	gcc -o NR NewRaph.c -lm
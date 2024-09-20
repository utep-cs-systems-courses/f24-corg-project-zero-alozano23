#include <stdio.h>
#include "draw.h"

/* Prints a size x size square whose left col is at startCol */
void print_square(int leftCol, int size)
{
  int i, j;
  int endCol = leftCol + size;
  for (int row = 0; row < size; row++){
    int col;
    for (col = 0; col < leftCol; col++) putchar(' ');
    for (       ; col < endCol;  col++) putchar('*');
    putchar('\n');
  }
}

void print_square_horizontal(int leftCol, int size){
	int endCol = leftCol + size;
	for(int col = 0; col < size; col++){
		int row;
		for(row = 0; row < leftCol; row++){
			putchar(' ');
		}
		for(	; row < endCol; row++){
			putchar('*');
		}
		putchar('\n');
	}
}

// Prints a triangle of specified height whose left edge is at col leftCol.
void print_triangle(int leftCol, int size)
{
  for (int row = 0; row <= size; row++) {
    int minCol = leftCol + size - row, maxCol = leftCol + size + row;
    int col;
    for (col = 0; col < minCol; col++) putchar(' ');
    for (       ; col <= maxCol; col++) putchar('*');
    putchar('\n');
  }
}

void print_arrow(int rectCol, int triCol, int size){
	int rectRow = rectCol/2;
	print_triangle(triCol, size);
	if(rectCol >= triCol){print_square(triCol+size-(size/2), rectRow);}
	else{print_square(rectCol+(triCol + size)-(rectRow/2), rectRow);}
	//print_square(rectRow+size-(rectRow/2), rectCol);
	//putchar('\n');
	//print_square_horizontal(rectCol+size-(rectRow/2), rectRow);
}


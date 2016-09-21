/*
 * Random.cpp
 *
 *  Created on: Sep 13, 2016
 *      Author: Kimberly
 */

#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

#ifndef NULL
#define NULL   ((void *) 0)
#endif

bool isSort(int &x, int &y, int &z);
void Swap(int *x, int *y);

int main(){//generates random numbers and sorts them
	srand(time(NULL));
	int x = rand();
	int y = rand();
	int z = rand();

	cout << "Original Numbers: " << x << ' ' << y << ' ' << z << '\n';

	bool isSort(int *x,int *y,int *z);

	cout << "Numbers in order: " << x << ' ' << y << ' ' << z << '\n';

}
void Swap(int *x, int *y){//function to swap numbers if needed
	int temp;
	   temp = *x;
	   *x = *y;
	   *y = temp;
	   return;
}

bool isSort(int &x, int &y, int &z){ //sorts numbers using call by pointer and swap function

	if (x < y){
		if (y < z){
			return true;
	}
	}

	if (x > y) {
	        Swap(&x, &y);
	    }
	    if (x > z) {
	        Swap(&x, &z);
	    }
	    if (y > z) {
	        Swap(&y, &z);
	    }
	    return true;
	}




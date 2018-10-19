#include "myheaders.h"
#include <iostream>
using namespace std;

void bubbleSort(long x[], int size){
	for(int i = 0; i < size-1; i++){
		for(int j = size-1; j > i; --j){
			if(x[j]<x[j-1]){
				swap(x[j],x[j-1]);
			}
		}
	}
}
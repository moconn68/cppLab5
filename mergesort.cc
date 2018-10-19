#include "myheaders.h"
#include <iostream>
using namespace std;


void merge(long x[],int first, int last){
	int mid = (first+last)/2;
	int templen1 = mid-first+1;
	int templen2 = last-mid;
	int temparr1[templen1], temparr2[templen2];	
	int i=0,j=0,k=0;
	for(; i < templen1; i++){
		temparr1[i] = x[first + i];
	}
	for(; j < templen2; j++){
		temparr2[j] = x[mid + j + 1];
	}
	i = 0; j = 0; k = first;
	while(i < templen1 && j < templen2){
		if(temparr1[i] <= temparr2[j]){
			x[k] = temparr1[i];
			i++;
		}
		else{
			x[k] = temparr2[j];
			j++;
		}
		k++;
	}
	while(i < templen1){
		x[k] = temparr1[i];
		i++;
		k++;
	}
	while(j<templen2){
		x[k] = temparr2[j];
		j++;
		k++;
	}
}

void mergeSort(long x[],int first, int last){
	if (first < last){
		int mid = (first+last)/2;
		mergeSort(x, first, mid);
		mergeSort(x, mid + 1, last);
		merge(x, first, last);
	}


}



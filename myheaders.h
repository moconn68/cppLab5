// DO NOT forget to add the prototypes for your BubbleSort, MergeSort
// and Merge functions below!


#include <string>
#include <unistd.h>
#define MAXSIZE	 2100000

using namespace std;

void	printmenu();
void	printarray(long data[], long size);
int		readfile(string infilename, long d1[], long d2[]);
int		writefile(long data[], long size, string outfilename);
void	swap(long& x, long& y);
//prototypes for sorting algorithms
void	bubbleSort(long x[], int size);
void	mergeSort(long x[], int first, int last);
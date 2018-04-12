#include "search_algos.h"
/**
* binary_search - Entry point
* @array: array of ints that are sorted
* @size: size of array
* @value: what to search for
**/
int binary_search(int *array, size_t size, int value)
{
  size_t start, end, mid, i;
  
  start = 0;
  end = size - 1;
  mid = (start + end) / 2;
  while(start <= end)
    {
	  		printf("Searching in array:");
	  		for (i = start; i <= end; ++i)
	  		{
	    			printf(" %d", array[i]);
	    			if (i < end)
	      				printf(",");
	    			else
	      				printf("\n");
	  		}
			if (array[mid] == value)
			  return(mid); 

			if (array[mid] < value)
			  start = mid+1;
			else if (array[mid] > value)
			  end = mid-1;
		        mid = (start + end) / 2;
		}
		return (-1);
}

int partition(int * array, int left, int right, int pivot)
{
	while(left <= right)
	{
		while(array[left] < pivot)
		{
			left++;
		}
		while(array[right] > pivot)
		{
			right--;
		}
		
		int temp = array[right];
		array[right] = array[left];
		array[left] = temp;
	
	}
	return left;
}
void quickSort(int * array, int left, int right)
{
	if(left >= right)
	{
		return;
	}
	
	int pivot = array[(left + right)/2];
	printf("Pivot is %d\n", pivot);
	int index = partition(array,left,right,pivot);
	quickSort(array, left, index - 1);
	quickSort(array,index, right);
}
void sort (int * array, int length)
{
    printf("Using QuickSort\n");
	quickSort(array,0,(length - 1));
}

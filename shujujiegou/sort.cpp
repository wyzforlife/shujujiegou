int partition(int a[], int low, int high) 
{
	int pivot = a[low];
	while (low < high) {
		while (a[high] >= pivot&&low<high)high--;
		a[low] = a[high];
		while (a[low] <= pivot&&low<high)low++;
		a[high] = a[low];
	}
	a[low] = pivot;
	return low;
}
void QuickSort(int a[], int low, int high)
{
	if (low < high) {
		int pivotpos = partition(a, low, high);
		QuickSort(a, low, pivotpos-1);
		QuickSort(a, pivotpos + 1, high);
	}
}
int cbinsearch(int *arr,int size, int value)
{
  int left = 0;
	int right = size - 1;
	int k = 0;
	while (left <= right)
	{
		int mid = (right + left) / 2;

		if (arr[mid] == value)
		{
             k++;
			for (int i = mid + 1; i < size && arr[i] == value; i++)
			{
				k++;
			}
			for (int i = mid - 1; i >= 0 && arr[i] == value; i--)
				k++;
			break;
		}

		else if (arr[mid] < value) 
			left = mid + 1;
	   else  
	   {
		   right = mid - 1;
	   }
	}
	return k;
}

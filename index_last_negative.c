int index_last_negative(int arr[20])
{
	unsigned i;

       	for(i = (sizeof(arr)/sizeof(arr[0]))-1; i >=0; --i)
	{
		printf("i=%d\n", i);
		if(arr[i] < 0)
			return arr[i];
	}
}

void bubblesort( int *const array,int size)
{
	int pass,j,hold;
	for(pass=0;pass<size-1;++pass)
	{
		for(j=0;j<size-1;++j)
		{
			if(array[j]>array[j+1])
			{
					hold=array[j];
	                array[j]=array[j+1];
	                array[j+1]=hold;
				
			}
		}
	}
	return;
}

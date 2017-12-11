int main()
{
	int i, j, num, div, r, d, flag, t, max;
	int arr[10000];
	t = 0;
	for (i = 999; i >= 100; --i)
	{
		for (j = 999; j >= 100; --j)
		{
			num = i * j;
			if (num >= 100000)
				div = 100000;
			else
				div = 10000;
			flag = 0;
			while(num)
			{
				r = num % 10;
				d = num / div;
				if(r != d)
				{
					flag = 1;
					break;
				}
				num %= div;
				num /= 10;
				div /= 100;
			}
			if (flag == 0)
			{
				//printf("%d ", i * j);
				arr[t] = i * j;
				t++;
			}
		}
	}
	printf("t is: %d\n", t);
	for (i = 0; i < t; ++i)
	{
		if (max < arr[i])
			max = arr[i];
	}
	printf("Max: %d\n", max);
	return 0;
}

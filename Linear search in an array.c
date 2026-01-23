#include<stdio.h>
void main() {
	int n, key, pos = 0, flag = 0;
	int a[100];
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
		{
			scanf("%d",&a[i]);
		}
	scanf("%d", &key);
	for(int i = 0; i < n; i++)
		{
			if(a[i] == key)
			{
				flag = 1;
				pos = i;
				break;
			}
		
	
	
	
	
	
	
	
	
	
	}
	if (flag == 1) {
		printf("found at position %d\n", pos);
	} else {
		printf("%d not found\n", key);
	}
}

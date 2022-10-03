//淇濆瓨涓€涓�10浠ュ唴鏁存暟鐨勬墍鏈夌害鏁�
#include <stdio.h>
int main()
{
	int a[10],n,i,count = 0;
	printf("杈撳叆涓€涓暣鏁�(<=10):");
	scanf("%d",&n);
	
	for(i = 1;i<=n;i++)
		if(n%i==0){
		a[count] = i;
		count++;
	}
	printf("绾︽暟涓�:\n");
	for(i = 0;i<count;i++)
		printf("%6d",a[i]);
	
	return 0;
}
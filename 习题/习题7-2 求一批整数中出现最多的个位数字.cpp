#include<stdio.h>
const int LEN=10; 
int main(void)
{
	int N;
	int i;
	int a;
	int count =0;
	int max=0; 
//	int a[1000]; 	
	int num[10]={0}; 
	scanf("%d",&N);
	for(i=0;i<N;i++)
	{
		scanf("%d",&a);

		while(a>0)
		{
			num[a%10]++;
			a=a/10;
		}
	}
	
	max=num[0];  //输出最大数字的个数 
	for(i=1;i<10;i++)
	{
		if(num[i]>max)
		max=num[i];
	}
	printf("%d:",max);
	
	
	for(i=0;i<10;i++)
	{
		if(num[i]==max)
		printf(" %d",i);
	}

	
	return 0;
	
}
//	a[N]='\0';
//	for(i=0;i<N;i++)
//		while(a[i]/10>0)
//		{
//			raminder=a[i]%10;
//			switch(digit%10){
//        		case 0: num[0]++; break; 
//        		case 1: num[1]++; break;
//        		case 2: num[2]++; break;
//        		case 3: num[3]++; break;
//        		case 4: num[4]++; break;
//        		case 5: num[5]++; break;
//        		case 6: num[6]++; break;
//        		case 7: num[7]++; break;
//        		case 8: num[8]++; break;
//        		case 9: num[9]++; break;
//			}		
//	
//			a[i]=a[i/10]
//		}	
//	
//	return 0;
//	
//}

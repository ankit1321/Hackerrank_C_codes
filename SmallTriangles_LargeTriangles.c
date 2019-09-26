#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;
void sort_by_area(triangle* tr, int n) {
    float a[n];
	triangle *temp=malloc(sizeof(triangle));
    int i,j;
    float tem,tem1,p;
    //long tem;
    for(i=0;i<n;i++)
    {
        p=(float)(tr[i].a+tr[i].b+tr[i].c)/2;
        //p=(float)7/3;
        //printf("%f ",p);
        tem=p*(p-(float)tr[i].a)*(p-(float)tr[i].b)*(p-(float)tr[i].c);
        a[i]=sqrt(tem);
        //printf("%f ",a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[i])
            {
                tem1=a[j];
                a[j]=a[i];
                a[i]=tem1;
                temp[0].a=tr[i].a;
                temp[0].b=tr[i].b;
                temp[0].c=tr[i].c;
                tr[i].a=tr[j].a;
                tr[i].b=tr[j].b;
                tr[i].c=tr[j].c;
                tr[j].a=temp[0].a;
                tr[j].b=temp[0].b;
                tr[j].c=temp[0].c;
            }
        }
    }
    //for(i=0;i<n;i++)
       // printf("%f ",a[i]);
    /**
	* Sort an array a of the length n
	*/
}

int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}
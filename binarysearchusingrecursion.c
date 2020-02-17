#include<stdio.h>
void binarysearch(signed int a[],int key,int l,int r)
{
    int mid;
    if(l<=r)
    {
        mid=(l+r)/2;
        if(key==a[mid])
        {
            printf("item found %d location",mid+1);
        }
        else if(key<a[mid]&&l>=1)
        {
          binarysearch(a,key,l,mid-1);
        }
        else if(key>a[mid]&&l<r)
        {
          binarysearch(a,key,mid+1,r);
        }
        else{
                if(l==0)
                printf("item not found");
            }

    }
    if(key!=a[mid]&&l==r)
            printf("item not found");

}
int main()
{
    signed int a[]={-7,-5,1,2,3,4,58,90},key;
    int size=sizeof(a)/sizeof(a[0]);
    int l=0,r=size-1;
    scanf("%d",&key);
    binarysearch(a,key,l,r);
    return 0;
}

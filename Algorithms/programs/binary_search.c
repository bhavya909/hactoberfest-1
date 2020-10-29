/**********Program of Binary Search**********/
/*********Author : Abhishek Kumar ***********/
/********************************************/
#include<stdio.h>
void list(int a[10], int n, int key)
{
  int c=0,mid;
  int low=0;
  int high = n-1;
  while (low<=high)
  {
      mid = (low+high)/2;
      if (a[mid]==key)
      {
          printf("Element found at index %d.\n",mid);
          c=1;
          break;
      }
      else
      {
          if (key<a[mid])
          {
              high = mid-1;
          }
          else
          {
              low = mid+1;
          }
      }
  }
  if (c==0)
  {
    printf("Element not found.\n");
  }
}
/*********************************************/
int main()
{
    int a[10]={10,20,30,40,50,60,70,80,90,100};
    int n = 10;
    list(a,n,20); /**1**/
    list(a,n,35); /**2**/
    list(a,n,60); /**3**/
}
/**********************************************/
/**********************************************
algorithm:
ALGORITHM BinarySearch( a[] ,n, key)
BEGIN: Low = 0
       High = n-1
       while low<=high DO
         mid = (low+high)/2
         IF a[mid]==key THEN
           RETURN mid
         ELSE
           IF key<a[mid] THEN
             High = mid -1
           ELSE
             Low = mid+1
        RETURN -1
END;
***********************************************/
/**********************************************
Output:
1: Element found at index 1.
2: Element not found.
3: Element found at index 5.
***********************************************/

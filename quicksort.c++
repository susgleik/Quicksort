#include<iostream>
#include<stdlib.h>
using namespace std;

void quicksort(int *,int ,int );

int main()
{
 //By-Angel Hernandez
  int *a,s,i;

  cout<<"Ingrese la cantidad de digitos que quiere: \n";
    cin>>s;

    a=(int*)malloc(s*sizeof(int));

    //cout<<"Ingrese digito: ";
    for(i=0;i<s;i++)
    {
   cout<<"Ingrese digito "<<i+1<<" :";
     cin>>a[i];
  }
  quicksort(a,0,s-1);
    cout<<"\nArray ordenado: \n\n";
    for(i=0;i<s;i++)
    cout<<a[i]<<" ";
}

void quicksort(int a[],int first,int last)
{
  int pivot,j,temp,i;

      if(first<last)
   {
         pivot=first;
         i=first;
         j=last;

         while(i<j)
   {
             while(a[i]<=a[pivot]&&i<last)
             i++;
             while(a[j]>a[pivot])
             j--;
               
             if(i<j)
    {
                 temp=a[i];
                  a[i]=a[j];
                  a[j]=temp;
             }
         }

         temp=a[pivot];
         a[pivot]=a[j];
         a[j]=temp;
       
         quicksort(a,first,j-1);
         quicksort(a,j+1,last);

    }
}

//https://www.programmingwithbasics.com/2015/11/write-program-to-quick-sort-using.html

#include<iostream>
#include<stdlib.h>
using namespace std;

void quicksort(int *,int ,int );


void quicksort(int a[],int first,int last)
{
  int pivot,j,temp,i;

      if(first<last)
   {
         pivot=first;
         i=first;
         j=last;
         cout << "\nel elemento pivote es : "<< a[pivot];
         cout << "\nse va a comparar con: " << a[j];

         while(i<j)  //se compara el pibote con el ultimo del array
   {
             while(a[i]<=a[pivot]&&i<last)
             i++;
             cout << "\nel elemento: " <<a[i]<<" se mueve a la derecha";
             
             
             while(a[j]>a[pivot])
             j--;
             
             cout << "\nel elemento: " << a[j]<<" se mueve a la izquierda";
             
               
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

void arraySinOrdenar(int a[], int s){
    int i;
    for (i = 0; i <s; i++)
    cout << a[i] << " ";
    cout << endl;

}



int main()
{
 //By-Angel Hernandez
  int *a,s,i;

  cout<<"Ingrese la cantidad de digitos que quiere: \n";
    cin>>s;

    a=(int*)malloc(s*sizeof(int));

    for(i=0;i<s;i++)
    {
   cout<<"Ingrese digito "<<i+1<<" :" << "\n";
     cin>>a[i];
  }

  cout<< "\narray no ordenado:\n\n";
    arraySinOrdenar(a,s);
    
  quicksort(a,0,s-1);
    cout<<"\n\nArray ordenado: \n\n";
    for(i=0;i<s;i++)
    cout<<a[i]<<" ";


}

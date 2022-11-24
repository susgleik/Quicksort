#include<iostream>
#include<stdlib.h>
using namespace std;

void quicksort (int *, int, int, int);

void quicksort (int a[], int first, int last, int s)
{
  int pivot, j, temp, i;
  if (first < last)		//0 < 5
    {
      pivot = first;
      i = first;
      j = last;

      while (i < j)
	    {
	  while (a[i] <= a[pivot] && i < last)
	    i++;
	  while (a[j] > a[pivot])
	    j--;
	  printf ("[i=%d]:%d [j=%d]:%d pivote: %d \n", i,a[i],j,a[j],pivot);
	  if (i < j)
	    {
	      temp = a[i];
	      a[i] = a[j];
	      a[j] = temp;
	    }
    
	}
     for (int i = 0; i < s; i++)
		{
		  printf ("[%d]", a[i]);
		}
	      cout << endl;
	   printf ("[%d]:%d intercambio [%d]:%d\n", pivot,a[pivot],j,a[j]);
      temp = a[pivot];
      a[pivot] = a[j];
      a[j] = temp;
      printf ("despues\n\n");
      //printf ("i:%d j:%d pivote: %d \n", i,j,pivot);
      for (int i = 0; i < s; i++)
		{
		  printf ("[%d]", a[i]);
		}
	      cout << endl;

      quicksort (a, first, j - 1, s);
      quicksort (a, j + 1, last, s);
    }
}

void arraySinOrdenar(int a[], int s){
    int i;
    for (i = 0; i <s; i++)
    cout << a[i] << " ";
    cout << endl;

}

int main ()
{
  //By-Angel Hernandez
  int *a, s, i;

  cout << "Ingrese la cantidad de digitos que quiere: \n";
  cin >> s;

  a = (int *) malloc (s * sizeof (int));

  //cout<<"Ingrese digito: ";
  for (i = 0; i < s; i++)
    {
      cout << "Ingrese digito " << i + 1 << " :";
      cin >> a[i];
    }
    printf("\n-----------\nInicio: ");
    for(int i=0;i<s;i++)
     {

     printf("[%d]",a[i]);
     }
     cout << endl;
     
     cout<< "\narray no ordenado:\n\n";
    arraySinOrdenar(a,s);
     
  quicksort (a, 0, s - 1, s);
  cout << "\nArray ordenado: \n\n";
  for (i = 0; i < s; i++)
    cout << a[i] << " ";
}

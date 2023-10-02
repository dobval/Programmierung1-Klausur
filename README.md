# Programmierung1-Klausur
Versuche an die Klausur. C Ausgaben und Programmen.

## Klausur 2019-01-26_1
 ### A2) Bubble sort Blockdiagramm
 ```
 #include <stdio.h>

void bubblesort(int a[], int n)// Es steht Bubble sort, aber soll es nicht reverse Bubble sort sein?
{
    int k,t;
    for (int i = 0; i <= n-1; i++)// In dem Blockdiagramm steht es i<n-1
    {
        for (k = n-1; k>-1; k--)// In dem Blockdiagramm steht es k>!
        {
            if(a[k]>a[k-1])
            {
                t=a[k];
                a[k]=a[k-1];
                a[k-1]=t;
            }
        }
    }
    
}

int main() // Soll man die Eingabe auch schreiben? Oder nur die bubblesort() Funktion?
{
    int a[] = {0,9,1,2,8,3,7,4,6,5};
    int n = sizeof(a)/sizeof(a[0]);
    
    bubblesort(a, n);
    
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    
    return 0;
}
```

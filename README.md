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
        for (k = n-1; k>-1; k--)// In dem Blockdiagramm steht es k>1
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

### A4) Funktion d_sum() zum summieren von reellen Zahlen die mindestens zwei mal größer als *p* sind
```
#include <stdio.h>

void d_sum(float k[], int nk, float p, float *sum, int *count)
{
    *sum = 0;
    *count = 0;
    int arrlength = nk;
    for (int i = 0; i<arrlength; i++)
    {
        if (k[i]>=2*p)
        {
            *sum += k[i];
            *count++;
        }
    }
}

int main()
{
    int nk;
    float p;
    printf("Enter nk:");
    scanf("%d", &nk);
    if (nk < 1 || nk > 30)
    {
        printf("error: nk<1 or nk>30!");
        return 0;

    }
    
    float k[nk];
    for (int i = 0; i<nk; i++)
    {
        printf("Enter number [%d]:", i);
        scanf("%f", &k[i]);
    }
    
    printf("Enter p:");
    scanf("%f", &p);
    
    printf("\nRow k:\n");
    for (int i = 0; i < nk; i++) {
        printf("k[%d]: %.2lf\n", i, k[i]);
    }
    
    float sum;
    int count;
    d_sum(k, nk, p, &sum, &count);
    printf("sum: %f\n", sum);
    printf("count: %d", count);
    
    return 0;
}
```

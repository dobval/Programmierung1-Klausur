# Programmierung1-Klausur
Versuche an die Klausur. C Ausgaben und Programmen.
# Fertig: 6.0 :D
## *Wichtig: Blockdiagrammen brauchen keine Ein- oder Ausgabe ("a bit non-sensical")*
## Letzte Tipps:
1. while(1) und if(b==0) break; benutzen statt do-while
2. \n nicht vergessen
3. int count = sum = 0, vor dem Funktionsaufruf
4. void func(float *array, int *sum, int nk...), beim Aufruf: func(array, &sum, nk...)
5. switch-case braucht kein default case
6. bei minimaler Wert Aufgaben nicht vergessen: *min = arr[0]; 
## Klausur *2020-...?*
## Klausur *2021-02-04_1*
## Klausur *2019-01-26_2*
### A2) Blockdiagramm
```
switch(c)
    {
        case 1:
        if (m)
            p=m+c;
            break;
        case 4:
            while (n>0)
                n-=m;
            break;
        default:
            p=0;
            break;
    }
    m=p
```

## Klausur *2019-01-26_1*
***Papierversuch 06.10: ~81 Punkte (5.7)***
 ### A2) Bubble sort Blockdiagramm
 ```
 // Es steht Bubble sort, aber soll es nicht reverse aber soll es nicht reverse Bubble Sort sein
    for (int i = 0; i < n-1; i++)// In dem Blockdiagramm steht es i<n-1
    {
        for (k = n-1; k>1; k--)// In dem Blockdiagramm steht es k>1
        {
            if(a[k]>a[k-1])
            {
                t=a[k];
                a[k]=a[k-1];
                a[k-1]=t;
            }
        }
    }
    

```

### A3) Datenstrom, summieren von bruchzahlen
```
#include <stdio.h>

int main ()
{
  int p, a, b, bruchAnzahl = 0;
  float bruchSumme = 0;
  printf ("Geben Sie p ein: ");
  scanf ("%d", &p);
  do
    {
      printf ("Geben Sie a ein:");
      scanf ("%d", &a);
      printf ("Geben Sie b ein:");
      scanf ("%d", &b);
      if (b != 0)
	{
	  bruchSumme += a / b;
	  if (a / b < p)
	    {
	      bruchAnzahl++;
	    }
	}

    }
  while (b != 0);

  printf ("Summe aller Bruchzahlen: %.2f\n", bruchSumme);
  printf ("Anzahl aller Bruchzahlen < %d: %d", p, bruchAnzahl);
  return 0;
}
```

### A4) Funktion d_sum() zum summieren von reellen Zahlen die mindestens zwei mal größer als *p* sind

<details>
<summary><b>Papierversion (geht es mit printf() in d_sum() oder soll es in main() sein?)</b></summary>
<br>

```
#include <stdio.h>

void d_sum(float a[], float p){
    int n=sizeof(a)/sizeof(a[0]);
    int count = 0;
    float sum = 0;
    for (int i = 0; i<n; i++)
    {
        if (a[i]>p*2)
        {
            count++;
            sum+=a[i];
        }
    }
    printf("SUM: %f\n", sum);
    printf("COUNT: %d\n", count);
}

int main()
{
    int nk=0;
    scanf("%d",&nk);
    
    if (!(nk<=30||nk>0))
    
        return 0;
    
    float p, k[nk];
    scanf("%f", &p);
    for (int i=0;i<nk;i++)
    {
        scanf("%f", &k[i]);
    }
    d_sum(k,p);
    
    return 0;
}
```
</details>

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

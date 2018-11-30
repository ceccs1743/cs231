       //NAME        :ROSHIN ROY
       //ROLL NO     :43
       //PROGRAM NO  :1
       //PROGRAM NAME:SEQUENTIAL SEARCH

       #include <stdio.h>

       int main()
       {
         int n, array[100], c, d, t;

         printf("Enter number of elements\n");
         scanf("%d", &n);

         printf("Enter %d integers\n", n);

         for (c = 0; c < n; c++)
           scanf("%d", &array[c]);

         for (c = 1 ; c <= n - 1; c++) 
         {
           d = c;

           while ( d > 0 && array[d-1] > array[d])
           {
             t  = array[d];
             array[d] = array[d-1];
             array[d-1] = t;

             d--;
           }
         }

         printf("Sorted list in ascending order:\n");

         for (c = 0; c <= n - 1; c++)
         {
           printf("%d\n", array[c]);
         }

         return 0;
       }


       OUTPUT:


       Enter number of elements
       3
       Enter 3 integers
       3
       6
       2
       Sorted list in ascending order:
       2
       3
       6

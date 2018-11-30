            //NAME        :ROSHIN ROY
            //ROLL NO     :43
            //PROGRAM NO  :2
            //PROGRAM NAME:SE

            #include <stdio.h>

            int main()
            {
              int array[100], n, c, d, position, swap;

              printf("Enter number of elements\n");
              scanf("%d", &n);

              printf("Enter %d integers\n", n);

              for (c = 0; c < n; c++)
                scanf("%d", &array[c]);

              for (c = 0; c < (n - 1); c++)
              {
                position = c;

                for (d = c + 1; d < n; d++)
                {
                  if (array[position] > array[d])
                    position = d;
                }
                if (position != c)
                {
                  swap = array[c];
                  array[c] = array[position];
                  array[position] = swap;
                }
              }

              printf("Sorted list in ascending order:\n");

              for (c = 0; c < n; c++)
                printf("%d\n", array[c]);

              return 0;
            }

      OUTPUT :

      Enter number of elements
      5
      Enter 5 integers
      12
      45
      3
      61
      32
      Sorted list in ascending order:
      3
      12
      32
      45
      61

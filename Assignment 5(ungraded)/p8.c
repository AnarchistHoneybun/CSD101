#include <stdio.h>
#include <stdbool.h>

#define MAX 100

bool ortho(int a[][MAX], int m, int n)
{
  if (m != n)
    return false;

  // Multiply A*A^t
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {

      int sum = 0;
      for (int k = 0; k < n; k++)
      {

        // Since we are multiplying with
        // transpose of itself. We use
        // a[j][k] instead of a[k][j]
        sum +=((a[i][k] * a[j][k]));
      }

      if (i == j && sum != 1)
        return false;
      if (i != j && sum != 0)
        return false;
    }
  }

  return true;
}

int main()
{
  int s;
  printf("enter square matrix size(<100)->");
  scanf("%d", &s);
  int a[s][MAX];
  printf("enter matrix elements\n");
  for(int i=0;i<s;i++){
    for(int j=0;j<s;j++){
        printf("(%d,%d):",i+1,j+1);
        scanf("%d",&a[i][j]);
    }
  }

  for(int i=0;i<s;i++){
    for(int j=0;j<s;j++){
            printf("%d ",a[i][j]);
    }
    printf("\n");
  }


  if (ortho(a, s, s))
    printf("Yes");
  else
    printf("No");
  return 0;
}

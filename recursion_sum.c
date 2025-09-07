#include <stdio.h>

//write a recursive function to calculatethe sum of first 'n' natural numbers.

int sum(int);

int sum(int n){
    if (n == 0)
    {
        return 0;
    }

    else if (n == 1)
    {
      return 1;
    }

    else {
        return n + sum(n - 1);
    }

}

int main(){
     int a;
     printf("Enter your nth term: ");
     scanf("%d", &a);
     for (int i = 0; i <= a; i++)
     {
        printf("The sum of %d th term is %d\n", i, sum(i));
     }
     
    return 0;
}
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int marks_summation(int* marks, int number_of_students, char gender) {
  int a[number_of_students],i;
  for(i=0;i < number_of_students ; i++)
  {
      a[i]=*marks+i;
  }int n=number_of_students,sum=0;
  if(gender=='b')
  {
      for(i=0;i<n;i++)
      {
          if(i%2==0)
          {
              sum=sum+a[i];
          }
      }
      
  }
  else
  {
      for(i=0;i<n;i++)
      {
          if(i%2!=0)
          {
              sum=sum+a[i];
          }
      }
      
  }   return sum; 
}

int main() {
    int number_of_students;
    char gender;
    int sum;
  
    scanf("%d", &number_of_students);
    int *marks = (int *) malloc(number_of_students * sizeof (int));
 
    for (int student = 0; student < number_of_students; student++) {
        scanf("%d", (marks + student));
    }
    
    scanf(" %c", &gender);
    sum = marks_summation(marks, number_of_students, gender);
    printf("%d", sum);
    free(marks);
 
    return 0;
}
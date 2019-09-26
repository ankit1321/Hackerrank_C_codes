/*
Contributor name:Ankit Prasad
Date:2nd september 2019
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int marks_summation(int *marks,int n,char g)
{
    int i,temp=0;
    for(i=0;i<n;i++)
    {
        if (g=='b')
        {
            if(!(i%2))
                temp+=marks[i];
        }
        else
        {
            if(i%2)
            temp+=marks[i];
        }
    }
    return temp;
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
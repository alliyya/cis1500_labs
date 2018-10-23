#include <stdio.h>

void setGrades(int num, int *grades);
double classAverage(int num, int *grades);
void printGrades(int num, int *grades);

int main()
{
    int numGrades;
    double average;

    average = 0.0;
    numGrades = 0;

    printf("How many grades will you like to input\n");
    scanf("%d",&numGrades);
   
    int grades[numGrades];
    
    setGrades(numGrades,grades);
    printGrades(numGrades,grades);

    average = classAverage(numGrades,grades);
    printf("The class average was: %.2lf%%\n", average);

    return 0;
}

void setGrades(int num, int *grades)
{
    int i;

    for (i = 0; i < num; ++i)
    {
        printf("Grade of Student #%d: ",i+1);
        scanf("%d",&grades[i]);
    }

}

double classAverage(int num, int *grades)
{
    int i;
    double sum;
    for (i = 0; i < num; i++)
    {
        sum += grades[i];   
    }
    return sum/num;
}

void printGrades(int num, int *grades)
{
    int i;
    printf("\nStudent #\t\tGrade(%%)\n");
    for (i = 0; i < num; ++i)
    {
        printf("Student #%d:\t\t%d\n",i+1,grades[i]);
    }

}

#include <stdio.h>
#include <stdbool.h>


typedef struct{
    char name[50];
    int age;
    float gpa;
    bool isFullTime;
}Student;

int main(){

Student student1 = {"monke", 21, 2.1, true};

printf("Name is %s\n",student1.name);
printf("Age is %d\n",student1.age);
printf("Gpa is %.1f\n",student1.gpa);
printf("Is full time? %s",(student1.isFullTime) ? "Yes" : "No");

return 0;
}
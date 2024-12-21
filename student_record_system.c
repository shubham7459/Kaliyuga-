/*student record system 
auther name : shubham*/
#include<stdio.h>
int main(){
    int no_of_students,student_roll,student_marks;
    char student_name[50];
    printf("Enter no.of student weant to enter :");
    scanf("%d",&no_of_students);
    if(no_of_students <= 0){
        printf("Entered choice is invalid enter number greater then 0");
        return 1;
    }

    for(int i = 0 ; i < no_of_students; i++){
        printf("\nEnter here %d(rollno,name,mark):", i + 1);
        scanf("%d %s %d",&student_roll,student_name,&student_marks);
        printf("Student details %d \nRollno. : %d,\nName : %s,\nMarks : %d",
        i + 1,student_roll,student_name,student_marks);
    }
    
 return 0;
}
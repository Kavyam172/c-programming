#include<stdio.h>
#include<string.h>
//similar to structure
//ek baar mein sirf ek hi element access kr skte hain because saare elements memory address share krte hain
//used to manage the memory better

typedef union Student
{
    int roll;
    int marks;
    char name[20];
} stu;

int main(int argc, char const *argv[])
{
   stu s1;
   s1.roll=1;
   s1.marks=20;
   strcpy(s1.name,"Kavyam"); 
   
   printf("%d\n",s1.roll);
   printf("%d\n",s1.marks);
   printf("%s",s1.name);//yha sirf name shi se print hoga kyunki baaki saare elements corrupt ho jaate hain . the reason is the shared memory

   
   return 0;
}

#include <stdio.h> 
int main() 
{ 
 int phy, chem, bio, math, comp, percentage; 
 printf("Enter your score in Physics subject:"); 
 scanf("%d", &phy); 
 printf("Enter your score in Chemistry subject:"); 
 scanf("%d", &chem); 
 printf("Enter your score in Biology subject:"); 
 scanf("%d", &bio); 
 printf("Enter your score in Mathemactics subject:"); 
 scanf("%d", &math); 
 printf("Enter your score in Computer subject:"); 
 scanf("%d", &comp); 
 percentage = (phy + chem + bio + math + comp) / 5; 
 if (percentage >= 90) 
 { 
 printf("You have secured A Grade."); 
 } 
 
 else if (percentage >= 80) 
 { 
 printf("You have secured B Grade."); 
 } 
 else if (percentage >= 70) 
 { 
 printf("You have secured C Grade."); 
 } 
 else if (percentage >= 60) 
 { 
 printf("You have secured D Grade."); 
 } 
 else if (percentage >= 40) 
 { 
 printf("You have secured E Grade."); 
 } 
 else if (percentage < 40) 
 { 
 printf("You have failed the exam."); 
 } 
 
return 0; 
}

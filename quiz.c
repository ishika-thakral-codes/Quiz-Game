#include<stdio.h>

int main(){
    int answer;
    int score =0;
    printf("WELCOME TO QUIZ GAME!\n");
    
    printf("\n1.What is the capital if India?\n");
    printf("1.Mumbai\n2. Delhi\n3.Jaipur\n4.kolkata\n");
    printf("enter your answer");
    scanf("%d",&answer);
    
    if(answer==2){
        printf("correct\n");
        score++;
    }
    else{
        printf("wrong!\n");
    }
    printf("\n2.What is 5+5?\n");
    printf("1. 8\n2. 9\n3.10\n4. 11\n");
    printf("enter your answer");
    scanf("%d",&answer);
    
    if(answer==3){
        printf("correct!\n");
        score++;
    }
    else{
        printf("wrong!\n");
    }
    printf("\n3.what is 3+4*5\n");
    printf("1. 23\n2.35\n3. 26\n4.34\n");
    printf("enter your answer");
     scanf("%d",&answer);
     if(answer==1){
        printf("correct!\n");
        score++;
    }
    else{
        printf("wrong!\n");
    }
    printf("\n4.Which planet is known as red planet?\n");
    printf("1. earth\n2.venus\n3. mars\n4.jupiter\n");
    printf("enter your answer");
     scanf("%d",&answer);
     if(answer==3){
        printf("correct!\n");
        score++;
    }
    else{
        printf("wrong!\n");
    }
     printf("\n5.how many days are there in a leap year?\n");
    printf("1. 365\n2.364\n3. 366\n4. 360\n");
    printf("enter your answer");
     scanf("%d",&answer);
     if(answer==3){
        printf("correct!\n");
        score++;
    }
    else{
        printf("wrong!\n");
    }
     printf("\n6.Which language are you learning right now?\n");
    printf("1. Java\n2.C\n3. Python\n4. HTML\n");
    printf("enter your answer");
     scanf("%d",&answer);
     if(answer==2){
        printf("correct!\n");
        score++;
    }
    else{
        printf("wrong!\n");
    }
     
     printf("\n7.Which animal is known as the King of the jungle?\n");
    printf("1. Tiger\n2.Lion\n3. elephant\n4. leopard\n");
    printf("enter your answer");
     scanf("%d",&answer);
     if(answer==2){
        printf("correct!\n");
        score++;
    }
    else{
        printf("wrong!\n");
    }
     printf("\n8.Which symbol is udes to end a statement in C?\n");
    printf("1. :\n2.;\n3. !\n4. .\n");
    printf("enter your answer");
     scanf("%d",&answer);
     if(answer==2){
        printf("correct!\n");
        score++;
    }
    else{
        printf("wrong!\n");
    }
     printf("\n9.Which function is used to display output in C?\n");
    printf("1. scanf()\n2.main()\n3. printf()\n4. return()\n");
    printf("enter your answer");
     scanf("%d",&answer);
     if(answer==3){
        printf("correct!\n");
        score++;
    }
    else{
        printf("wrong!\n");
    }
     printf("\n10.Which data type is used to store a single character in C?\n");
    printf("1. int\n2.float\n3. double\n4. char\n");
    printf("enter your answer");
     scanf("%d",&answer);
     if(answer==4){
        printf("correct!\n");
        score++;
    }
    else{
        printf("wrong!\n");
    }
    
    printf("\nYour Total score is: %d\n",score);
    return 0;
}
     
    
     
    
     
    
     
    
    
     
    
    
     
    


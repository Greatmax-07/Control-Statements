#include<stdio.h>
int region;
float age, h1, h2, h3, h4, h5, h6;
float score; 
int main(){
    printf("**Check if you are eligible to apply for Soldier(General Duty)(All Arms)**\n\n");
    printf("Enter your age:");
    scanf("%f",&age);
    scanf("%c",&Age);
    if(age>=17.5&&age<=21.0){
        printf("You fulfill this criteria and may proceed further.\n\n");
        printf("Educational Criteria:\n");
        printf("Enter 10th/matric aggregate score:\n");
        scanf("%f", &score);
        if(score>=45.00){
         printf("You fulfill this criteria and may proceed further.\n\n");
         printf("Regional Criteria:\n");
         printf("For Western Himalayan Region press 1.\n");
         printf("For Eastern Himalayan Region press 2.\n");
         printf("For Western Plains Region press 3.\n");
         printf("For Eastern Plains Region press 4.\n");
         printf("For Central Region press 5.\n");
         printf("For Southern Region press 6.\n");
         scanf("%d", &region);
         if(region==1){
            printf("Enter your height in cms:");
            scanf("%f", &h1);
            if (h1>=163.0){
                printf("You fulfill this criteria and may proceed further for physical tests.\n\n");
            }
            else{
            printf("You do not fulfill the eligibilty criteria.");
        }}
        else if(region==2){
            printf("Enter your height in cms:");
            scanf("%f", &h2);
            if (h2>=160.0){
                printf("You fulfill this criteria and may proceed further for physical tests.\n\n");
            }
            else{
            printf("You do not fulfill the eligibilty criteria.");
        }}
        else if(region==3){
            printf("Enter your height in cms:");
            scanf("%f", &h3);
            if (h3>=170.0){
                printf("You fulfill this criteria and may proceed further for physical tests.\n\n");
            }
            else{
            printf("You do not fulfill the eligibilty criteria.");
        }}
        else if(region==4){
            printf("Enter your height in cms:");
            scanf("%f", &h4);
            if (h4>=169.0){
                printf("You fulfill this criteria and may proceed further for physical tests.\n\n");
            }
            else{
            printf("You do not fulfill the eligibilty criteria.");
        }}
        else if(region==5){
            printf("Enter your height in cms:");
            scanf("%f", &h5);
            if (h5>=168.0){
                printf("You fulfill this criteria and may proceed further for physical tests.\n\n");
            }
            else{
            printf("You do not fulfill the eligibilty criteria.");
        }}
        else if(region==6){
            printf("Enter your height in cms:");
            scanf("%f", &h6);
            if (h6>=166.0){
                printf("You fulfill this criteria and may proceed further for physical tests.\n\n");
            }
            else{
            printf("You do not fulfill the eligibilty criteria.");
        }}
        else {
            printf("Invalid Input.");
        }
         
        }
         else{
            printf("You do not fulfill the eligibilty criteria.");
        }
        }
        else{
            printf("You do not fulfill the eligibilty criteria.");
        }
        return 0;
    }

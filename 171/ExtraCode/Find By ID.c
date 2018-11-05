#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char x[20];
    printf("Enter your ID number: ");
    line7:
    scanf("%s",&x);
    int size = strlen(x);
    if( size == 10 || size == 11)
    {
        if(size == 11)
        {
            if((x[0]=='s' || x[0]=='S') && (x[1]=='t' || x[1]== 'T'))
            {
                printf("Sorry ! It is your Library ID please enter NSU ID: ");
                goto line7;
            }
            else
            {
                printf("It does not match any ID of NSU please enter a valid ID: ");
                goto line7;
            }
        }
        else
        {
            system("CLS");
            printf("Welcome ! Here are some information about this ID");
            printf("\n\n\n\n");
            printf("Admit Year: 20%c%c\n",x[0],x[1]);
            char semester[20],pepar[10],program[10];
            if(x[2]== '1'){char semester[20]="Spring";printf("Semester: %s\n",semester);}
            if(x[2]== '2'){char semester[20]="Summer";printf("Semester: %s\n",semester);}
            if(x[2]== '3'){char semester[20]="Fall";printf("Semester: %s\n",semester);}
            printf("Test Pass: %c%c%c%c\n",x[3],x[4],x[5],x[6]);
            if(x[8]== '4')
               {
                   if(x[9]== '2'){char program[20]="CSE";printf("Program: %s\n",program);}
                   if(x[9]== '3'){char program[20]="EEE";printf("Program: %s\n",program);}
                   if(x[9]== '4'){char program[20]="ETE";printf("Program: %s\n",program);}
               }
            if(x[8]== '3')
               {
                   if(x[9]== '0'){char program[20]="BBA";printf("Program: %s\n",program);}
               }
            if(x[7]== '6'){char pepar[20]="No";printf("Transcript Submission: %s\n",pepar);}
            if(x[7]== '0'){char pepar[20]="Yes";printf("Transcript Submission: %s\n",pepar);}
            printf("\n\n\n\n\n\n\n\n");
            printf(" Enter 'E' to exit !\n");
            printf("\n\n\n\n\n\n");
            /*
            printf("Admit Semester: %s\n",semester);
            printf("Admit Year: 20%c%c\n",x[0],x[1]);
            printf("Transcription Status: %s\n", pepar);
            printf("Department: %s", program);
            */
        }
    }
    else
    {
        printf("It does not match any ID of NSU please enter a valid ID: ");
        goto line7;
    }
    return 0;
}

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define count 1000

struct book
{
    char code[20];
    char name[20];
    char date[20];
    int cost;
}b;
int i,seat=60;
void insert_details();
void viewAll();
void find();
void book_ticket();
void old_record();

void main()
{
    printf("                                                  ====================\n");
    printf("                                                  Movie Ticket Booking\n");
    printf("                                                  ====================\n\n\n");
    int x,p,password=8080;
    do
    {
        printf("Enter <1> for Admin or <2> for Visitor: ");
        scanf("%d",&x);
    }
    while(x!=1 && x!=2);
    if(x==1)
    {
        line32:
        printf("Enter Password: ");
        scanf("%d",&p);
        if(p==password)
        {
            int ch;
            do
            {
                printf("\npress <1> insert movie\n");
                printf("press <2> view All Transection\n");
                printf("press <0> Exit\n\n");
                printf("Enter your choice: ");
                scanf("%d",&ch);
                switch(ch)
                {
                    case 1 :
                        insert_details();
                        break;
                    case 2 :
                        old_record();
                        break;
                    case 0 :
                        exit(0);
                        break;
                    default :
                        printf("Wrong choice");
                        break;
                }
            }
            while(ch!=0);
        }
        else
        {
            goto line32;
        }
    }

    if(x==2)
    {
        int ch;
        do
        {
            printf("\npress <1> View all movie\n");
            printf("press <2> Find movie\n");
            printf("press <3> Book Ticket\n");
            printf("press <0> Exit\n\n");
            printf("Enter your choice: ");
            scanf("%d",&ch);
            printf("\n");
            switch(ch)
            {
                case 1 :
                    viewAll();
                    break;
                case 2 :
                    find();
                    break;
                case 3 :
                    book_ticket();
                    break;
                case 0 :
                    exit(0);
                    break;
                default :
                    printf("Wrong choice");
                    break;
            }
        }
        while(ch!=0);
    }
}

void insert_details()
{
    FILE *code,*name,*date,*cost;
    struct book b;
    printf("Enter voice code: ");
    fflush(stdin);
    gets(b.code);
    fflush(stdin);
    printf("Enter name(small letter & use under score if it has space): ");
    gets(b.name);
    fflush(stdin);
    printf("Enter relice date: ");
    gets(b.date);
    printf("Enter ticket price: ");
    scanf("%d",&b.cost);
    code=fopen("code.txt","a");
    name=fopen("name.txt","a");
    date=fopen("date.txt","a");
    cost=fopen("cost.txt","a");
    fprintf(code,"%s\n",b.code);
    fprintf(name,"%s\n",b.name);
    fprintf(date,"%s\n",b.date);
    fprintf(cost,"%d\n",b.cost);
    printf("\n\nRecord insert successfully !\n\n");
    fclose(code);
    fclose(name);
    fclose(date);
    fclose(cost);
}

void find()
{
    struct book b[count];
    FILE *code,*name,*date,*cost;
    code=fopen("code.txt","r");
    for(i=0; i<count; i++)
    {
        if(feof(code)){break;}
        fscanf(code,"%s",b[i].code);
    }

    name=fopen("name.txt","r");
    for(i=0; i<count; i++)
    {
        if(feof(name)){break;}
        fscanf(name,"%s",b[i].name);
    }

    date=fopen("date.txt","r");
    for(i=0; i<count; i++)
    {
        if(feof(date)){break;}
        fscanf(date,"%s",b[i].date);
    }

    cost=fopen("cost.txt","r");
    for(i=0; i<count; i++)
    {
        if(feof(cost)){break;}
        fscanf(cost,"%d",&b[i].cost);
    }

    char ch[50];
    line169:
    fflush(stdin);
    printf("Enter movie Name (small letter & use under score if it has space): ");
    scanf("%[^\n]s",&ch);
    if(name==NULL)
    {
        printf("File does not found !\n");
        exit(1);
    }
    else
    {
        for(i=0; i<count; i++)
        {
            if(strcmp(b[i].name,ch)==0)
            {
                printf("\nMovie Found !\n\n");
                printf("Movie Name: %s\n",b[i].name);
                printf("Code Number: %s\n",b[i].code);
                printf("Release Date: %s\n",b[i].date);
                printf("Price of Ticket: %d\n",b[i].cost);
                break;
            }
        }
        if(i==count)
        {
            printf("\nNo Movie by this name !\n\n");
            goto line169;
        }
    }
    fclose(code);
    fclose(name);
    fclose(date);
    fclose(cost);
 }

void viewAll()
{
    struct book b[count];
    FILE *name;
    name=fopen("name.txt","r");
    for(i=0; i<count; i++)
    {
        if(feof(name)){break;}
        fscanf(name,"%s",b[i].name);
    }
    int j;
    if(name == NULL)
    {
        printf("File not found !\n");
        exit(1);
    }
    else
    {
        for(j=0; j<i-1; j++)
        {
            printf("%d. %s\n",j+1,b[j].name);
        }
    }
    fclose(name);
}

void book_ticket()
{
    struct book b[count];
    FILE *code,*name,*date,*cost,*data;
    code=fopen("code.txt","r");
    for(i=0; i<count; i++)
    {
        if(feof(code)){break;}
        fscanf(code,"%s",b[i].code);
    }

    name=fopen("name.txt","r");
    for(i=0; i<count; i++)
    {
        if(feof(name)){break;}
        fscanf(name,"%s",b[i].name);
    }

    date=fopen("date.txt","r");
    for(i=0; i<count; i++)
    {
        if(feof(date)){break;}
        fscanf(date,"%s",b[i].date);
    }

    cost=fopen("cost.txt","r");
    for(i=0; i<count; i++)
    {
        if(feof(cost)){break;}
        fscanf(cost,"%d",&b[i].cost);
    }

    int seat,amount;
    char nam[20],phone[25],x[50];
    line265:
    printf("\nEnter movie Code: ");
    scanf("%s",x);

    if(code==NULL)
    {
        printf("File does not found !\n");
        exit(1);
    }
    else
    {
        for(i=0; i<count; i++)
        {
            if(strcmp(x,b[i].code)==0)
            {
                printf("\n***Fill details***\n\n");
                printf("Your name: ");
                fflush(stdin);
                scanf("%s",&nam);
                printf("Mobile number: ");
                scanf("%s",&phone);
                printf("Total number of tickets: ");
                scanf("%d",&seat);
                amount=b[i].cost*seat;
                printf("\n****Enjoy movie****\n");
                printf("\nName: %s",nam);
                printf("\nMobile number: %s",phone);
                printf("\nMovie name: %s",b[i].name);
                printf("\nTotal seat: %d",seat);
                printf("\nCost per ticket: %d",b[i].cost);
                printf("\nTotal amount: %d",amount);
                break;
            }
        }
        if(i==count)
        {
            printf("Wrong Code !");
            goto line265;
        }

        data=fopen("data.txt","a");
        if(data==NULL)
        {
            printf("File not found !\n");
        }
        else
        {
            fprintf(data,"Name:%s  Mobile:%s  Seat:%d  Amount:%d\n",nam,phone,seat,amount);
            printf("\n\nRecord insert successful to database file !\n\n");
        }
        fclose(data);
        fclose(code);
        fclose(name);
        fclose(date);
        fclose(cost);
    }
}

void old_record()
{
    char ch;
    FILE *fp;
    fp=fopen("data.txt","r");
    if(fp==NULL)
    {
        printf("file not found !\n");
        exit(1);
    }
    else
    {
        system("cls");
        while((ch = fgetc(fp))!=EOF)
        printf("%c",ch);
    }
    fclose(fp);
}

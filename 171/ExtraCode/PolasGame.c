#include<stdio.h>
int polas_game();
char choice();
int answer(int);

int main()
{
    polas_game();
    return 0;
}

int polas_game()
{
    int x;
    printf("\n                                            ====[ Welcome to Brain Game ]====");
    printf("\n\n***Please read with attentively & press***\n");
    printf("       (We won't store your data !)\n\n");
    do
    {
        printf("1. Please Enter a digit From 1 to 9: ");
        scanf("%d",&x);
    }
    while(x<1 || x>9);
    printf("2. Please add 1 if you pressed odd or add 2 if even");
    printf("\n3. Divide your answer by 2\n4. Then multiple your answer by 9");
    printf("\n5. Then add two digit of your answer");
    printf("\n  *Consider that your answer is 29 do it 2+9=11\n");
    choice();
    return 0;
}
char choice()
{
    char x;
    printf("6. Please enter an alphabet from A to Z :");
    fflush(stdin);
    scanf("%c",&x);
    switch(x)
    {
    char A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z;
    char a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z;
    case 'A':case 'z':case 'I':case 'r':case 'Q':case 'j':case 'Y':case 'b':
        printf("7. Minus 8 from your answer\n8. Convert your answer in english alphabet like as  1=A,26=Z");
        answer(1);
        break;
    case 'B':case 'y':case 'J':case 'q':case 'R':case 'i':case 'Z':case 'a':
        printf("7. Minus 7 from your answer\n8. Convert your answer in english alphabet like as  1=A,26=Z");
        answer(2);
        break;
    case 'C':case 'x':case 'K':case 'p':case 'S':case 'h':
        printf("7. Minus 6 from your answer\n8. Convert your answer in english alphabet like as  1=A,26=Z");
        answer(3);
        break;
    case 'D':case 'w':case 'L':case 'o':case 'T':case 'g':
        printf("7. Minus 5 from your answer\n8. Convert your answer in english alphabet like as  1=A,26=Z");
        answer(4);
        break;
    case 'E':case 'v':case 'M':case 'n':case 'U':case 'f':
        printf("7. Minus 4 from your answer\n8. Convert your answer in english alphabet like as  1=A,26=Z");
        answer(5);
        break;
    case 'F':case 'u':case 'N':case 'm':case 'V':case 'e':
        printf("7. Minus 3 from your answer\n8. Convert your answer in english alphabet like as  1=A,26=Z");
        answer(6);
        break;
    case 'G':case 't':case 'O':case 'l':case 'W':case 'd':
        printf("7. Minus 2 from your answer\n8. Convert your answer in english alphabet like as  1=A,26=Z");
        answer(7);
        break;
    case 'H':case 's':case 'P':case 'k':case 'X':case 'c':
        printf("7. Minus 1 from your answer\n8. Convert your answer in english alphabet like as  1=A,26=Z");
        answer(8);
        break;
    }
    return 0;
}

int answer(x)
{
    switch(x){
    float a;
    case 1:
        printf("\n9. Think a word of fruit that contains 5 alphabet by your answer alphabet\n10. Think a word of a food that contains 3 alphabet & which 1st alphabet is 1st word's last alphabet");
        printf("\nPlease enter any number for answer : ");
        scanf("%f",&a);
        printf("\nFirst answer : Apple & Second answer : Egg");
        break;
    case 2:
        printf("\n9. Think a word of country's name that contains 10 alphabet by your answer alphabet\n10. Think a word of animal that contain 5 alphabet & which 1st alphabet is 1st word's last alphabet");
        printf("\nPlease enter any number for answer : ");
        scanf("%f",&a);
        printf("\nFirst answer : Bangladesh & Second answer : Horse");
        break;
    case 3:
        printf("\n9. Think a word of pet that contain 3 alphabet by your answer alphabet\n10. Think a word of a drink food that contain 3 alphabet & which 1st alphabet is 1st word's last alphabet");
        printf("\nPlease enter any number for answer : ");
        scanf("%f",&a);
        printf("\nFirst answer : Cat & Second answer : Tea");
        break;
    case 4:
        printf("\n9. Think a word of animal that contain 3 alphabet by your answer alphabet\n10. Think a word which is used in football game that contain 4 alphabet & which 1st alphabet is 1st word's last alphabet");
        printf("\nPlease enter any number for answer\n");
        scanf("%f",&a);
        printf("\nFirst answer : Dog & Second answer : Goal");
        break;
    case 5:
        printf("\n9. Think a word of food that contain 3 alphabet by your answer alphabet\n10. Think a word which is used in football game that contain 4 alphabet & which 1st alphabet is 1st word's last alphabet");
        printf("\nPlease enter any number for answer : ");
        scanf("%f",&a);
        printf("\nFirst answer : Egg & Second answer : Goal");
        break;
    case 6:
        printf("\n9. Think a word of social media that contain 8 alphabet by your answer alphabet\n10. Think a word which is used to unlock a lock that contain 3 alphabet & which 1st alphabet is 1st word's last alphabet");
        printf("\nPlease enter any number for answer : ");
        scanf("%f",&a);
        printf("\nFirst answer : Facebook & Second answer : Key");
        break;
    case 7:
        printf("\n9. Think a word which use in football game that contain 4 alphabet by your answer alphabet\n10. Think a word of a electric device that contain 6 alphabet & which 1st alphabet is 1st word's last alphabet");
        printf("\nPlease enter any number for answer : ");
        scanf("%f",&a);
        printf("\nFirst answer : Goal & Second answer : Laptop");
        break;
    case 8:
        printf("\n9. Think a word which need every married women that contain 7 alphabet by your answer alphabet\n10. Think a word of a animal that contain 3 alphabet & which 1st alphabet is 1st word's last alphabet");
        printf("\nPlease enter any number for answer : ");
        scanf("%f",&a);
        printf("\nFirst answer : Husband & Second answer : Dog");
        break;
    }
    printf("\n\nThank you for participant\nIt's created by Polas\n\n");
    return 0;
}

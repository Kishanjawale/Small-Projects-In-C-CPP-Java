#include<stdio.h>
#include<conio.h>

struct Student
{
    int iRollNo;
    char cName[50];
    int iMath;
    int iHistory;
    int iChemistry;
    int iPhysics;
    float fPer;
};

float Percentage(int maths,int histo,int chem,int phy)
{   
    float fPercentage=0.0;
    fPercentage=(maths+histo+chem+phy)/4;
    return fPercentage;
}

int  main()
{
    int iNo=0;
    int iCnt=0;
    float fper=0.0;
    printf("Number of Student:");
    scanf("%d",&iNo);
    struct Student S[iNo];
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("Enter the Roll no:\n");
        scanf("%d",&(S[iCnt].iRollNo));

        printf("Enter the Name  no:\n");
        scanf("%s",&(S[iCnt].cName));

        printf("Enter the marks of math:\n");
        scanf("%d",&(S[iCnt].iMath));
        
        printf("Enter the Marks of history:\n");
        scanf("%d",&(S[iCnt].iHistory));
        
        printf("Enter the Marks of physics:\n");
        scanf("%d",&(S[iCnt].iPhysics));

        printf("Enter the Marks of chemistry:\n");
        scanf("%d",&(S[iCnt].iChemistry));
    }

    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
            printf("Roll no:%d\n",S[iCnt].iRollNo);
        
            printf("Name:%s\n",S[iCnt].cName);
        
            printf("Marks of Maths :%d\n",S[iCnt].iMath);
            
            printf("Marks of History:%d\n",S[iCnt].iHistory);
            
            printf("Marks of Chemistry:%d\n",S[iCnt].iChemistry);
            
            printf("Marks of physics:%d\n",S[iCnt].iPhysics);
            
            S[iCnt].fPer=Percentage(S[iCnt].iMath,S[iCnt].iHistory,S[iCnt].iChemistry,S[iCnt].iPhysics);       
            printf("Percentage of Student are:%f\n",S[iCnt].fPer);

        if(S[iCnt].fPer>=40 && S[iCnt].fPer<60)
        {
            printf("Grade D\n");
        }
        
        else if (S[iCnt].fPer>=60 && S[iCnt].fPer<70)
        {
            printf("Grade C\n");
            
        }
        
        else if (S[iCnt].fPer>=70 && S[iCnt].fPer<80)
        {
            printf("Grade B\n");
            
        }
        
        else if (S[iCnt].fPer>=80 && S[iCnt].fPer<90)
        {
            printf("Grade A\n");

        }
        
        else if (S[iCnt].fPer>=90 && S[iCnt].fPer<=100)
        {
            printf("Grade A++\n");
        }

        else if(S[iCnt].fPer<40)
        {
            printf("TRY HARDER NEXT TIME\n YOU CAN DO IT\n");    
        }
        else 
        {
            printf("Invalid Percentage \n");
        }
    }
    
    return 0;
}
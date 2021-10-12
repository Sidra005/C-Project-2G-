#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<string.h>
void gotoxy(int x,int y)
{
    COORD CRD;
    CRD.X=x;
    CRD.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),CRD);
}

void Console_Color()
{
    system("cls");
    system("COLOR code");
    getch();
}

void Worldwide_Covid19_update()
{
    system("cls");
    printf("Covid-19 Worldwide Daily Update\n");
    printf("\nEnter 1 to see worldwide infected cases: ");
    printf("\nEnter 2 to see worldwide recovered cases: ");
    printf("\nEnter 3 to see worldwide death cases: ");
    printf("\nEnter 4 to return main menu: \n");
    printf("Press any word : \n");
    getch();
}
struct corona
{
    char country[25];
    int people;
    int infection;
    int recovery;
    int death;
} covid[200];

void infection()
{
    int i=0;
    FILE*file;
    file=fopen("infection.txt","r");
    for(i=0;i<120;i++)
    {
        fscanf(file,"%s",&covid[i].country);
        printf("\n\t\t\t %s\t\t\t\n",covid[i].country);
        fscanf(file,"%d",&covid[i].infection);
        printf("\n\t\t\t\t%d\t\t\t\t\n ",covid[i].infection);
    }
    fclose(file);
    printf("\nEnter any digit to return main menu\n");
    int n;
    scanf("%d",&n);
    main();
}
void recovery()
{
    int i=0;
    FILE*file;
    file=fopen("recovery.txt","r");
    for(i=0;i<120;i++)
    {
        fscanf(file,"%s",&covid[i].country);
        printf("\n\t\t\t %s\t\t\t",covid[i].country);
        fscanf(file,"%d",&covid[i].recovery);
        printf("\n \t\t\t\t%d\t\t\t\t ",covid[i].recovery);
    }
    fclose(file);
    printf("\nEnter any digit to return main menu\n");
    int n;
    scanf("%d",&n);
    main();
}
void death()
{
    int i=0;
    FILE*file;
    file=fopen("death.txt","r");
    for(i=0;i<120;i++)
    {
        fscanf(file,"%s",&covid[i].country);
        printf("\n \t\t\t%s\t\t\t",covid[i].country);
        fscanf(file,"%d",&covid[i].death);
        printf("\n\t\t\t\t%d\t\t\t\t",covid[i].death);
    }
    fclose(file);
    printf("\nEnter any digit to return main menu\n");
    int n;
    scanf("%d",&n);
    main();
}
void Rate_of_update()
{
    system("cls");
    printf("Worldwide rate of Covid-19 update\n");
    printf("\nEnter 1 to see worldwide infection rate: ");
    printf("\nEnter 2 to see worldwide recovery rate: ");
    printf("\nEnter 3 to see worldwide death rate: ");
    printf("\nEnter 4 to return main menu: \n");
    printf("\nPress Any Number : ");
    getch();
}
struct Rate
{
    char country[25];
    float infrate;
    float recrate;
    float derate;
} corona[200];

void Infection_Rate()
{
 system("cls");
    int i=0;
    FILE*file;
    file=fopen("Infection_Rate.txt","r");
    for(i=0;i<147;i++)
    {
        fscanf(file,"%s",&corona[i].country);
        printf("\n\t\t\t %s\t\t\t\n",corona[i].country);
        fscanf(file,"%f",&corona[i].infrate);
        printf("\n\t\t\t\t%f\t\t\t\t\n",corona[i].infrate);
    }
    fclose(file);
    printf("\nEnter any digit to return main menu\n");
    int n;
    scanf("%d",&n);
    main();
}
void Recovery_Rate()
{
    system("cls");
    int i=0;
    FILE*file;
    file=fopen("Recovery_Rate.txt","r");
    for(i=0;i<147;i++)
    {
        fscanf(file,"%s",&corona[i].country);
        printf("\n\t\t\t%s\t\t\t\n",corona[i].country);
        fscanf(file,"%f",&corona[i].recrate);
        printf("\n\t\t\t\t%f\t\t\t\t\n",corona[i].recrate);

    }
    fclose(file);
    printf("\nEnter any digit to return main menu\n");
    int n;
    scanf("%d",&n);
    main();
}
void Death_Rate()
{
    system("cls");
    int i=0;
    FILE*file;
    file=fopen("Death_Rate.txt","r");
    for(i=0;i<100;i++)
    {
        fscanf(file,"%s",&corona[i].country);
        printf("\n\t\t\t%s\t\t\t\n",corona[i].country);
        fscanf(file,"%f",&corona[i].derate);
        printf("\n\t\t\t\t\%f\t\t\t\t \n",corona[i].derate);
    }
    fclose(file);
    printf("\nEnter any digit to return main menu\n");
    int n;
    scanf("%d",&n);
    main();
}


void Worldwide_Covid19_situation_october_2020()
{
    system("cls");
    printf("Worldwide Covid-19 Situation at October 2020\n");
    printf("\t\t\t\t\t\t\t1.YES\n\n\n\t\t\t\t\t\t\t2. NO\n");
    printf("Press_Any_Word : ");
    getch();
}
void ALGERIA()
{
    printf("\t\t\tTotal Population  44,084,219\n\n");
    printf("\t\t\tTotal Cases  54,402\n\n");
    printf("\t\t\tNew Cases  N/A\n\n");
    printf("\t\t\tTotal Deaths  1,156\n\n");
    printf("\t\t\tTotal Recovered  38,088\n");
}
void ARGENTINA()
{
    printf("\t\t\tTotal Population  45,319,522\n\n");
    printf("\t\t\tTotal Cases  989,680\n\n");
    printf("\t\t\tNew Cases  N/A\n\n");
    printf("\t\t\tTotal Deaths  26,267\n\n");
    printf("\t\t\tTotal Recovered 803,965\n");
}

void ARMENIA()
{
    printf("\t\t\tTotal Population  2,964,913\n\n");
    printf("\t\t\tTotal Cases  65,460\n\n");
    printf("\t\t\tNew Cases  +766	\n\n");
    printf("\t\t\tTotal Deaths  1,091\n\n");
    printf("\t\t\tTotal Recovered  48,208\n");
}
void AUSTRALIA()
{
    printf("\t\t\tTotal Population  25,587,856\n\n");
    printf("\t\t\tTotal Cases   27,399\n\n");
    printf("\t\t\tNew Cases  +8\n\n");
    printf("\t\t\tTotal Deaths  905\n\n");
    printf("\t\t\tTotal Recovered  25,108\n");
}
void AUSTRIA()
{
    printf("\t\t\tTotal Population  9,021,807\n\n");
    printf("\t\t\tTotal Cases  65,927\n\n");
    printf("\t\t\tNew Cases  +1,121	\n\n");
    printf("\t\t\tTotal Deaths  904\n\n");
    printf("\t\t\tTotal Recovered  50,359\n");
}
void BANGLADESH()
{
    printf("\t\t\tTotal Population  165,178,405\n\n");
    printf("\t\t\tTotal Cases  390,206\n\n");
    printf("\t\t\tNew Cases  +1,637	\n\n");
    printf("\t\t\tTotal Deaths  5,681\n\n");
    printf("\t\t\tTotal Recovered  305,599\n");
}
void BRAZIL()
{
    printf("\t\t\tTotal Population  213,011,598\n\n");
    printf("\t\t\tTotal Cases  5,237,961\n\n");
    printf("\t\t\tNew Cases  +2,617	\n\n");
    printf("\t\t\tTotal Deaths  153,982\n\n");
    printf("\t\t\tTotal Recovered 4,650,030\n");
}
void BAHRAIN()
{
    printf("\t\t\tTotal Population  1,718,533\n\n");
    printf("\t\t\tTotal Cases  77,902\n\n");
    printf("\t\t\tNew Cases  N/A\n\n");
    printf("\t\t\tTotal Deaths  301\n\n");
    printf("\t\t\tTotal Recovered  74,320	\n");
}
void BELGIUM()
{
     printf("\t\t\tTotal Population  11,604,776\n\n");
    printf("\t\t\tTotal Cases  222,253\n\n");
    printf("\t\t\tNew Cases  +9,138	\n\n");
    printf("\t\t\tTotal Deaths  10,413\n\n");
    printf("\t\t\tTotal Recovered  21,157\n");
}
void CANADA()
{
     printf("\t\t\tTotal Population  37,840,952\n\n");
    printf("\t\t\tTotal Cases  199,970\n\n");
    printf("\t\t\tNew Cases  +1,822	\n\n");
    printf("\t\t\tTotal Deaths  9,772\n\n");
    printf("\t\t\tTotal Recovered  168,699\n");
}
void CHILE()
{
     printf("\t\t\tTotal Population  19,165,205\n\n");
    printf("\t\t\tTotal Cases  493,305\n\n");
    printf("\t\t\tNew Cases  +1,545	\n\n");
    printf("\t\t\tTotal Deaths  13,676\n\n");
    printf("\t\t\tTotal Recovered  465,021\n");
}
void CHINA()
{
     printf("\t\t\tTotal Population  1,439,323,776\n\n");
    printf("\t\t\tTotal Cases  85,685\n\n");
    printf("\t\t\tNew Cases  +13	\n\n");
    printf("\t\t\tTotal Deaths  4,634\n\n");
    printf("\t\t\tTotal Recovered  80,802\n");
}
void COLOMBIA()
{
     printf("\t\t\tTotal Population  65,317,031\n\n");
    printf("\t\t\tTotal Cases  910,277\n\n");
    printf("\t\t\tNew Cases  +13,243	\n\n");
    printf("\t\t\tTotal Deaths  33,623\n\n");
    printf("\t\t\tTotal Recovered  104,696\n");
}
void ECUADOR()
{
     printf("\t\t\tTotal Population  17,722,290\n\n");
    printf("\t\t\tTotal Cases  153,423\n\n");
    printf("\t\t\tNew Cases  +134	\n\n");
    printf("\t\t\tTotal Deaths  12,395\n\n");
    printf("\t\t\tTotal Recovered  134,187\n");
}
void EGYPT()
{
     printf("\t\t\tTotal Population  102,902,076\n\n");
    printf("\t\t\tTotal Cases  105,424\n\n");
    printf("\t\t\tNew Cases  N/A\n\n");
    printf("\t\t\tTotal Deaths  6,120\n\n");
    printf("\t\t\tTotal Recovered  98,247\n");
}
void FRANCE()
{
     printf("\t\t\tTotal Population  65,317,031\n\n");
    printf("\t\t\tTotal Cases  910,277\n\n");
    printf("\t\t\tNew Cases  +13,243	\n\n");
    printf("\t\t\tTotal Deaths  33,623\n\n");
    printf("\t\t\tTotal Recovered  104,696\n");
}
void GERMANY()
{
     printf("\t\t\tTotal Population  83,864,554\n\n");
    printf("\t\t\tTotal Cases  371,666\n\n");
    printf("\t\t\tNew Cases  +4,685	\n\n");
    printf("\t\t\tTotal Deaths  9,885	\n\n");
    printf("\t\t\tTotal Recovered  291,900\n");
}
void INDIA()
{
     printf("\t\t\tTotal Population  1,384,048,939\n\n");
    printf("\t\t\tTotal Cases  7,590,514\n\n");
    printf("\t\t\tNew Cases  +42,276\n\n");
    printf("\t\t\tTotal Deaths  115,163	\n\n");
    printf("\t\t\tTotal Recovered  6,725,219\n");
}
void INDONESIA()
{
     printf("\t\t\tTotal Population  274,384,901\n\n");
    printf("\t\t\tTotal Cases  365,240\n\n");
    printf("\t\t\tNew Cases  +3,373	\n\n");
    printf("\t\t\tTotal Deaths  12,617\n\n");
    printf("\t\t\tTotal Recovered  289,243\n");
}
void IRAN()
{
     printf("\t\t\tTotal Population  84,312,043\n\n");
    printf("\t\t\tTotal Cases  534,631\n\n");
    printf("\t\t\tNew Cases  +4,251	\n\n");
    printf("\t\t\tTotal Deaths  30,712\n\n");
    printf("\t\t\tTotal Recovered  431,360\n");
}
void IRELAND()
{
     printf("\t\t\tTotal Population  4,954,196\n\n");
    printf("\t\t\tTotal Cases  50,993\n\n");
    printf("\t\t\tNew Cases  +1,031	\n\n");
    printf("\t\t\tTotal Deaths  1,852\n\n");
    printf("\t\t\tTotal Recovered  23,364\n");
}
void ISRAEL()
{
     printf("\t\t\tTotal Population  9,197,590\n\n");
    printf("\t\t\tTotal Cases  304,635\n\n");
    printf("\t\t\tNew Cases  +1,526	\n\n");
    printf("\t\t\tTotal Deaths  2,260\n\n");
    printf("\t\t\tTotal Recovered  272,768\n");
}
void ITALY()
{
     printf("\t\t\tTotal Population  60,434,905\n\n");
    printf("\t\t\tTotal Cases  423,578\n\n");
    printf("\t\t\tNew Cases  +9,338	\n\n");
    printf("\t\t\tTotal Deaths  36,616\n\n");
    printf("\t\t\tTotal Recovered  252,959\n");
}
void JAPAN()
{
     printf("\t\t\tTotal Population  126,358,975\n\n");
    printf("\t\t\tTotal Cases  93,127\n\n");
    printf("\t\t\tNew Cases  +471	\n\n");
    printf("\t\t\tTotal Deaths  1,674\n\n");
    printf("\t\t\tTotal Recovered  85,941\n");
}
void KAZAKHSTAN()
{
     printf("\t\t\tTotal Population  18,843,452\n\n");
    printf("\t\t\tTotal Cases  109,508\n\n");
    printf("\t\t\tNew Cases  +102	\n\n");
    printf("\t\t\tTotal Deaths  1,768\n\n");
    printf("\t\t\tTotal Recovered  105,001\n");
}
void KUWAIT()
{
     printf("\t\t\tTotal Population  4,289,261\n\n");
    printf("\t\t\tTotal Cases  116,832\n\n");
    printf("\t\t\tNew Cases  +686	\n\n");
    printf("\t\t\tTotal Deaths  710\n\n");
    printf("\t\t\tTotal Recovered  108,606\n");
}
void LIBYA()
{
     printf("\t\t\tTotal Population  6,898,992\n\n");
    printf("\t\t\tTotal Cases  49,949\n\n");
    printf("\t\t\tNew Cases  +1,159	\n\n");
    printf("\t\t\tTotal Deaths  732\n\n");
    printf("\t\t\tTotal Recovered  27,262\n");
}
void MEXICO()
{
    printf("\t\t\tTotal Population  129,336,175\n\n");
    printf("\t\t\tTotal Cases  851,227\n\n");
    printf("\t\t\tNew Cases  +4,119	\n\n");
    printf("\t\t\tTotal Deaths  86,167\n\n");
    printf("\t\t\tTotal Recovered  619,036\n");
}
void MOROCCO()
{
    printf("\t\t\tTotal Population  37,040,595\n\n");
    printf("\t\t\tTotal Cases  175,749\n\n");
    printf("\t\t\tNew Cases  +2,117	\n\n");
    printf("\t\t\tTotal Deaths  2,976\n\n");
    printf("\t\t\tTotal Recovered  146,421\n");
}
void MYANMAR()
{
    printf("\t\t\tTotal Population  54,519,021\n\n");
    printf("\t\t\tTotal Cases  37,205	\n\n");
    printf("\t\t\tNew Cases  +1,180	\n\n");
    printf("\t\t\tTotal Deaths  914\n\n");
    printf("\t\t\tTotal Recovered  17,568\n");
}
void NEPAL()
{
    printf("\t\t\tTotal Population  29,291,145\n\n");
    printf("\t\t\tTotal Cases  136,036\n\n");
    printf("\t\t\tNew Cases  +3,790\n\n");
    printf("\t\t\tTotal Deaths  757	\n\n");
    printf("\t\t\tTotal Recovered  94,501\n");
}
void NETHERLAND()
{
    printf("\t\t\tTotal Population  17,146,296\n\n");
    printf("\t\t\tTotal Cases  236,226\n\n");
    printf("\t\t\tNew Cases  +7,992	\n\n");
    printf("\t\t\tTotal Deaths  6,768\n\n");
    printf("\t\t\tTotal Recovered  N/A	\n");
}
void OMAN()
{
     printf("\t\t\tTotal Population  5,144,433\n\n");
    printf("\t\t\tTotal Cases  110,594\n\n");
    printf("\t\t\tNew Cases  +641	\n\n");
    printf("\t\t\tTotal Deaths  1,114\n\n");
    printf("\t\t\tTotal Recovered  96,400\n");
}
void PAKISTAN()
{
     printf("\t\t\tTotal Population  222,152,747\n\n");
    printf("\t\t\tTotal Cases  323,452\n\n");
    printf("\t\t\tNew Cases  +433	\n\n");
    printf("\t\t\tTotal Deaths  6,659\n\n");
    printf("\t\t\tTotal Recovered  21,0659\n");
}
void PARAGUAY()
{
     printf("\t\t\tTotal Population  7,158,562\n\n");
    printf("\t\t\tTotal Cases  54,724\n\n");
    printf("\t\t\tNew Cases  N/A\n\n");
    printf("\t\t\tTotal Deaths  1,188\n\n");
    printf("\t\t\tTotal Recovered  36,068\n");
}
void PERU()
{
    printf("\t\t\tTotal Population  33,107,952\n\n");
    printf("\t\t\tTotal Cases  868,675\n\n");
    printf("\t\t\tNew Cases  N/A	\n\n");
    printf("\t\t\tTotal Deaths  33,759\n\n");
    printf("\t\t\tTotal Recovered  779,779\n");
}
void POLAND()
{
    printf("\t\t\tTotal Population  37,834,066\n\n");
    printf("\t\t\tTotal Cases  183,248\n\n");
    printf("\t\t\tNew Cases  +7,482	\n\n");
    printf("\t\t\tTotal Deaths  3,614\n\n");
    printf("\t\t\tTotal Recovered  94,014\n");
}
void PORTUGAL()
{
    printf("\t\t\tTotal Population  10,187,689\n\n");
    printf("\t\t\tTotal Cases  101,860\n\n");
    printf("\t\t\tNew Cases  +1,949	\n\n");
    printf("\t\t\tTotal Deaths  2,198\n\n");
    printf("\t\t\tTotal Recovered  59,966\n");
}
void QATAR()
{
   printf("\t\t\tTotal Population  2,807,805\n\n");
    printf("\t\t\tTotal Cases  129,671\n\n");
    printf("\t\t\tNew Cases  +240	\n\n");
    printf("\t\t\tTotal Deaths  224\n\n");
    printf("\t\t\tTotal Recovered  126,650\n");
}
void ROMANIA()
{
   printf("\t\t\tTotal Population  19,198,567\n\n");
    printf("\t\t\tTotal Cases  182,854\n\n");
    printf("\t\t\tNew Cases  +2,466	\n\n");
    printf("\t\t\tTotal Deaths  5,931\n\n");
    printf("\t\t\tTotal Recovered  132,082\n");
}
void RUSSIA()
{
   printf("\t\t\tTotal Population  145,953,362\n\n");
    printf("\t\t\tTotal Cases  1,415,316\n\n");
    printf("\t\t\tNew Cases  +15,982\n\n");
    printf("\t\t\tTotal Deaths  24,366\n\n");
    printf("\t\t\tTotal Recovered 1,075,904\n");
}
void SPAIN()
{
  printf("\t\t\tTotal Population  46,760,248\n\n");
    printf("\t\t\tTotal Cases  1,015,795\n\n");
    printf("\t\t\tNew Cases  +12,214	\n\n");
    printf("\t\t\tTotal Deaths  33,992\n\n");
    printf("\t\t\tTotal Recovered N/A\n");
}
void SAUDI_ARABIA()
{
    printf("\t\t\tTotal Population  34,974,131\n\n");
    printf("\t\t\tTotal Cases  342,583\n\n");
    printf("\t\t\tNew Cases  +381	\n\n");
    printf("\t\t\tTotal Deaths  5,201\n\n");
    printf("\t\t\tTotal Recovered  328,895\n");
}
void SOUTH_AFRICA()
{
   printf("\t\t\tTotal Population  59,530,699\n\n");
    printf("\t\t\tTotal Cases  703,793\n\n");
    printf("\t\t\tNew Cases  N/A\n\n");
    printf("\t\t\tTotal Deaths  18,471\n\n");
    printf("\t\t\tTotal Recovered  634,543\n");
}
void SWEDEN()
{
    printf("\t\t\tTotal Population  10,118,134\n\n");
    printf("\t\t\tTotal Cases  103,200\n\n");
    printf("\t\t\tNew Cases  N/A\n\n");
    printf("\t\t\tTotal Deaths  5,918\n\n");
    printf("\t\t\tTotal Recovered  N/A\n");
}
void SWITZERLAND()
{
    printf("\t\t\tTotal Population  8,673,558\n\n");
    printf("\t\t\tTotal Cases  83,159\n\n");
    printf("\t\t\tNew Cases  +8,737	\n\n");
    printf("\t\t\tTotal Deaths  2,138\n\n");
    printf("\t\t\tTotal Recovered  53,400\n");
}
void TURKEY()
{
    printf("\t\t\tTotal Population  84,609,240\n\n");
    printf("\t\t\tTotal Cases  349,451\n\n");
    printf("\t\t\tNew Cases  +1,958	\n\n");
    printf("\t\t\tTotal Deaths  9,371\n\n");
    printf("\t\t\tTotal Recovered  305,427\n");
}
void UAE()
{
    printf("\t\tUAE\n");
     printf("\t\t\tTotal Population  9,925,908\n\n");
    printf("\t\t\tTotal Cases  116,517\n\n");
    printf("\t\t\tNew Cases  +915	\n\n");
    printf("\t\t\tTotal Deaths  466\n\n");
    printf("\t\t\tTotal Recovered  108,811\n");
}
void UNITED_KINGDOOM()
{
     printf("\t\t\tTotal Population  67,993,010\n\n");
    printf("\t\t\tTotal Cases  741,212\n\n");
    printf("\t\t\tNew Cases  +18,804  \n\n");
    printf("\t\t\tTotal Deaths  43,726\n\n");
    printf("\t\t\tTotal Recovered  N/A\n");
}
void UNITED_STATE_OF_AMERICA()
{
    printf("\t\t\tTotal Population  1,384,048,939\n\n");
    printf("\t\t\tTotal Cases  7,590,514\n\n");
    printf("\t\t\tNew Cases  +42,276\n\n");
    printf("\t\t\tTotal Deaths  115,163	\n\n");
    printf("\t\t\tTotal Recovered  6,725,219\n");
}


void Sample_test()
{
    system("cls");
    printf("Sample Test\n");
    printf("Enter 1 to Check if you are at high risk or not for Covid-19:-\n");
    printf("Enter 2 to see The result of following precautions or not:-\n");
    printf("Enter 3 to see Sample test according to your symptoms:-\n");
    printf("\nEnter 4 to return main menu: \n");
    printf("\nPress Any Number : ");
    getch();
}
void High_risk()
 {
//check if you are at high risk or not for Covid-19
char a,b,c,d,S1[100];
printf("Check if you are at high risk or not for Covid-19:-\n");
printf("==================================================\n\n");
printf("%s","1.Do you came in contact with any Covid infected person?(y/n)\n\n");
printf("%s","2.Is there any Covid patient in the range of your 1 km?(y/n)\n\n");
printf("%s","3.Are you more than 60 years old?(y/n)\n\n");
printf("%s","4.Are you suffering from any kind of diseases such as cardiovascular disease,diabetics,chronic respiratory disease or cancer?(y/n)\n\n");

scanf("%s %s %s %s",&a,&b,&c,&d);
gets(S1);

if(a=='y'||b=='y'||c=='y'||d=='y')
    printf("%s","You are in high risk.\n So,you should concern about the precautions of Covid-19\n");
else
    printf("%s","You are out of high risk\n");
    printf("\n\n\n");
    printf("\nEnter any digit to return main menu\n");
    int n;
    scanf("%d",&n);
    main();
 }

void Precautions()
{
//The result if you follow precautions or not
char e,f,g,h,i,j,S2[100];


printf("The result of following precautions or not:-\n");
printf("===========================================\n\n");
printf("%s","1.Do you avoid large events and mass gatherings?(y/n)\n\n");
printf("%s","2.Do you stay at home?(y/n)\n\n");
printf("%s","3.Do you avoid close contact with others?(y/n)\n\n");
printf("%s","4.Do you wash your hands often with water and soap atleast for 20 seconds?(y/n)\n\n");
printf("%s","5.Do you cover your face with mask at public spaces?(y/n)\n\n");
printf("%s","6.Do you avoid touching your eyes,nose and mouth?(y/n)\n\n");

scanf("%s %s %s %s %s %s",&e,&f,&g,&h,&i,&j);
gets(S2);

if(e=='y'||f=='y'||g=='y'||h=='y'||i=='y'||j=='y')
    printf("%s","You can save yourself from Covid-19\n\n");
else
    printf("%s","You have high possibility to get effected by Covid-19\n\n");


printf("\n\n\n");

 printf("\nEnter any digit to return main menu\n");
 int n;
 scanf("%d",&n);
 main();
}

void test()
{
//Sample test according to your symptoms
char k,l,m,n,S3[100];

printf("Sample test according to your symptoms:-\n");
printf("=======================================\n\n");
printf("%s","1.Do you have fever?(y/n)\n\n");
printf("%s","2.Do you have cough?(y/n)\n\n");
printf("%s","3.Do you have headache?(y/n)\n\n");
printf("4.Do you suffering from breathing difficulties?(y/n)\n\n");
printf("5.To return \n");

scanf("%s %s %s %s",&k,&l,&m,&n);
gets(S3);

if(k=='y'||l=='y'||m=='y'||n=='y')
    printf("%s","Chance to be positive\nConsult with doctor");
else
    printf("%s","You are safe");

    printf("\nEnter any digit to return main menu\n");
    int r;
    scanf("%d",&r);
    main();
}

void Plasma_donation()
{
    system("cls");
    printf("Plasma Donation\n");
    printf("\nEnter 1 to Registration: ");
    printf("\nEnter 2 to find or Search: ");
    printf("\nEnter 4 to return main menu: \n");
    printf("\nPress Any Number : ");
    getch();
}
struct Donation
{
    char name[30];
    char division[25];
    char group[20];
    char email[100];
    char number[100];
    int i;
}plasma[200];

void Registration()
{
char arr[20],name[30],grp[20],num[100],div[30],email[100];
    int i;
    float a;
    FILE*file;
    file=fopen("donor.txt","a");
    printf("Enter your name :");
    scanf("%s",&name);
    fputs(name,file);
    fgets(name,30,file);
    fputs("\n",file);
    printf("Enter your division :");
    scanf("%s",&div);
    fputs(div,file);
    fputs("\n",file);
    printf("Enter your blood group :");
    scanf("%s",&grp);
    fputs(grp,file);
    fputs("\n",file);
    printf("Enter your number :");
    scanf("%s",&num);
    fputs(num,file);
    fputs("\n",file);
    printf("Enter your email :");
    scanf("%s",email);
    fputs(email,file);
    fputs("\n",file);
    fclose(file);
    system("cls");
    system("color 5F");
    printf("You have successfully Registered\n");
    printf("\nEnter any digit to return main menu\n");
    int n;
    scanf("%d",&n);
    main();
    getch();

}

void Find()
{
    system("cls");
    int i=0;
    char bld[200],divi[200];
    FILE*file;
    file=fopen("donor.txt","r");
    while(fscanf(file,"%s",&plasma[i].name)!=EOF){
        fscanf(file,"%s",&plasma[i].division);
        fscanf(file,"%s",&plasma[i].group);
        fscanf(file,"%s",&plasma[i].number);
        fscanf(file,"%s",&plasma[i].email);
        i++;
    }
    printf("Enter the blood group :");
    scanf("%s",&bld);
    printf("\nEnter your division :");
    scanf("%s",&divi);
    system("cls");
    printf("\nDonor around you :\n");
    for(int j=0;j<i;j++){
        if((strcmp(plasma[j].group,bld)==0) && (strcmp(plasma[j].division,divi)==0)){
            printf("%s - %s\n",plasma[j].name,plasma[j].number);
        }
    }
    printf("\nEnter any digit to return main menu\n");
    int n;
    scanf("%d",&n);
    main();

}

void Emergency_contacts()
{
    system("cls");
    printf("Emergency Contacts\n");
    printf("In case of emergency,call 998 for  AMBULANCE service\n");
    printf("\nCOVID-19 test centers in Dhaka Division are given below: \n ");
    printf("\n1.Dhaka Medical College Hospital \n Contact - 0255165088");
    printf("\n2.Kurmitola General Hospital \n Contact - 0255062388 ");
    printf("\n3.Mugda Medical College Hospital \n Contact - 027276032");
    printf("\n4.Square Hospital \n Contact - 09610-010616");
    printf("\n5.Ibn Sina Hospital \n Contact - 02-9010396\n");
    printf("\nCOVID-19 test centers in Chattogram Division are given below: \n");
    printf("\n1.Bangladesh Institute of Tropical and Infectious Disease Hospital\nContact - 029010396\n2.Chittagong veterinary and animal sciences university\nContact - 031659492\n3. Chittagong Medical College Hospital\nContact - 031630335\n4.Abdul Malek Ukil Medical College & Hospital\nContact - 032154300\n5.Comilla Medical College\nContact-08165562\n");
    printf("\nCOVID-19 test centers in Rajshahi Division are given below:\n");
    printf("1.Rajshahi Medical College Hospital\nContact - 0721772150\n2.Kushtia Medical College and Hospital\nContact-01755201950\n3.Shaheed Ziaur Rahman Medical College and Hospital\nContact-05169965\n");
    printf("\nCOVID-19 test centers in Khulna Division are given below: \n");
    printf("\n1.Khulna Medical College and Hospital\nContact-041761535\n");
    printf("\nCOVID-19 test centers in Sylhet Division are given below: \n");
    printf("\n1.Sylhet M.A.G. Osmani Medical College and Hospital\nContact-0821713667\n2.Shahjalal University of Science and Technology\nContact-0821717850\n");
    printf("\nCOVID-19 test centers in Barishal Division are given below: \n");
    printf("\n1.Sher-E-Bangla Medical College and Hospital\nContact-04312173547\n");
    printf("\nCOVID-19 test centers in Rangpur Division are given below: \n");
    printf("\n1.Rangpur Medical College and Hospital\nContact-052153881\n2.M. Abdur Rahim Medical College Hospital, Dinajpur\nContact-053152080\n");
    printf("\nCOVID-19 test centers in Mymensingh division are given below:\n");
    printf("\n1.Mymensingh Medical College and Hospital\nContact-09166063\n2.Sheikh Hasina Medical College");
    printf("\nEnter any digit to return main menu\n");
    int n;
    scanf("%d",&n);
    main();
    getch();
}

void Mask_and_Sanitizer_Marketing()
{
    system("cls");
    printf("Mask and Sanitizer Marketing\n");
    printf("\nEnter 1 to see usefulness of mask: ");
    printf("\nEnter 2 to see usefulness of sanitizers: ");
    printf("\nEnter 3 to return main menu: \n");

    getch();

}
void adv_mask()
{

printf("Importance of Masks in the time of COVID-19:\n");
printf("\nMask are quite useful in preventing Corona virus.Because it gives you a protection from transmitting Corona.As we all know, virus transmission most likely happens through the nasal area,If everyone wear a mask then the virus transmission rate will go down slowly.And these masks do not cost a huge amount of money.Our government should take a step of distributing masks for free in the rural areas of our county. It would be really helpful. Because creating awareness is the first step if we want to prevent something.: ");
printf("\nEnter any digit to return main menu\n");
int n;
scanf("%d",&n);
main();

}

void adv_sanitizer()
{
printf("Importance of Sanitizers  in the time of COVID-19:\n");
printf("Hand sanitizers are a must in the time of corona.Because,cleanliness is very important in the time of corona and you can not get soap and water everytime when you need to wash your hands.That's why sanitizers are very important.When shopping for hand sanitizer, make sure you choose a sanitizer that contains between 60-95 percent alcohol. Also, when you use hand sanitizer, make sure you do so the right way. Find the directions on the back of the bottle and follow the  proper instruction. Generally, apply the liquid to the palm of one hand. Then rub it all over both hands until the sanitizer dries. This takes about 20 seconds. Be careful not to wipe the sanitizer off before it’s dry.Government should create awareness among the people to teach them the importance of sanitizers.And people from all sectors should help the poor people within their ability.: ");
printf("\nEnter any digit to return main menu\n");
int n;
scanf("%d",&n);
main();
}


int main()
{
    system("COLOR 5F");
    system("cls");
    int user_choice;
    gotoxy(24,5);
    printf("====================\n");
    gotoxy(24,6);
    printf("||  This is Menu  ||\n");
    gotoxy(24,7);
    printf("====================\n");
    gotoxy(17,10);
    printf("1.Worldwide Covid-19 Update\n\n");
    gotoxy(17,12);
    printf("2.Worldwide rate of Covid-19 Update\n\n");
    gotoxy(17,14);
    printf("3.Worldwide Covid-19 Situation at October 2020\n\n");
    gotoxy(17,16);
    printf("4.Sample Test\n\n");
    gotoxy(17,18);
    printf("5.Plasma Donation\n\n");
    gotoxy(17,20);
    printf("6.Emergency contacts\n\n");
    gotoxy(17,22);
    printf("7.Mask and Sanitizer Marketing\n\n");
    gotoxy(17,24);
    printf("8.Exit\n\n");
    gotoxy(17,26);
    printf("Enter your choice: ");

    scanf("%d",&user_choice);
    if(user_choice==1)
    {
        Worldwide_Covid19_update();
        scanf("%d",&user_choice);
        if(user_choice==1){
            infection();
        }
        else if(user_choice==2){
            recovery();
        }
        else if(user_choice==3){
            death();
        }
        else {
            main();
        }
    }
    else if(user_choice==2)
    {
        Rate_of_update();
        scanf("%d",&user_choice);
        if(user_choice==1){
        Infection_Rate();
        }
        else if(user_choice==2){
        Recovery_Rate();
        }
        else if(user_choice==3){
        Death_Rate();
        }
        else main();
    }
    else if(user_choice==3)
    {
        Worldwide_Covid19_situation_october_2020();
        int choice2, choice1;
        while(scanf("%d",&choice1)){
        system("cls");
        switch(choice1){
        case 1:
        while(1){
            system("cls");
            printf("\t\t\t\t\t\t&&&& LIST_OF_COUNTRIES &&&&\n\n");
            printf("1.ALGERIA\t\t\t2.ARGENTIN\t\t\t3.ARMENIA\t\t\t4.AUSTRALIA\n\n");
            printf("5.AUSTRIA\t\t\t6.BANGLADESH\t\t\t7.BRAZIL\t\t\t8.BAHRAIN\n\n");
            printf("9.BELGIUM\t\t\t10.CANADA\t\t\t11.CHILE\t\t\t12.CHINA\n\n");
            printf("13.COLOMBIA\t\t\t14.ECUADOR\t\t\t15.EGYPT\t\t\t16.FRANCE\n\n");
            printf("17.GERMANY\t\t\t18.INDIA\t\t\t19.INDONESIA\t\t\t20.IRAN\n\n");
            printf("21.IRELAND\t\t\t22.ISRAEL\t\t\t23.ITALY\t\t\t24.JAPAN\n\n");
            printf("25.KAZAKHSTAN\t\t\t26.KUWAIT\t\t\t27.LIBYA\t\t\t28.MEXICO\n\n");
            printf("29.MOROCCO\t\t\t30.MYANMAR\t\t\t31.NEPAL\t\t\t32.NETHERLAND\n\n");
            printf("33.OMAN\t\t\t\t34.PAKISTAN\t\t\t35.PARAGUAY\t\t\t36.PERU\n\n");
            printf("37.POLAND\t\t\t38.PORTUGAL\t\t\t39. QATAR\t\t\t40.ROMANIA\n\n");
            printf("41.RUSSIA\t\t\t42.SPAIN\t\t\t43.SAUDI_ARABIA\t\t\t44.SOUTH_AFRICA\n\n");
            printf("46.SWEDEN\t\t\t46.SWITZERLAND\t\t\t47.TURKEY\t\t\t48.UAE\n\n");
            printf("49.UNITED_KINGDOOM\t\t50.UNITED_STATE_OF_AMERICA\n\n");


            while(1){
            printf("\n\n\nTo go back, Press '0'.");
            printf("\nPress Country: ");
            scanf("%d",&choice2);

            switch(choice2){
            case 1:
                  ALGERIA();
                break;
            case 2:
                 ARGENTINA();
                 break;
            case 3:
                 ARMENIA();
                  break;
            case 4:
                 AUSTRALIA();
                 break;
            case 5:
                 AUSTRIA();
                break;
            case 6:
                 BANGLADESH();
                break;
            case 7:
                 BRAZIL();
                break;
            case 8:
                 BAHRAIN();
                break;
            case 9:
                 BELGIUM();
                break;
            case 10:
                 CANADA();
                break;
            case 11:
                 CHILE();
                break;
            case 12:
                 CHINA();
                break;
            case 13:
                 COLOMBIA();
                break;
            case 14:
                 ECUADOR();
                break;
            case 15:
                 EGYPT();
                break;
            case 16:
                 FRANCE();
                break;
            case 17:
                 GERMANY();
                break;
            case 18:
                 INDIA();
                break;
            case 19:
                 INDONESIA();
                break;
            case 20:
                 IRAN();
                break;
            case 21:
                 IRELAND();
                break;
            case 22:
                 ISRAEL();
                break;
            case 23:
                 ITALY();
                break;
            case 24:
                 JAPAN();
                break;
            case 25:
                 KAZAKHSTAN();
                break;
            case 26:
                 KUWAIT();
                break;
            case 27:
                 LIBYA();
                break;
            case 28:
                 MEXICO();
                break;
            case 29:
                 MOROCCO();
                break;
            case 30:
                 MYANMAR();
                break;
            case 31:
                 NEPAL();
                break;
            case 32:
                 NETHERLAND();
                break;
            case 33:
                 OMAN();
                break;
            case 34:
                 PAKISTAN();
                break;
            case 35:
                 PARAGUAY();
                break;
            case 36:
                 PERU();
                break;
            case 37:
                 POLAND();
                break;
            case 38:
                 PORTUGAL();
                break;
            case 39:
                 QATAR();
                break;
            case 40:
                 ROMANIA();
                break;
            case 41:
                 RUSSIA();
                break;
            case 42:
                 SPAIN();
                break;
            case 43:
                 SAUDI_ARABIA();
                break;
            case 44:
                 SOUTH_AFRICA();
                break;
            case 45:
                 SWEDEN();
                break;
            case 46:
                 SWITZERLAND();
                break;
            case 47:
                 TURKEY();
                break;
            case 48:
                 UAE();
                break;
            case 49:
                 UNITED_KINGDOOM();
                break;
            case 50:
                 UNITED_STATE_OF_AMERICA();
                break;



            case 0:
                main();


            default:
                printf("Malta");
            }

        }
        }
        }

    }


    }
    else if(user_choice==4)
     {
        Sample_test();
        scanf("%d",&user_choice);

        if (user_choice==1)
        {
         High_risk();
        }
        else if (user_choice==2)
         {
         Precautions();
         }
         else if(user_choice==3)
         {
         test();
         }
         else main();

    }
     else if(user_choice==5){
     Plasma_donation();
     scanf("%d",&user_choice);
      if(user_choice==1)
       {
        Registration();
       }
       else if(user_choice==2){
        Find();
       }
       else main();

    }

    else if(user_choice==6)
    {
        Emergency_contacts();
        main();
    }
    else if(user_choice==7)
    {
        Mask_and_Sanitizer_Marketing();
         scanf("%d",&user_choice);
         if(user_choice==1)
         {
          adv_mask();
         }
         else if(user_choice==2){
         adv_sanitizer();
         }
         else{
            main();
         }
    }
    else
    {
        (user_choice==7);
    }

    return 0;

}


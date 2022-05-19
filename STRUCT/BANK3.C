#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct account{
int accno,bal;
char name[10],acctyp[10],gen;
};

int create();
int show();
int search();
int deposit();
int withdraw();
int del();

int main()
{       int choice;
	do{ system("cls");

        //clrscr();
		printf("MAIN MENU");
		printf("\n1.create account");
		printf("\n2.delete account");
		printf("\n3.withdraw money");
		printf("\n4.Deposit money");
		printf("\n5.show info");
		printf("\n6.search account");
		printf("\n7.exit");
		printf("\n\nenter your choice:\t");
		scanf("%d",&choice);
		system("cls");  //clrscr();
		switch(choice)
		{	case 1:
                create();
			break;
			case 2:
			    del();
			break;
			case 3:
			    withdraw();
			break;
			case 4:
			    deposit();
			break;
			case 5:
				show();
			break;
			case 6:
				search();
			break;
			default:
			break;

		}
	}while(choice!=7);
	return 0;
}

int create()
{       int choice;
	struct account a;
	FILE *fp;
	fp=fopen("bank3.dat","ab");
	printf("Enter the details:-\n");
	printf("Enter the Name:\t\t");
	fflush(stdin);
	gets(a.name);
	printf("Enter the gender:\t\t");
	a.gen=getchar();
	fflush(stdin);
	printf("Enter the account number:\t");
	scanf("%d",&a.accno);
	printf("Enter the account type:\t");
	fflush(stdin);
	gets(a.acctyp);
	printf("Enter the first deposit:\t");
	scanf("%d",&a.bal);
	fwrite(&a,sizeof(a),1,fp);
	fclose(fp);
	return 0;
}
int show()
{	FILE *fp;
	struct account a;
	fp=fopen("bank3.dat","rb");
	printf("\nDETAILS ARE:-\n\n");
	while(fread(&a,sizeof(a),1,fp))
	{
		printf("\n-------------------");
		printf("\nAC.NO.:\t%d",a.accno);
		printf("\nNAME:\t%s",a.name);
		printf("\nACCTYP:\t%s",a.acctyp);
		printf("\nGENDER:\t%c",a.gen);
		printf("\nBALANCE:\t%d\n",a.bal);
		getch();
	}
	fclose(fp);
	return 0;
}
int search()
{       int no;
	struct account a;
	FILE *fp=fopen("bank3.dat","rb");
	printf("Enter the account number to search:\t");
	scanf("%d",&no);
	while(fread(&a,sizeof(a),1,fp))
	{       if(a.accno==no)
		{
			printf("\nAC.NO.:\t%d",a.accno);
			printf("\nNAME:\t%s",a.name);
			printf("\nACCTYP:\t%s",a.acctyp);
			printf("\nGENDER:\t%c",a.gen);
			printf("\nBALANCE:\t%d\n",a.bal);
			goto A;
		}
	}
    printf("\nUnable to find the account\n");
    A:
    getch();
	fclose(fp);
	return 0;
}

int deposit()
{   FILE *fp=fopen("bank3.dat","rb"),*fp2=fopen("temp.dat","wb");
    struct account a;
    int account_number,amount,check=0;
    printf("Enter the account number :\t");
    scanf("%d",&account_number);
    while(fread(&a,sizeof(a),1,fp))
    {   if(account_number==a.accno)
        {   printf("\nAC.NO.:\t%d",a.accno);
			printf("\nNAME:\t%s",a.name);
			printf("\nACCTYP:\t%s",a.acctyp);
			printf("\nGENDER:\t%c",a.gen);
			printf("\nBALANCE:\t%d\n",a.bal);
			printf("\n\nEnter the amount to deposit:\t");
			scanf("%d",&amount);
			a.bal+=amount;
			printf("\nNew balance is :\t%d",a.bal);
			check=1;
        }
        fwrite(&a,sizeof(a),1,fp2);
    }
    fclose(fp);
    fclose(fp2);
    if(check==0)
            printf("\nERROR:Account not found");
    else
        printf("\nAmount deposit sucessfully");
    getch();
    remove("bank3.dat");
    rename("temp.dat","bank3.dat");
}

int withdraw()
{   FILE *fp=fopen("bank3.dat","rb"),*fp2=fopen("temp.dat","wb");
    struct account a;
    int account_number,amount,check=0;
    printf("Enter the account number :\t");
    scanf("%d",&account_number);
    while(fread(&a,sizeof(a),1,fp))
    {   if(account_number==a.accno)
        {   printf("\nAC.NO.:\t%d",a.accno);
			printf("\nNAME:\t%s",a.name);
			printf("\nACCTYP:\t%s",a.acctyp);
			printf("\nGENDER:\t%c",a.gen);
			printf("\nBALANCE:\t%d\n",a.bal);
			printf("\n\nEnter the amount to withdraw:\t");
			scanf("%d",&amount);
			a.bal-=amount;
			printf("\nNew balance is :\t%d",a.bal);
			check=1;
        }
        fwrite(&a,sizeof(a),1,fp2);
    }
    fclose(fp);
    fclose(fp2);
    if(check==0)
            printf("\nERROR:Account not found");
    else
        printf("\nAmount withdrawn sucessfully");
    getch();
    remove("bank3.dat");
    rename("temp.dat","bank3.dat");
}


int del()
{   FILE *fp=fopen("bank3.dat","rb"),*fp2=fopen("temp.dat","wb");
    struct account a;
    int account_number,amount,check=0;
    printf("Enter the account number :\t");
    scanf("%d",&account_number);
    while(fread(&a,sizeof(a),1,fp))
    {   if(account_number==a.accno)
        {   printf("\nAC.NO.:\t%d",a.accno);
			printf("\nNAME:\t%s",a.name);
			printf("\nACCTYP:\t%s",a.acctyp);
			printf("\nGENDER:\t%c",a.gen);
			printf("\nBALANCE:\t%d\n",a.bal);
			check=1;
			continue;
        }
        fwrite(&a,sizeof(a),1,fp2);
    }
    fclose(fp);
    fclose(fp2);
    if(check==0)
            printf("\nERROR:Account not found");
    else
        printf("\nAccount deleted sucessfully");
    getch();
    remove("bank3.dat");
    rename("temp.dat","bank3.dat");
}

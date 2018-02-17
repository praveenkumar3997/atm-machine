#include <stdio.h>
int main()
{
    unsigned long amount=25000, deposit, withdraw;
    int choice, pin[4], num=0,pinlength,k,flag;
    char select;
    printf("WELCOME TO XYZ BANK...\n");
    printf("Please Insert Your Card...\n");
    printf("ENTER YOUR SECRET PIN NUMBER:\n");
    do
    {
        for(num;num<4;num++)
        scanf("%d",&pin[num]);
        pinlength=sizeof(pin)/sizeof(pin[0]);
        if(pinlength>4||pinlength<0)
        {
            printf("Invalid Password...Re-enter it...\n");
            flag=0;
        }
        else
            flag=1;
    }while(flag==0);
    do
    {
        printf("__________Welcome to ATM Service____________\n");
        printf("1. Check Balance\n");
        printf("2. Withdraw Cash\n");
        printf("3. Deposit Cash\n");
        printf("4. Quit\n");
        printf("____________________________________________\n\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("\n YOUR BALANCE IN Rs : %lu ", amount);
            break;
        case 2:
            printf("\n ENTER THE AMOUNT TO WITHDRAW: ");
            scanf("%lu", &withdraw);
            if (withdraw % 100 != 0)
            {
                printf("\n PLEASE ENTER THE AMOUNT IN MULTIPLES OF 100");
            }
            else if (withdraw >(amount - 500))
            {
                printf("\n INSUFFICENT BALANCE");
            }
            else
            {
                amount = amount - withdraw;
                printf("\n\n PLEASE COLLECT YOUR CASH...");
                printf("\n YOUR CURRENT BALANCE IS:%lu", amount);
            }
            break;
        case 3:
            printf("\n ENTER THE AMOUNT TO DEPOSIT");
            scanf("%lu", &deposit);
                        amount = amount + deposit;
            printf("YOUR BALANCE IS:%lu", amount);
            break;
        case 4:
            printf("\n THANK U FOR USING OUR ATM...");
            break;
        default:
            printf("\n INVALID CHOICE...");
        }
        printf("\n\n\n DO U WISH TO HAVE ANOTHER TRANSCATION?(y/n):\n");
        scanf("%c", &select);
        if (select== 'n'|| select== 'N')
            k = 1;
        else
            k=0;
    } while (k!=1);
    printf("TAKE BACK YOUR CARD....\n");
    printf("\n\n THANKS FOR USING OUR ATM SERVICE");
}

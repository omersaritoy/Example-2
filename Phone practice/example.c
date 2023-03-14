#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int outgoing_minute, incomgoing_minute, sent_SMS;
    char user_name[100];
    double price_outgoing, price_incomgoin, price_Mb, Using_Gb, price_SMS;

    printf("Please enter your name:");
    scanf("%s", &user_name);

    printf("%s,please enter the price for outgoing call per minute:", user_name);
    scanf("%lf", &price_outgoing);

    printf("%s,please enter how many minutes you have talked in outgoing calls:", user_name);
    scanf("%d", &outgoing_minute);

    double x = price_outgoing * outgoing_minute;
    printf("%s,you have spent %.2lf TL for outgoing calls you made while are abroad.\n\n", user_name, x);

    printf("%s,please eneter the price for incoming call per minute:", user_name);
    scanf("%lf", &price_incomgoin);

    printf("%s,please enter how many minutes you have talked in incoming calls:", user_name);
    scanf("%d", &incomgoing_minute);

    double y = price_incomgoin * incomgoing_minute;
    printf("%s,you have spent %.2lf TL for incoming calls you made while you are abroad.\n\n", user_name, y);

    printf("%s,please enter the price for internet usage per MB:", user_name);
    scanf("%lf", &price_Mb);

    printf("%s,please enter how many GBs you have used:", user_name);
    scanf("%lf", &Using_Gb);

    double z = price_Mb * Using_Gb * 1024;
    printf("%s,you have spent %.3lf TL for the internet while you are abroad.\n\n", user_name, z);

    printf("%s,please enter the price for one SMS:", user_name);
    scanf("%lf", &price_SMS);

    printf("%s,please enter the number of SMS you have sent:", user_name);
    scanf("%d", &sent_SMS);

    double k = price_SMS * sent_SMS;
    printf("%s,you have spent %.2lf TL TL for the SMS while you are abroad.\n\n", user_name, k);

    double total = x + y + z + k;
    double tax = total * 0.18;
    double fee = total + tax;

    printf("%s,total cost for all roaming services is %.2lf TL.\n", user_name, total);
    printf("%s,tax is %.2lf TL.\n", user_name, tax);
    printf("%s,total roaming bill fee with tax is %.2lf TL.", user_name, fee);

    return 0;
}
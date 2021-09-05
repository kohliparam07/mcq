#include<stdio.h>
int main()
{
    int amount=0,a1,a2,a3,a4,a5,a6,a7;
    char ans1,ans2,ans3,ans4,ans5,ans6,ans7;
    printf("\n WELCOME ");
    printf("\n FIRST QUESTION IS :");
    printf("\n  The International Literacy Day is observed on \n A. Sep 8 \n B. Nov 28 \n C. May 2 \n D. Sep 22");
    printf("\n enter your answer :");
    scanf("%s",&ans1);
    if (ans1=='A')
    {
        a1=amount+1000;
        printf("\n CONGRATULATIONS YOUR ANSWER IS CORRECT \n YOU HAVE WON $ %d", a1);
        printf("\n THE NEXT QUESTION IS :");
        printf("\n In which group of places the Kumbha Mela is held every twelve years? \n A. Ujjain. Purl; Prayag. Haridwar \n B. Prayag. Haridwar, Ujjain,. Nasik \n C. Rameshwaram. Purl, Badrinath. Dwarika \n D. Chittakoot, Ujjain, Prayag,'Haridwar ");
        printf("\n enter your answer");
        scanf("%s",&ans2);
        if (ans2=='B')
        {
            a2=a1+3000;
            printf("\n CONGRATULATIONS YOUR ANSWER IS CORRECT \n YOU HAVE WON $ %d", a2);
            printf("\n THE NEXT QUESTION IS :");
            printf("\n In 2008, Rajasthan Royals became the first winner of which annual sporting event? \n A. PKL \n B. ISL \n C. PHL \n D. IPL");
            printf("\n enter your answer");
            scanf("%s",&ans3);
            if (ans3=='D')
            {
                a3=a2+3000;
                printf("\n CONGRATULATIONS YOUR ANSWER IS CORRECT \n YOU HAVE WON $ %d", a3);
                printf("\n THE NEXT QUESTION IS :");
                printf("\n Which of the following will be heavier than 1450 g of iron? \n A. 1 kg of rice \n B. 1.4 kg of paper \n C. 1.7 kg of cotton \n D. 1.3 kg of husk.");
                printf("\n enter your answer");
                scanf("%s",&ans4);
                if (ans4=='C')
                {
                    a4=a3+5000;
                    printf("\n CONGRATULATIONS YOUR ANSWER IS CORRECT \n YOU HAVE WON $ %d", a4);
                    printf("\n THE NEXT QUESTION IS :");
                    printf("\n During the Battle of Kurukshetra, Krishna deceived the Kauravas by hiding the sun behind clouds to enable Arjuna to kill whom? \n A. Shakuni \n B. Dronacharya \n C. Dushasana \n D. Jayadratha.");
                    printf("\n enter your answer");
                    scanf("%s",&ans5);
                    if (ans5=='D')
                    {
                        a5=a4+7000;
                        printf("\n CONGRATULATIONS YOUR ANSWER IS CORRECT \n YOU HAVE WON $ %d", a5);
                        printf("\n THE NEXT QUESTION IS :");
                        printf("\n Which Mughal Emperor was deported to Rangoon by the British? \n A. Shah Jahan \n B. Bahadur Shah II \n C. Akbar Shah I \n D. Bahadur Shah I");
                        printf("\n enter your answer: ");
                        scanf("%s",&ans6);
                        if (ans6=='B')
                        {
                            a6=a5+7000;
                            printf("\n CONGRATULATIONS YOUR ANSWER IS CORRECT \n YOU HAVE WON $ %d", a6);
                        }
                        else
                        {
                            printf("\n SORRY, WRONG ANSWER! ");
                        }
                    }
                    else
                    {
                        printf("\n SORRY, WRONG ANSWER! ");
                    }
                }
                else
                {
                    printf("\n SORRY, WRONG ANSWER! ");
                }
            }
            else 
            {
                printf("\n SORRY, WRONG ANSWER! ");
            }
        }
        else 
        {
            printf("\n SORRY, WRONG ANSWER! ");
        }
    }
    else 
    {
        printf("\n SORRY, WRONG ANSWER! ");
    }
return 0;
}

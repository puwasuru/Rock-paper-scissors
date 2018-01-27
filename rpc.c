/*  Author : Ihalagedara I.P.S.B
    Date   : 27.01.2017

    Rock paper scissor game
*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    char p1,p2;

    //gets the inputs
    scanf("%c %c",&p1,&p2);

    //checks whether inputs are correct
    if(((p1=='R')||(p1=='S')||(p1=='C')||(p1 =='P')||(p1=='L')) && ((p2=='L')||(p2=='P')||(p2=='R')||(p2=='S')||(p2=='C'))){

        //if inputs are same
        if(p1==p2){

                printf("Tie");

        }else if(p1=='R'){

                if((p2=='L') || (p2=='C')){

                    printf("Player 1 wins\n");

                }else{

                    printf("Player 2 wins\n");

                }

        }else if(p1=='S'){

                if((p2=='C') || (p2=='R')){

                    printf("Player 1 wins\n");

                }else{

                    printf("Player 2 wins\n");

                }

        }else if(p1=='P'){

                if((p2=='R') || (p2=='S')){

                    printf("Player 1 wins\n");

                }else{

                    printf("Player 2 wins\n");

                }

        }else if(p1=='L'){

                if((p2=='S') || (p2=='P')){

                    printf("Player 1 wins\n");

                }else{

                    printf("Player 2 wins\n");

                }

        }else{

                if((p2=='L') || (p2=='P')){

                    printf("Player 1 wins\n");

                }else{

                    printf("Player 2 wins\n");

                }

    }



    }else{

        printf("Wrong input");

    }



    return 0;
}

#include <stdio.h>
#include <string.h>
char pl1(char[],char[]);
char pl2(char[],char[]);
int check(char[]);
int winer,p1=10,p2=11;
int main()
{
    int exit = 0;
    while (exit != 1)
    {
        int pos[9] = {1, 5, 9, 25, 29, 33, 49, 53, 57}, len1, choice, i, len2 = 9,win = 1;
        char player1[20], player2[20], game[100] = {" 1 | 2 | 3 \n___________\n 4 | 5 | 6 \n___________\n 7 | 8 | 9 "};
        puts(game);
        printf("Enter first player name(X): ");
        fflush(stdin);
        gets(player1);
        printf("Enter second player name(O): ");
        fflush(stdin);
        gets(player2);
        top:
        printf("Who want to start\n1: %s\t2: %s\nChoice: ", player1, player2);
        fflush(stdin);
        scanf("%d", &choice);
        fflush(stdin);
        if (choice == 1)   
        {
            while (win != 0)               
            {
                pl1(game,player1);
                win = check(game);
                pl2(game,player2);
                win=check(game);
            }
        }
        else if (choice == 2)
        {
            while(win!=0)
            {
                pl2(game, player2);
                win = check(game);
                pl1(game, player1);
                win = check(game);
            }
        }
        else
        {
            printf("\nYou Enterd wrong choice!");
            goto top;
        }
        if(winer==1)
        {
            printf("Winner is %s",player1);
        }
        else if(winer==2)
        {
            printf("Winner is %s",player2);
        }
        winer = 0;
        printf("\nDo you want to exit!\n1: Yes\t2: No \nChoice: ");
        fflush(stdin);
        scanf("%d", &exit);
    }
    return 0;
}
char pl1(char game[100],char player1[20])
{
top1:
    printf("Enter Position %s (X): ", player1);
    scanf("%d", &p1);
    if (p1 == p2)
    {
        printf("\nYou Enterd wrong choice!\n");
        goto top1;
    }
    else
    {
        switch (p1)
        {
        case 1:
            game[1] = 'X';
            break;
        case 2:
            game[5] = 'X';
            break;
        case 3:
            game[9] = 'X';
            break;
        case 4:
            game[25] = 'X';
            break;
        case 5:
            game[29] = 'X';
            break;
        case 6:
            game[33] = 'X';
            break;
        case 7:
            game[49] = 'X';
            break;
        case 8:
            game[53] = 'X';
            break;
        case 9:
            game[57] = 'X';
            break;
        default:
            printf("\nYou Enterd wrong choice!\n");
            goto top1;
            break;
        }
    }
    puts(game);
}
char pl2(char game[100],char player2[20])
{
top2:
    printf("Enter Position %s (X): ", player2);
    scanf("%d", &p2);
    if (p1 == p2)
    {
        printf("\nYou Enterd wrong choice!\n");
        goto top2;
    }
    else
    {
        switch (p2)
        {
        case 1:
            game[1] = 'O';
            break;
        case 2:
            game[5] = 'O';
            break;
        case 3:
            game[9] = 'O';
            break;
        case 4:
            game[25] = 'O';
            break;
        case 5:
            game[29] = 'O';
            break;
        case 6:
            game[33] = 'O';
            break;
        case 7:
            game[49] = 'O';
            break;
        case 8:
            game[53] = 'O';
            break;
        case 9:
            game[57] = 'O';
            break;
        default:
            printf("\nYou Enterd wrong choice!\n");
            goto top2;
            break;
        }
    }
    puts(game);
}
int check(char game[100])
{
    if (game[1] == game[5] && game[5]==game[9])
    {
        if(game[1]=='X')
        {
            winer = 1;
            return 0;
        }
        else
        {
            winer =2;
            return 0;
        }
    }
    else if (game[25] == game[29] && game[29] == game[33])
    {
        if (game[25] == 'X')
        {
            winer = 1;
            return 0;
        }
        else
        {
            winer = 2;
            return 0;
        }
    }
    else if (game[49] == game[53] && game[53] == game[57])
    {
        if (game[49] == 'X')
        {
            winer = 1;
            return 0;
        }
        else
        {
            winer = 2;
            return 0;
        }
    }
    else if (game[1] == game[25] && game[25] == game[49])
    {
        if (game[1] == 'X')
        {
            winer = 1;
            return 0;
        }
        else
        {
            winer = 2;
            return 0;
        }
    }
    else if (game[5] == game[29] && game[29] == game[53])
    {
        if (game[5] == 'X')
        {
            winer = 1;
            return 0;
        }
        else
        {
            winer = 2;
            return 0;
        }
    }
    else if (game[9] == game[33] && game[33] == game[57])
    {
        if (game[9] == 'X')
        {
            winer = 1;
            return 0;
        }
        else
        {
            winer = 2;
            return 0;
        }
    }
    else if (game[1] == game[29] && game[29] == game[57])
    {
        if (game[1] == 'X')
        {
            winer = 1;
            return 0;
        }
        else
        {
            winer = 2;
            return 0;
        }
    }
    else if (game[9] == game[29] && game[29] == game[49])
    {
        if (game[9] == 'X')
        {
            winer = 1;
            return 0;
        }
        else
        {
            winer = 2;
            return 0;
        }
    }
}
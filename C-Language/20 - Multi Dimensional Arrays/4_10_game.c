/*
4.Four player are playing a tournament of chess with round robin method (each player with play with every other player).
  Each win has 2 points,draw has 1 point and loose has 0 points. Declare a score_board two dimensional array to store the scores of the player agains each player.
5.Define a function to update score_board after each match result.
6.Define a function to display score_board.
7.Define a function which returns the score of a specific player.
8.Define a function to find the winner of the tournament.
9.Define a function to display rank of the players.
10. Define a function to run tournament, in which user has to enter result of each game and update score board using score_board function.
*/
#include<stdio.h>
void update_sb(int p1,int p2, int result,int sb[][4]);
void display_sb(int sb[][4]);
int get_player_score(int player,int sb[][4]);
int find_winner(int sb[][4]);
void sort(int a[],int n,int player_index[]);
void show_rank(int sb[][4]);
void run();

int main()
{
    run();
    return 0;
}

void update_sb(int p1,int p2, int result,int sb[][4])
{   
    sb[p1][p2]=result;
    sb[p2][p1]=2-result;
}

void display_sb(int sb[][4])
{
    int i,j;
    printf("\nScore Board :\n");
    for(i=0;i<=3;i++)
    {
        for(j=0;j<=3;j++)
            printf("%d",sb[i][j]);
        printf("\n");
    }
}

int get_player_score(int player,int sb[][4])
{
    int i,sum=0;
    for(i=0;i<=3;i++)
        sum=sum+sb[player][i];
    return sum;
}

int find_winner(int sb[][4])
{
    int player=0,score,winner,s1;
    winner=player;
    score=get_player_score(player,sb);
    for(++player;player<=3;player++)
    {
        s1=get_player_score(player,sb);
        if(s1>score)
        {
            winner=player;
            score=s1;
        }
    }
    return winner;
}

void sort(int a[],int n,int player_index[])
{
    int r,t,i;
    for(r=1;r<=n-1;r++)
    {
        for(i=0;i<=n-r-1;i++)
        {
            if(a[i]<a[i+1])
            {
                t=a[i];
                a[i]=a[i+1];
                a[i+1]=t;
                t=player_index[i];
                player_index[i]=player_index[i+1];
                player_index[i+1]=t;
            }
        }
    }
}

void show_rank(int sb[][4])
{
    int player_score[4], scores[4],player_index[4];
    int i;
    for(i=0;i<=3;i++)
    {
        player_score[i]= get_player_score(i,sb);
        scores[i]=player_score[i];
        player_index[i]=i;
    }
    sort(scores,4,player_index);
    for(i=0;i<=3;i++)
    {
        printf("%d) %d  - Score %d\n",i+1,player_index[i],scores[i]);
    }
}

void run()
{
    int sb[4][4]={0};   // sb=score board
    update_sb(0,1,2,sb);
    update_sb(0,2,1,sb);
    update_sb(0,3,2,sb);
    update_sb(1,2,1,sb);
    update_sb(1,3,0,sb);
    update_sb(2,3,0,sb);
    show_rank(sb);
}
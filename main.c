#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#define BORDER 254 
#define SOL 75
#define SAG 77
#define YUKARI 72
#define ASAGI 80

int i,j,H=16,W=25,game_over,score;
int x,y,point_x,point_y,a;
int gameover,score,c=0;
void duvar()
{
    	system("cls");
        for(i=0;i<H;i++)
        {
        printf(" ");
        for(j=0;j<W;j++)
        {
        if(i==0 || i==H-1|| j==0 || j==W-1)
        printf("%c",BORDER);
		else
        {
        if(i==x && j==y)
        printf("%c",2);
        else if(i== point_x && j==point_y)
        printf("*");
        else
        printf(" ");
        }
        }
        printf("\n");
        }
        printf("\nSCORE : %d\n",score);
        
}
void random_yem()
{
        game_over=0;
        x=H/2;
        y=W/2;
    	if(point_x==0 && point_y==0){
		
              
                if(point_x == 0)
                point_x=rand()%16;
                point_y=rand()%16;
                if(point_y == 0)
        }
    	score=0;
}
void kullanici_tus_girisi()
{
		if(kbhit())
        {
        switch(getch())
        {
    	case 75: a=1; //sol
        break;
        case 77: a=2; //sag
        break;
        case 72: a=3; //yukari
        break;
        case 80: a=4; //asagi
        break;
        case 'q': gameover=2;
        break;
        }
        }
}
void haraket()
{
        sleep(0.01);
        switch(a)
        {
                case 1: y--;
                break;
                case 2: y++;
                break;
                case 3: x--;
                break;
                case 4: x++;
                break;
        }
        if(x<1 || x>H -2|| y<1 || y>W-2)
                gameover=1;
        if(x==point_x && y==point_y)
        {
        	if(point_x==0 && point_y==0)
              
                if(point_x == 0)
                point_x=rand()%16;
                point_y=rand()%16;
                if(point_y == 0)
                score=score+10;
        }
}
int main()
{
        gameover=0;
        a=0;
    	c=0;
        random_yem();
    	while(gameover!=1 && gameover!=2)
                {
                duvar();
                kullanici_tus_girisi(getch());
                haraket();
                }
                if (gameover==1)
                printf("GAME OVER \n");
                }



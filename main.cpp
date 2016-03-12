#include<windows.h>
#include<stdio.h>
#include<conio.h>

HANDLE hCon =GetStdHandle(STD_OUTPUT_HANDLE); //struct для керування консоллю

enum TANK_DIRECTION{
    NORTH=72,
    EAST=75,
    WEST=77,
    SOUTH=80
};
enum TANK_DIRECTION diretion;

//const int LEFT=75;
//const int RIGHT=77;
//const int UP=72;
//const int DOWN=80;

//DrawPos і задати кородинати танка початкові


void drawTankUp(COORD drawPos){
    //малюємо танка
    //COORD drawPos = {10,10};// початкове положення курсора
    SetConsoleCursorPosition(hCon,drawPos);
       printf("  %c  \n",220);
       drawPos.Y++;
       SetConsoleCursorPosition(hCon,drawPos);
       printf("  %c  \n",186);
       drawPos.Y++;
       SetConsoleCursorPosition(hCon,drawPos);
       if(drawPos.Y % 2 == 0)
       {
           printf("%c%c%c%c%c\n",178,178,202,178,178);
       }else{
           printf("%c%c%c%c%c\n",176,176,202,176,176);
       }
       drawPos.Y++;
       SetConsoleCursorPosition(hCon,drawPos);
       if(drawPos.Y % 2 == 0)
       {
           printf("%c%c %c%c\n",178,178,178,178);
       }else{
           printf("%c%c %c%c\n",176,176,176,176);
       }
       drawPos.Y++;
       SetConsoleCursorPosition(hCon,drawPos);
       if(drawPos.Y % 2 == 0)
       {
           printf("%c%c %c%c\n",178,178,178,178);
       }else{
           printf("%c%c %c%c\n",176,176,176,176);
       }
       drawPos.Y++;
       SetConsoleCursorPosition(hCon,drawPos);
       if(drawPos.Y % 2 == 0)
       {
           printf("%c%c%c%c%c\n",178,178,205,178,178);
       }else{
           printf("%c%c%c%c%c\n",176,176,205,176,176);
       }
    }

void drawTankDown(COORD drawPos){
    //малюємо танка
    //COORD drawPos = {10,10};// початкове положення курсора

       SetConsoleCursorPosition(hCon,drawPos);
       if(drawPos.Y % 2 == 0)
       {
           printf("%c%c%c%c%c\n",176,176,205,176,176);
       }else{
           printf("%c%c%c%c%c\n",178,178,205,178,178);
       }
       drawPos.Y++;
       SetConsoleCursorPosition(hCon,drawPos);
       if(drawPos.Y % 2 == 0)
       {
           printf("%c%c %c%c\n",176,176,176,176);
       }else{
           printf("%c%c %c%c\n",178,178,178,178);
       }
       drawPos.Y++;
       SetConsoleCursorPosition(hCon,drawPos);
       if(drawPos.Y % 2 == 0)
       {
           printf("%c%c %c%c\n",176,176,176,176);
       }else{
           printf("%c%c %c%c\n",178,178,178,178);
       }
       drawPos.Y++;
       SetConsoleCursorPosition(hCon,drawPos);
       if(drawPos.Y % 2 == 0)
       {
           printf("%c%c%c%c%c\n",176,176,203,176,176);
       }else{
           printf("%c%c%c%c%c\n",178,178,203,178,178);
       }
       drawPos.Y++;
       SetConsoleCursorPosition(hCon,drawPos);
       printf("  %c  \n",186);
       drawPos.Y++;
       SetConsoleCursorPosition(hCon,drawPos);
       printf("  %c  \n",223);
       drawPos.Y++;
}

void drawTankRIGHT(COORD drawPos){
    SetConsoleCursorPosition(hCon,drawPos);
    if(drawPos.X % 2 == 0)
    {
        printf("%c%c%c%c%c%c%c%c\n",176,176,178,178,176,176,178,178);
    }else{
        printf("%c%c%c%c%c%c%c%c\n",178,178,176,176,178,178,176,176);
    }
        drawPos.Y++;

    SetConsoleCursorPosition(hCon,drawPos);
       printf(" %c     %c%c%c",186,204,205,254);

        drawPos.Y++;

    SetConsoleCursorPosition(hCon,drawPos);
    if(drawPos.X % 2 == 0)
    {
       printf("%c%c%c%c%c%c%c%c\n",176,176,178,178,176,176,178,178);
    }else{
       printf("%c%c%c%c%c%c%c%c\n",178,178,176,176,178,178,176,176);
    }
       drawPos.Y++;
}

void drawTankLEFT(COORD drawPos){
    SetConsoleCursorPosition(hCon,drawPos);
    if(drawPos.X % 2 == 0)
    {
        printf("%c%c%c%c%c%c%c%c\n",178,178,176,176,178,178,176,176);
    }else{
        printf("%c%c%c%c%c%c%c%c\n",176,176,178,178,176,176,178,178);
    }
    drawPos.Y++;
    drawPos.X--;
    drawPos.X--;
    SetConsoleCursorPosition(hCon,drawPos);
       printf("%c%c%c     %c",254,205,185,186);
        drawPos.X++;
        drawPos.X++;
       drawPos.Y++;
    SetConsoleCursorPosition(hCon,drawPos);
    if(drawPos.X % 2 == 0)
    {
        printf("%c%c%c%c%c%c%c%c\n",178,178,176,176,178,178,176,176);
    }else{
        printf("%c%c%c%c%c%c%c%c\n",176,176,178,178,176,176,178,178);
    }
       drawPos.Y++;
}
int main(){
    system("mode con cols=165 lines=65");//сторення консолі
    //конфігуруємо консоль(інормація про нього)
    CONSOLE_CURSOR_INFO cursorInfo;// структура яка інкапсолює в собі інформація про курсор
    cursorInfo.bVisible=false;// виключили курсор
    cursorInfo.dwSize=1;//розмір

    SetConsoleCursorInfo(hCon, &cursorInfo);// фунція яка до консолі встановлює інформацію про курсор
int x=0,y=0;
//drawTankDown({10,10});
//    drawTankUp({20,8});
//   drawTankRIGHT({30,10});
//drawTankLEFT({50,10});

    //стоврюємо бузкінечний цикл доки не буде Esc
    while(true){
        int ch=getch();
        switch(ch){
            case SOUTH://down
            system("cls");
            drawTankDown({x,y});
            y++;
            break;

            case NORTH://up
            system("cls");
            drawTankUp({x,y});
            y--;
            // drawTankForDirection();
            break;

            case WEST://right
            system("cls");
            drawTankRIGHT({x,y});
            x++;
            break;

            case EAST://left
            system("cls");
            drawTankLEFT({x,y});
            x--;
            break;

            case 32://shot
            break;

            case 27://escate
            return 0;



        }
    }

    return 0;
}

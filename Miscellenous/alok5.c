#include<windows.h>
void gotoxy(int x,int y)
{
    COORD c;
    c.X=x;
    c.Y=y;
    setconsolecursorposition(GetStdHandle(STD_OUTPUT_HANDLE),C);
}
main()
{
    gotoxy(20,8);
    printf("hello");
    getch();
}

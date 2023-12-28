#include<windows.h>
main()
{

  COORD c;
  c.X=20;
  c.Y=8;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
  //gotoxy(20,8);
  printf("Alok Kumar Gupta");
  getch();

}

#include <stdio.h>
#include "Fl_C.h"

int main(int argc, char** argv)
{
  void* win = Fl_Window_NewWH_WithTitle(640,480,500,500,"FLTK Window");
  Fl_Window_show_with_args(win,argc,argv);
  return flkc_run();
}

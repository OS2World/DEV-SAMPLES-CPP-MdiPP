#define INCL_WIN
#include <os2.h>
#include "MdiPP.ext"
#include "MdiPP.hpp"
void ClassMainWindow::UFCreate1More(void) {
   Window1 = new ClassWindow1;
   ShowWindow1((PVOID)NULL);
}
void UFKillItself(PGPFWINDOW pGpfWindow) {
   WinDestroyWindow(pGpfWindow->GetSafeHwndFrame());
}
// ==== End Of Code; Begin of Explanations =====//
// In this example the 'Window1' global pointer is being changed
// to point to a new instance of the ClassWindow1 class. If you use
// embedded actions in Gpf, you have to pay attention to the window
// this pointer is pointing to, because the Gpf generated code uses
// this pointer in every case when you use the 'Window1' window in embedded
// actions. So, for example, if you created one more instance
// and then destroyed it right away, the 'Window1' pointer becomes
// NULL and all the embedded actions relating to this window
// do not work. If you need to use them, you must save
// the previous pointers and restore them properly.
//
// ==== End Of Explanations ====================//

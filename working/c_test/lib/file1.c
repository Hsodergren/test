#include "caml/mlvalues.h"
#include "caml/memory.h"

int ASM_Succ(int, int);

CAMLprim value c_succ(value val, value rep) {
  CAMLparam2(val,rep);
  int v = Int_val(val);
  int r = Int_val(rep);
  int ret = ASM_Succ(v,r);

  CAMLreturn (Val_int(ret));
}

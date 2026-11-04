#include "src/include/types/ResourceSelection.h"
typedef char check_phase[(unsigned long)&((ResourceSelection *)0)->category==176 ? 1:-1];
extern void handler0(ResourceSelection *),handler1(ResourceSelection *),handler2(ResourceSelection *),handler3(ResourceSelection *),handler4(ResourceSelection *),handler5(ResourceSelection *),handler6(ResourceSelection *),handler7(ResourceSelection *),handler8(ResourceSelection *),handler9(ResourceSelection *),handler10(ResourceSelection *),handler11(ResourceSelection *),handler12(ResourceSelection *),handler13(ResourceSelection *),handler14(ResourceSelection *),handler15(ResourceSelection *),handler16(ResourceSelection *);
void dispatch_selection_phase(ResourceSelection *o) {switch(o->category) {
case 0:handler0(o);break;
case 1:case 2:handler1(o);break;
case 3:handler2(o);break;
case 5:handler3(o);break;
case 6:handler4(o);break;
case 7:handler5(o);break;
case 8:handler6(o);break;
case 9:handler7(o);break;
case 12:handler8(o);break;
case 13:handler9(o);break;
case 14:handler10(o);break;
case 15:handler11(o);break;
case 17:handler12(o);break;
case 18:handler13(o);break;
case 20:handler14(o);break;
case 10:case 11:case 16:case 19:handler15(o);break;
case 21:handler16(o);break;
}}

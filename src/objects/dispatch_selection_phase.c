typedef struct Object {char unknown0[176];int phase;} Object;
typedef char check_phase[(unsigned long)&((Object *)0)->phase==176 ? 1:-1];
extern void handler0(Object *),handler1(Object *),handler2(Object *),handler3(Object *),handler4(Object *),handler5(Object *),handler6(Object *),handler7(Object *),handler8(Object *),handler9(Object *),handler10(Object *),handler11(Object *),handler12(Object *),handler13(Object *),handler14(Object *),handler15(Object *),handler16(Object *);
void dispatch_selection_phase(Object *o) {switch(o->phase) {
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

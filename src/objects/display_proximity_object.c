#include "src/include/proximity_object.h"
extern void njPrintColor_8c38c5b6(unsigned int);
extern void debug_print_at_8c38cf80(unsigned int,const char *,...);
extern const char format_base[];
void display_proximity_object(ProximityObject *p) {
 p->radius=p->field_6c;
 njPrintColor_8c38c5b6(0xff00ff00);
 debug_print_at_8c38cf80(0x13001a,format_base+14);
 njPrintColor_8c38c5b6(0xfff0f0f0);
}

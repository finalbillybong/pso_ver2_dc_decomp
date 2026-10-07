#include "src/include/proximity_object.h"
extern void color_at(unsigned int);
extern void text_at(unsigned int,const char *,...);
extern const char format_base[];
void display_proximity_object(ProximityObject *p) {
 p->radius=p->field_6c;
 color_at(0xff00ff00);
 text_at(0x13001a,format_base+14);
 color_at(0xfff0f0f0);
}

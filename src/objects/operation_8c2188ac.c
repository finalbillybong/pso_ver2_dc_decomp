#include "src/include/classes/TObject.h"
typedef struct Arg0_8 Arg0_8;
extern int call_8c12b944(void);
void operation_8c2188ac(TObject *o)
{
    int i;
    unsigned int j;
    unsigned char *p;
    int k;
    unsigned char a;
    unsigned char b;
    if (o->link_08 != 0) {
        for (k = 0; k != o->tag; k++) {
            ((char *)o->link_08)[k] = k;
        }
    }
    if (o->link_08 != 0) {
        for (i = 0; i != o->tag; i++) {
            j = (unsigned int)((float)o->tag * ((float)call_8c12b944() / 32768.0f));
            p = (unsigned char *)o->link_08;
            a = p[i];
            b = p[j];
            p[i] = b;
            ((char *)o->link_08)[j] = a;
        }
    }
}

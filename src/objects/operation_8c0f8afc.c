#include "src/include/classes/TObjEneSlimeOne.h"
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct Frame Frame;
typedef struct TObjEneSlimeOne_p40c TObjEneSlimeOne_p40c;
struct Frame {
    char unknown0[0x10];
    Block8 f10;
};
extern int hierarchy_is_active(void *);
extern void operation_8c0f8108(void *, void *);
extern void call_8c047b24(TObjEneSlimeOne *, int, int, Block8);
float TObjEneSlimeOne_v25_8c0f8afc(TObjEneSlimeOne *o, int a1, int a2, Block8 a3)
{
    char *v11;
    int t1;
    if (a3.words[0] == 2) {
        v11 = (char *)o->f40c;
        if (v11 != 0) {
            t1 = hierarchy_is_active((void *)v11);
            if (t1 != 0) {
                operation_8c0f8108((void *)(o->f40c), (void *)(((char *)o + 0x3c)));
            }
        }
    }
    call_8c047b24(o, a1, a2, a3);
    return 0.0f;
}

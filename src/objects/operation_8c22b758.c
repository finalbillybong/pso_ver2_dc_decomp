#include "src/include/classes/TObjDFDemoF.h"
typedef struct Arg0_98 Arg0_98;
typedef struct Arg0_a4 Arg0_a4;
typedef struct Arg0_b0 Arg0_b0;
extern void njPushMatrixEx_8c38ae68(void);
extern void translate_current_matrix_v_8c382a40(void *);
extern void call_8c3827d8(void *);
extern void call_8c3aa716(void *, void *);
extern void draw_tree_a702(void *, void *, float);
extern void njPopMatrixEx_8c38ad10(void);
void TObjDFDemoF_render_8c22b758(TObjDFDemoF *o)
{
    int v1;
    int v2;
    njPushMatrixEx_8c38ae68();
    translate_current_matrix_v_8c382a40((void *)((void *)0x8c338230));
    v1 = (int)0;
    while (3 > v1) {
        v2 = (int)(v1 << 2);
        call_8c3827d8((void *)(*(Arg0_a4 **)((char *)((char *)o + 0xa4) + (v2))));
        if (*(int *)((char *)((char *)o + 0xb0) + (v2)) == 0) {
            call_8c3aa716((void *)(*(Arg0_98 **)((char *)((char *)o + 0x98) + (v2))), (void *)(*(Arg0_b0 **)((char *)((char *)o + 0xb0) + (v2))));
        } else {
            draw_tree_a702((void *)(*(Arg0_98 **)((char *)((char *)o + 0x98) + (v2))), (void *)(*(Arg0_b0 **)((char *)((char *)o + 0xb0) + (v2))), o->fbc);
        }
        v1 = (int)(v1 + 1);
    }
    njPopMatrixEx_8c38ad10();
}

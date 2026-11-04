#include "src/include/classes/TObjEneMe1Canadin.h"
typedef struct Arg0_28 Arg0_28;
typedef struct Arg0_38 Arg0_38;
typedef struct TObjEneMe1Canadin_p64 TObjEneMe1Canadin_p64;
extern "C" char g_8c300a74[];
extern "C" int call_8c05a0a8(void);
extern "C" int pack_ids_8c05a09c(int, int);
extern "C" void call_8c38c73a(int, void *);
extern "C" void call_8c05ba9c(TObjEneMe1Canadin *, int);
extern "C" void call_8c1086fc(void);
extern "C" void call_8c3827d8(void *);
extern "C" void njPushMatrixEx_8c38ae68(void);
extern "C" void translate_current_matrix_v_8c382a40(void *);
extern "C" void njRotateY_8c37df90(int, void *);
extern "C" void call_8c05baa8(void);
extern "C" void call_8c3aa716(void *);
extern "C" void njPopMatrixEx_8c38ad10(void);
extern "C" void call_8c391cc4(void);
extern "C" void operation_8c09502c(TObjEneMe1Canadin *o)
{
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    t1 = call_8c05a0a8();
    if (t1 != 0 && o->f3e0 == 0) {
        if (((o->f3e4 & 0x100)) != 0) {
            t2 = pack_ids_8c05a09c(0, 0);
            call_8c38c73a(t2, (void *)((g_8c300a74 + 0x15c)));
        } else {
            if (((o->f3e4 & 0x200)) != 0) {
                t3 = pack_ids_8c05a09c(0, 0);
                call_8c38c73a(t3, (void *)((g_8c300a74 + 0x16c)));
            } else {
                t4 = pack_ids_8c05a09c(0, 0);
                call_8c38c73a(t4, (void *)((g_8c300a74 + 0x17d)));
            }
        }
    }
    t5 = o->v11(400.0f, 15.0f);
    if (t5 != 0) {
        call_8c05ba9c(o, 0);
        call_8c1086fc();
        call_8c3827d8((void *)(o->f28));
        njPushMatrixEx_8c38ae68();
        translate_current_matrix_v_8c382a40((void *)(((char *)o + 0x3c)));
        njRotateY_8c37df90(0, (void *)(o->f64));
        call_8c05baa8();
        call_8c3aa716((void *)(o->f38));
        njPopMatrixEx_8c38ad10();
        call_8c391cc4();
    }
}

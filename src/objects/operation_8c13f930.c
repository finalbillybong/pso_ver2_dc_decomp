#include "src/include/classes/TObjCMLoadAfsTextureReq.h"
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct TObjCMLoadAfsTextureReq_p38 TObjCMLoadAfsTextureReq_p38;
typedef struct Arg0_3c Arg0_3c;
typedef struct TObjCMLoadAfsTextureReq_p64 TObjCMLoadAfsTextureReq_p64;
struct TObjCMLoadAfsTextureReq_p38 {
    int f00;
};
extern S_g8c4d97e0 *g_8c4d97e0;
extern int ADXF_GetStat_8c34da3c(void *);
extern void ADXF_Stop_8c34d79a(void *);
extern void call_8c34d4e8(void *);
extern void operation_8c13fa28(void *);
extern void game_free_8c011ec0(void *);
extern void TObject_dtor_8c03311c(void *, short);
extern void call_8c122774(void *, TObjCMLoadAfsTextureReq *);
TObjCMLoadAfsTextureReq *TObjCMLoadAfsTextureReq_dtor_8c13f930(TObjCMLoadAfsTextureReq *o, int a1)
{
    int v15;
    int v14;
    int t1;
    if (o != 0) {
        o->vtable = (void *)0x8c26dc08;
        if (o->f20 == 0 && o->f3c != 0) {
            t1 = ADXF_GetStat_8c34da3c((void *)(o->f64));
            if (t1 == 2) {
                ADXF_Stop_8c34d79a((void *)(o->f64));
            }
            call_8c34d4e8((void *)(o->f64));
            o->f64 = (TObjCMLoadAfsTextureReq_p64 *)0;
        }
        operation_8c13fa28((void *)o);
        v14 = (int)0;
        while (o->f5c > v14) {
            v15 = (int)(v14 << 2);
            if (*(int *)((char *)&o->f3c + (v15)) != 0) {
                game_free_8c011ec0((void *)(*(Arg0_3c **)((char *)&o->f3c + (v15))));
                *(int *)((char *)&o->f3c + (v15)) = 0;
            }
            v14 = (int)(v14 + 1);
        }
        if (o->f20 == 1) {
            if (o->f70 != 0) {
                o->f38->f00 &= ~o->f70;
            } else {
                if (o->f38 != 0) {
                    o->f38->f00 = 1;
                }
            }
        }
        TObject_dtor_8c03311c((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}

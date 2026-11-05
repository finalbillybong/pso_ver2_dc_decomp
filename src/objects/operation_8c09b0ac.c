#include "src/include/classes/TCMCharacter.h"
typedef struct S_g8c46ec10 S_g8c46ec10;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct TCMCharacter_p118 TCMCharacter_p118;
typedef struct S_vv3 S_vv3;
struct S_vv3 {
    int f00;
};
extern void operation_8c09c56c(void *);
extern void game_free_wrapper_2_8c09b538(void *);
extern void call_8c03dc40(void *, int);
extern void operation_8c09b2ec(TCMCharacter *);
extern void operator_delete_8c18de08(void *);
extern void destroy_object_8c01c500(void *, short);
extern void call_8c122774(void *, TCMCharacter *);
TCMCharacter *TCMCharacter_dtor_8c09b0ac(TCMCharacter *o, int a1)
{
    int v1;
    S_vv3 *v3;
    unsigned int v2;
    if (o != 0) {
        v1 = (int)(void *)0x8c46b06c;
        o->dispatch = (void *)0x8c265828;
        v2 = (unsigned int)v1;
        v2 = (unsigned int)(v2 + 0x3ac0);
        v3 = (S_vv3 *)v1;
        while (v2 > (int)v3) {
            if (v3->f00 != 0) {
                operation_8c09c56c((void *)v3);
            }
            v3 = (S_vv3 *)((char *)v3 + 940);
        }
        game_free_wrapper_2_8c09b538((void *)o);
        call_8c03dc40((void *)(*(S_g8c46ec10 **)0x8c46ec10), 1);
        *(int *)0x8c46ec10 = 0;
        operation_8c09b2ec(o);
        *(int *)0x8c46eb30 = *(int *)0x8c46eb34 = *(int *)0x8c46eb38 = 0;
        o->f38 = 0;
        operator_delete_8c18de08((void *)(o->f118));
        *(int *)0x8c41cb3c = *(int *)0x8c46b068 = *(int *)0x8c46ec14 = 0;
        destroy_object_8c01c500((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), o);
        }
    }
    return o;
}

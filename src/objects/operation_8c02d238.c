typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c010768 S_c8c010768;
typedef struct Object Object;
typedef struct S_vv1 S_vv1;
typedef struct S_x52688 S_x52688;
typedef struct S_x83232 S_x83232;
struct S_vv1 {
    int f00;
};
struct S_c8c010768 {
    char unknown0[0x2];
    unsigned short f02;
};
struct Object {
    char unknown0[0x2a];
    char f2a;
    char unknown2b[0x30f1];
    int f311c;
};
struct S_x83232 {
    int f00;
};
struct S_x52688 {
    unsigned char f00;
};
extern S_c8c010768 *payload_8c010768(void *);
extern int operation_8c0107b4(void *);
extern int call_8c010778(Object *);
extern void dispatch_game_command_8c02d368(Object *, int);
extern void operation_8c09cb84(void *);
void operation_8c02d238(Object *o)
{
    int *p;
    short i;
    unsigned int lim;
    int v6;
    int v7;
    int v8;
    int v9;
    int v10;
    int idx;
    int *pc;
    int t3;
    S_x52688 *q;
    p = (int *)0x8c004000;
    lim = 0x1000;
    for (i = 0; i < lim; i++) {
        if (*p++ != 0) {
            for (;;) {
            }
        }
    }
    v6 = 0x311c;
    v7 = 0x3118;
    v8 = 0x8000;
    v9 = 0x3120;
    v10 = 0xa88;
    while (operation_8c0107b4((void *)o) == 0) {
        if (*(int *)((char *)o + v6) == 0) {
            *(int *)((char *)o + v6) = payload_8c010768((void *)o)->f02;
            *(int *)((char *)o + v7) = 0;
            if (*(int *)((char *)o + v6) > v8) {
                o->f311c = 0;
                o->f2a = 1;
                return;
            }
        }
        if (*(int *)((char *)o + v6) <= 0) {
            return;
        }
        while (*(int *)((char *)o + v7) < *(int *)((char *)o + v6)) {
            if (operation_8c0107b4((void *)o) == 0) {
                t3 = call_8c010778(o);
                pc = (int *)((char *)o + v7);
                idx = *pc;
                *pc = idx + 1;
                *(char *)((char *)o + v9 + idx) = t3;
            } else {
                return;
            }
        }
        if (*(int *)((char *)o + v10) != 0) {
            q = (S_x52688 *)((char *)o + v9);
            if (q->f00 == 0x1d) {
                dispatch_game_command_8c02d368(o, (int)q);
            } else {
                operation_8c09cb84((void *)q);
            }
        } else {
            dispatch_game_command_8c02d368(o, (int)((int)o + v9));
        }
        *(int *)((char *)o + v6) = 0;
    }
}

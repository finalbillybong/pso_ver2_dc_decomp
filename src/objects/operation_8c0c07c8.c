typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_334 Arg0_334;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0xb8];
    short ff0;
    char unknownf2[0x6];
    float ff8;
    char unknownfc[0x68];
    Vector3 f164;
    char unknown170[0x19a];
    short f30a;
    char unknown30c[0x28];
    Arg0_334 *f334;
    char unknown338[0x58];
    int f390;
    int f394;
    int f398;
    int f39c;
    int f3a0;
    int f3a4;
};
struct Arg0_334 {
    char unknown0[0x324];
    Vector3 f324;
};
extern S_g8c4d97e0 *g_8c4d97e0;
extern void call_8c01c5f0(Object *);
extern void call_8c0c200c(Object *);
extern void create_effect_777c(void *, int);
extern void call_8c05fd7c(int, Object *, void *, int, int);
extern int allocate_block(void *, unsigned int);
extern void call_8c0c6ab4(int, void *, void *, int, Object *);
extern void call_8c0c1a4c(Object *, int);
extern void call_8c05fbf8(int, void *, int, int);
extern void call_8c044018(Object *);
extern void operation_8c04a43c(void *, float, void *);
extern void refresh_follow_effect_8c052180(void *);
void operation_8c0c07c8(Object *o)
{
    int v25;
    int v19;
    short v20;
    int t1;
    v25 = (int)o->f398;
    switch (v25) {
    case 0:
        o->f34 &= -0x4040001;
        o->f3a0 = 0x5a;
        if (((o->f34 & 0x1000000)) == 0) {
            o->ff0 = 2;
        } else {
            o->ff0 = 9;
        }
        o->f398 = 1;
        call_8c01c5f0(o);
        o->f3a4 &= -0x40001;
        return;
    case 1:
    case 2:
    case 3:
        if (o->f334 == 0) {
            o->f398 = 4;
            return;
        }
        switch (v25) {
        case 1:
            if (5.0f > o->ff8) {
                goto L_8c0c0908;
            }
            call_8c0c200c(o);
            create_effect_777c((void *)(((char *)o + 0x3b8)), 0xf7);
            o->f398 = 2;
            break;
        case 2:
            call_8c05fd7c(0x3001e, o, (void *)(((char *)o + 0x3c)), 0, 0);
            if (!(20.0f > o->ff8)) {
                call_8c0c200c(o);
                t1 = allocate_block(g_8c4d97e0, (unsigned int)0x138);
                if (t1 != 0) {
                    call_8c0c6ab4(t1, (void *)(((char *)o + 0x3b8)), (void *)(&o->f334->f324), !(o->f34 & 0x1000000), o);
                }
                call_8c0c1a4c(o, 0);
                call_8c05fbf8(0x30027, (void *)(((char *)o + 0x3c)), 0, 0);
                o->f398 = 3;
            }
        }
L_8c0c0908:;
        *(Vector3 *)&o->f164 = *(Vector3 *)&o->f334->f324;
        call_8c044018(o);
        call_8c01c5f0(o);
        if (((o->f34 & 0x1000000)) == 0) {
            operation_8c04a43c((void *)o, 0.0f, (void *)0);
        }
        refresh_follow_effect_8c052180((void *)o);
        if (--o->f3a0 > 0) {
            return;
        }
        o->f398 = 4;
        return;
    case 4:
        if (((o->f34 & 0x1000000)) != 0) {
            o->f394 = 0;
            if (((o->f3a4 & 1)) != 0) {
                return;
            }
            v19 = (int)o->f30a;
            if (v19 == 0xb) {
                return;
            }
            o->f39c = (int)(v19);
            o->f390 = 0xb;
            return;
        }
        if (((o->f3a4 & 1)) == 0) {
            v20 = (short)o->f30a;
            if (v20 != 0) {
                o->f39c = (int)(v20);
                o->f390 = 0;
            }
        }
        return;
    case -1:
        break;
    }
}

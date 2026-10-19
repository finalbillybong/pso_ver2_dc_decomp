typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c285510 S_L8c285510;
typedef struct S_g8c285510 S_g8c285510;
typedef struct S_g8c285510_0 S_g8c285510_0;
typedef struct S_g8c44bea0 S_g8c44bea0;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x22];
    int f28;
    int f2c;
    short f30;
    short f32;
};
struct S_L8c285510 {
    char unknown0[0x4];
    int f04;
};
extern S_g8c44bea0 *g_8c44bea0;
extern S_g8c4d97e0 *g_8c4d97e0;
extern S_L8c285510 g_8c285510;
extern int call_8c18e8a0(int, int);
extern int allocate_block(void *, unsigned int);
extern void operation_8c0b367c(void *, short, int);
extern int lookup_object_by_id(unsigned short);
extern void create_effect_777c(void *, int);
extern void call_8c0b6824(int, void *, int, int, int, void *);
void operation_8c0b3514(Object *o)
{
    unsigned int v6;
    int v8;
    char *v7;
    int v20;
    int v19;
    char *v45;
    int v4;
    int v5;
    int t1;
    int t2;
    int t3;
    int t4;
    o->f30 += 1;
    t1 = call_8c18e8a0((int)(o->f30), 5);
    if (t1 == 0) {
        t2 = allocate_block(g_8c4d97e0, (unsigned int)0x50);
        if (t2 != 0) {
            operation_8c0b367c((void *)t2, o->f32, (int)g_8c44bea0);
        }
    }
    if (o->f30 >= 0x1e) {
        v4 = (int)0x10f;
        v5 = (int)0x1a4;
        v6 = (unsigned int)0;
        goto L_8c0b35da;
        v7 = (char *)v6;
L_8c0b3570:;
        t3 = lookup_object_by_id((unsigned short)(o->f32));
        if (t3 != 0) {
            v8 = (int)o->f2c;
            if (v8 >= 0xf && 0x19 > v8) {
                if ((int)(v7) != 2) {
                    goto L_8c0b35d8;
                }
                create_effect_777c((void *)(t3 + 0x3c), v4);
                goto L_8c0b35d8;
            }
            if (v8 >= 0x19 && 0x1e > v8) {
                if ((int)(v7) != 2) {
                    goto L_8c0b35d8;
                }
                create_effect_777c((void *)(t3 + 0x3c), v5);
                goto L_8c0b35d8;
            }
            create_effect_777c((void *)(t3 + 0x3c), (int)(*(S_g8c285510_0 **)((char *)((char *)*(S_g8c285510 **)((char *)&g_8c285510 + (o->f28 << 3)) + 0x0) + ((int)(v7) << 3))));
        }
L_8c0b35d8:;
        v6 = (unsigned int)(v7 + 1);
L_8c0b35da:;
        v7 = (char *)v6;
        v45 = (char *)o->f28;
        if ((unsigned int)*(int *)((char *)&g_8c285510.f04 + ((int)(v45) << 3)) > v6) {
            goto L_8c0b3570;
        }
        if (v45 != 0) {
            if ((int)(v45) == 1) {
                goto L_8c0b3604;
            }
            if ((int)(v45) == 2) {
                goto L_8c0b3608;
            }
        } else {
            v19 = (int)0x100;
            goto L_8c0b360a;
L_8c0b3604:;
            v19 = (int)0;
            goto L_8c0b360a;
L_8c0b3608:;
            v20 = (int)-0x100;
        }
        v19 = (int)v20;
L_8c0b360a:;
        t4 = allocate_block(g_8c4d97e0, (unsigned int)0x2c);
        if (t4 != 0) {
            call_8c0b6824(t4, (void *)(((char *)o + 0x34)), 0xf, 0x2000d, v19, g_8c44bea0);
        }
        o->f04 |= 1;
    }
}

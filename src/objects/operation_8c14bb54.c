typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_cc Arg0_cc;
struct Object {
    char unknown0[0x24];
    float f24;
};
extern int create_effect_7a48(void *, int, int);
extern void set_effect_bit0(void *);
extern void operation_8c1857bc(void *, float);
void operation_8c14bb54(Object *o)
{
    float v2;
    float v1;
    int t1;
    int v8;
    int v7;
    float v3;
    int v6;
    v1 = (float)o->f24;
    v2 = (float)*(float *)0x8c286260;
    if (v2 > v1) {
        v3 = (float)(v1 / v2 * -5.0f);
    } else {
        v3 = (float)-5.0f;
    }
    v7 = (int)0;
    v6 = (int)0x171;
    while (4 > v7) {
        v8 = (int)(v7 << 2);
        if (*(int *)((char *)((char *)o + 0xcc) + (v8)) == 0) {
            t1 = create_effect_7a48((void *)(v7 * 0xc + 0x8c315594), v6, 1);
            if (t1 == 0) {
                goto L_8c14bbca;
            }
            set_effect_bit0((void *)t1);
            *(int *)((char *)((char *)o + 0xcc) + (v8)) = (int)(t1);
        } else {
            operation_8c1857bc((void *)(*(Arg0_cc **)((char *)((char *)o + 0xcc) + (v8))), v3);
        }
L_8c14bbca:;
        v7 = (int)(v7 + 1);
    }
}

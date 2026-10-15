typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0xa6];
    int fac;
    char unknownb0[0x10];
    int fc0;
    float fc4;
};
extern int create_effect_777c(void *, int);
extern void set_effect_bits(void *, unsigned short);
extern void call_8c05fbf8(int, void *, int, int);
extern void call_8c191504(int);
void operation_8c2283d0(Object *o)
{
    int v83;
    float v86;
    int v87;
    int t1;
    int t2;
    if (o->fc0 != 0x90) {
        goto L_8c22843e;
    }
    t1 = create_effect_777c((void *)(((char *)o + 0xb0)), 0xc3);
    if (t1 != 0) {
        set_effect_bits((void *)t1, (unsigned short)0x40);
    }
    call_8c05fbf8(0x30015, (void *)(((char *)o + 0xb0)), 0, 1);
    call_8c191504(2);
    goto L_8c22843e;
L_8c228412:;
    if (o->fac == 0) {
        if (v83 > 0xdc) {
            goto L_8c228448;
        }
    }
    t2 = create_effect_777c((void *)(((char *)o + 0xb0)), 0x14e);
    if (t2 == 0) {
        goto L_8c228448;
    }
    set_effect_bits((void *)t2, (unsigned short)0x40);
    goto L_8c228448;
L_8c22843e:;
    v83 = (int)o->fc0;
    if (v83 >= 0xb4) {
        goto L_8c228412;
    }
L_8c228448:;
    v86 = (float)(o->fc4 + 0.5f);
    o->fc4 = v86;
    if (v86 > 119.0f) {
        o->fc4 = 119.0f;
    }
    v87 = (int)((int)o->fc0 + 1);
    o->fc0 = (int)(v87);
    if (!(v87 >= 0x118)) {
        return;
    }
    o->f04 |= 1;
}

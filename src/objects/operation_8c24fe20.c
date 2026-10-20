typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_13c Arg0_13c;
typedef struct S_vv10 S_vv10;
typedef struct S_vv10_s4 S_vv10_s4;
typedef struct S_vv2 S_vv2;
typedef struct S_vv9 S_vv9;
struct Object {
    char unknown0[0x13c];
    Arg0_13c *f13c;
};
struct Frame {
    int f00;
    char unknown4[0x58];
    Vector3 f5c;
};
struct S_vv2 {
    int f00;
};
struct S_vv9 {
    short f00;
    short f02;
};
struct S_vv10 {
    char unknown0[0x4];
    short f04;
};
struct S_vv10_s4 {
    char unknown0[0x2];
    short f02;
};
extern int call_8c1aaabc(int);
extern int operation_8c075894(void *, void *, int, int);
extern void call_8c18e044(void *, void *, int, int, int);
extern void create_effect_b29c8(void *, void *, void *, void *);
extern void operation_8c07de9c();
void operation_8c24fe20(Object *o)
{
    Frame frame;
    int v1;
    char *v3;
    int v4;
    int v8;
    S_vv10 *v10;
    S_vv2 *v2;
    S_vv9 *v9;
    S_vv9 *q;
    switch ((short)call_8c1aaabc((int)((int)o->f13c + 0x754))) {
    case 1:
        v1 = 8;
        break;
    case 0:
        v1 = 3;
        break;
    default:
        v1 = 0;
        break;
    }
    if (operation_8c075894((void *)o, (void *)(o->f13c), 1, (int)&(&frame)->f5c) != 0) {
        v2 = (S_vv2 *)((int)((int)o->f13c + 0x754) + 0x30);
        if (v2 != 0) {
            v3 = (char *)((char *)(&frame) + 0x4);
            call_8c18e044(v3, operation_8c07de9c, 0, 8, 0xb);
            (&frame)->f00 = 0;
            v4 = v2->f00;
            if (v4 < 0 || v4 > 0xa) {
                v4 = 0;
            }
            (&frame)->f00 = v4;
            v9 = (S_vv9 *)v3;
            for (v8 = 0; v8 != 0xa; v8++) {
                q = (S_vv9 *)v2;
                q = (S_vv9 *)((char *)q + (v8 << 2));
                q = (S_vv9 *)((char *)q + 4);
                if (q != 0) {
                    v9->f00 = q->f00;
                    v9->f02 = q->f02;
                    v9 = (S_vv9 *)((char *)v9 + 8);
                }
            }
            if ((&frame)->f00 != 0) {
                create_effect_b29c8((void *)(o->f13c), (void *)&(&frame)->f5c, (void *)(&frame), (void *)v1);
            }
        }
    }
}

typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c418248 S_g8c418248;
typedef struct Object Object;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_30_0 Arg0_30_0;
typedef struct S_vv2 S_vv2;
typedef struct S_vv2_18 S_vv2_18;
struct Object {
    char unknown0[0x30];
    Arg0_30 *f30;
    char unknown34[0x52];
    short f86;
};
struct S_vv2 {
    int f00;
    char unknown4[0x14];
    S_vv2_18 *f18;
};
struct Frame {
    char unknown0[0x4];
};
extern int lookup_low_id(int);
extern int find_record_8c0744dc(int);
extern int call_8c074560(int, int, Frame *);
void operation_8c1d56d8(Object *o)
{
    Frame frame;
    S_vv2 *v2;
    int v1;
    int v3;
    int t1;
    int t2;
    int t3;
    t1 = lookup_low_id((int)(*(S_g8c418248 **)0x8c418248));
    if (t1 != 0) {
        v1 = (int)0;
        while ((short)v1 < o->f86) {
            v2 = (S_vv2 *)*(Arg0_30_0 **)((char *)((char *)o->f30 + 0x0) + ((short)v1 << 2));
            if (v2 != 0) {
                v3 = (int)v2->f00;
                if (((v3 & 4)) != 0 && ((v3 & 0x80)) == 0) {
                    t2 = find_record_8c0744dc((int)(v2->f18));
                    if (t2 != 0) {
                        t3 = call_8c074560(t2, t1, (Frame *)((&frame)));
                        if (t3 == 0) {
                            v2->f00 |= 0x80;
                        }
                    }
                }
            }
            v1 = (int)(v1 + 1);
        }
    }
}

typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c418248 S_g8c418248;
typedef struct Object Object;
typedef struct Arg0_88 Arg0_88;
typedef struct Arg0_90 Arg0_90;
struct Object {
    char unknown0[0x6c];
    float f6c;
    char unknown70[0x4];
    float f74;
    char unknown78[0x10];
    Arg0_88 *f88;
    int f8c;
    Arg0_90 *f90;
    char unknown94[0x4];
    int f98;
};
extern int operation_03d080(unsigned short);
extern int lookup_low_id(int);
extern float squared_distance_xz(void *, void *);
extern void call_8c1373a0(void *, int);
void operation_8c136c98(Object *o)
{
    int v1;
    float v2;
    int v9;
    int v12;
    int v16;
    int t1;
    int t2;
    float t3;
    v1 = (int)(1.0f <= o->f74);
    t1 = operation_03d080((unsigned short)(o->f90));
    if (v1 == (unsigned char)t1) {
        if (o->f98 > 0) {
            o->f98 -= 1;
            v9 = (int)0;
        } else {
            t2 = lookup_low_id((int)(*(S_g8c418248 **)0x8c418248));
            if (t2 != 0) {
                v2 = (float)o->f6c;
                v2 = (float)(v2 * v2);
                t3 = squared_distance_xz((void *)(((char *)o + 0x3c)), (void *)(t2 + 0x3c));
                if (v2 > t3) {
                    v12 = (int)1;
                    goto L_8c136d0a;
                }
                if (t3 > (v2 + 2500.0f)) {
                    o->f98 = 0x3c;
                }
            }
            v9 = (int)0;
        }
        v12 = (int)v9;
L_8c136d0a:;
        if (v12 != 0) {
            v16 = (int)(o->f8c == 0);
            call_8c1373a0((void *)(o->f88), v16);
        }
    }
}

typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c44be84 S_g8c44be84;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_714 Arg0_714;
struct Object {
    char unknown0[0x20];
    int f20;
    int f24;
    char unknown28[0x4];
    int f2c;
    int f30;
    char unknown34[0x6e0];
    Arg0_714 *f714;
};
extern S_g8c44be84 *g_8c44be84;
extern S_g8c4d97e0 *g_8c4d97e0;
extern int g_8c506140;
extern void operation_8c1cc690(void);
extern int allocate_block(void *, unsigned int);
extern void operation_8c220778(void *, int);
extern void call_8c2213ec(int, Object *);
extern void call_8c22c970(void *, float);
extern void initialize_color_rise(int, void *, void *);
extern void operation_8c0ea050();
void operation_8c0e9cc4(Object *o)
{
    unsigned int n;
    int v2;
    float f;
    int t1;
    switch (o->f20) {
    case 0:
        operation_8c1cc690();
        n = o->f24 + 1;
        o->f24 = n;
        v2 = o->f2c;
        if (n > (unsigned int)(v2 * 0x8c)) {
            t1 = allocate_block(g_8c4d97e0, 0x20);
            if (t1 != 0) {
                operation_8c220778((void *)t1, (int)o);
            }
            t1 = allocate_block(g_8c4d97e0, 0xa0);
            if (t1 != 0) {
                call_8c2213ec(t1, o);
            }
            o->f20 = 1;
            break;
        }
        if ((unsigned int)o->f24 > (unsigned int)(v2 * 0x8c) - (unsigned int)(f = (float)v2 * 2.0f)) {
            call_8c22c970((void *)o->f714, f);
        }
        break;
    case 1:
        if (g_8c506140 != 0) {
            v2 = o->f30 + 1;
            o->f30 = v2;
            if (v2 > o->f2c * 0xa) {
                t1 = allocate_block(g_8c4d97e0, 0x2c);
                if (t1 != 0) {
                    initialize_color_rise(t1, g_8c44be84, operation_8c0ea050);
                }
                o->f20 = 2;
            }
        }
        break;
    case 2:
        break;
    }
}

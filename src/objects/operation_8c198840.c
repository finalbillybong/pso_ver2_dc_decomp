typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c44be84 S_g8c44be84;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct S_g8c4dbde0 S_g8c4dbde0;
typedef struct Object Object;
typedef struct Arg0_24 Arg0_24;
struct Object {
    char unknown0[0x24];
    Arg0_24 *f24;
    int f28;
};
struct Arg0_24 {
    char unknown0[0x80];
    unsigned short f80;
};
extern S_g8c44be84 *g_8c44be84;
extern S_g8c4d97e0 *g_8c4d97e0;
extern S_g8c4dbde0 *g_8c4dbde0;
extern void call_8c18c808(void *);
extern int operation_8c1571f4(void *);
extern int allocate_block(void *, unsigned int);
extern void initialize_color_rise(int, void *, void *);
extern void operation_8c015ab4(void);
void operation_8c198840(Object *o)
{
    int t1;
    int t2;
    switch (o->f28) {
    case 2:
        break;
    case 0:
    case 1:
        if (((o->f24->f80 & 0xffff & 4)) != 0) {
            call_8c18c808(g_8c4dbde0);
            return;
        }
        if (((o->f24->f80 & 0xffff & 2)) != 0) {
            t1 = operation_8c1571f4((void *)(o->f24));
            if (t1 == 0) {
                t2 = allocate_block(g_8c4d97e0, (unsigned int)0x2c);
                if (t2 != 0) {
                    initialize_color_rise(t2, g_8c44be84, (void *)((void *)0x8c1988f8));
                }
                operation_8c015ab4();
                o->f28 = 2;
            }
            if (t1 == 1) {
                call_8c18c808(g_8c4dbde0);
            }
        }
    }
}

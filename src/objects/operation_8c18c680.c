typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c418248 S_g8c418248;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_74 Arg0_74;
struct Object {
    char unknown0[0x20];
    int f20;
    char unknown24[0x2e];
    short f52;
    short f54;
    char unknown56[0x1e];
    Arg0_74 *f74;
    void *f78;
};
struct Arg0_74 {
    char unknown0[0x4];
    short f04;
};
extern int lookup_low_id(int);
extern int allocate_block(void *, unsigned int);
extern void call_8c19176c(int, Object *);
extern int call_8c2097a8(int);
extern void call_8c18c904(Object *, void *, int);
extern void operation_8c026450(void);
extern void call_8c0a28f8(void *);
void operation_8c18c680(Object *o)
{
    int t1;
    int t2;
    int t3;
    if (((o->f20 & 1)) == 0) {
        if (o->f74 != 0) {
            o->f74->f04 |= 1;
            o->f74 = (Arg0_74 *)0;
        }
        t1 = lookup_low_id((int)*(S_g8c418248 **)0x8c418248);
        if (t1 != 0) {
            t2 = allocate_block(*(S_g8c4d97e0 **)0x8c4d97e0, (unsigned int)0x48);
            if (t2 != 0) {
                call_8c19176c(t2, o);
            }
            o->f74 = (Arg0_74 *)t2;
            o->f20 |= 1;
            o->f78 = (void *)0x8c31a198;
            o->f52 = 0;
            t3 = call_8c2097a8(4);
            if (t3 != 0) {
                o->f54 = 0;
            } else {
                o->f54 = *(short *)((char *)((char *)o + 0x7c) + (o->f52 << 3));
            }
            call_8c18c904(o, o->f78, 0);
            operation_8c026450();
            if (((o->f20 & 2)) == 0) {
                o->f20 |= 2;
                call_8c0a28f8(((char *)o + 0x24));
            }
        }
    }
}

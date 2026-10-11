typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c41c610 S_g8c41c610;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_44 S_g8c467180_44;
typedef struct S_g8c467180_44_0 S_g8c467180_44_0;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
struct Object {
    char unknown0[0x90];
    void *f90;
    int f94;
};
struct S_g8c41c610 {
    char unknown0[0x4];
    short f04;
};
struct S_g8c467180 {
    char unknown0[0x44];
    S_g8c467180_44 *f44;
};
struct S_g8c467180_44 {
    S_g8c467180_44_0 *f00;
};
extern S_g8c41c610 *g_8c41c610;
extern char g_8c44be18;
extern S_g8c467180 *g_8c467180;
extern S_g8c4d97e0 *g_8c4d97e0;
extern void *allocate_block(void *, int);
extern void call_8c22f1bc(void *, Object *);
extern void call_8c199688(void *, Object *, int);
extern void call_8c198294(void *, Object *);
extern void call_8c22e8e4(Object *, void *, int);
void create_object_8c22dc70(Object *o)
{
    void *t1;
    void *t2;
    void *t3;
    if (o->f90 == 0) {
        g_8c44be18 = 0;
        if (g_8c41c610 != 0) {
            g_8c41c610->f04 |= 0x10;
        }
        t1 = allocate_block(g_8c4d97e0, 0x108);
        if (t1 != 0) {
            call_8c22f1bc(t1, o);
        }
        o->f90 = t1;
        t2 = allocate_block(g_8c4d97e0, 0xac);
        if (t2 != 0) {
            call_8c199688(t2, o, 2);
        }
        t3 = allocate_block(g_8c4d97e0, 0x40);
        if (t3 != 0) {
            call_8c198294(t3, o);
        }
    }
    o->f94 = 4;
    call_8c22e8e4(o, g_8c467180->f44->f00, 1);
}

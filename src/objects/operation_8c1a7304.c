typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct S_x49968 S_x49968;
typedef struct S_x51376 S_x51376;
typedef struct S_x97120 S_x97120;
struct Object {
    char unknown0[0x766];
    short f766;
    int f768;
};
struct S_x97120 {
    float f00;
};
struct S_x49968 {
    float f00;
};
struct S_x51376 {
    float f00;
};
extern char g_8c288480[];
extern char g_8c288534[];
extern char g_8c288558[];
extern int operation_02c350(void *);
float operation_8c1a7304(Object *o)
{
    int t1;
    int t2;
    t1 = operation_02c350((void *)o);
    if ((short)t1 != 3) {
        if ((short)t1 == 0xe) {
            goto L_8c1a733a;
        }
    } else {
        return ((S_x97120 *)(o->f766 * 0xc + g_8c288534 + (o->f768 << 2)))->f00;
L_8c1a733a:;
        return ((S_x49968 *)(o->f766 * 0xc + g_8c288558 + (o->f768 << 2)))->f00;
    }
    t2 = operation_02c350((void *)o);
    return ((S_x51376 *)((short)t2 * 0xc + g_8c288480 + (o->f768 << 2)))->f00;
}

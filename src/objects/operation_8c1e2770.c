typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x68];
    unsigned short f68;
    char unknown6a[0xe];
    int f78;
    char unknown7c[0x8];
    int f84;
};
extern char g_8c32b5e4[];
extern void call_8c1e15e8(Object *, int);
extern void call_8c1e24ac(Object *);
extern int call_8c0dd9ec(int);
extern void reset_text_cursor_8c18ea38(void);
extern void operation_8c18ea4c(int);
extern void call_8c04c1a4(void *, void *);
void operation_8c1e2770(Object *o, int a1)
{
    int t1;
    if (((o->f68 & 2)) != 0) {
        if (((o->f68 & 4)) != 0) {
            call_8c1e15e8(o, 1);
        }
        call_8c1e24ac(o);
    }
    t1 = call_8c0dd9ec(a1);
    if (t1 != 0) {
        reset_text_cursor_8c18ea38();
        if (o->f78 != 0) {
            if (o->f78 == o->f84) {
                operation_8c18ea4c((int)(g_8c32b5e4 + 0x14));
                operation_8c18ea4c(t1);
                goto L_8c1e2804;
            }
            operation_8c18ea4c((int)(g_8c32b5e4 + 0x18));
            operation_8c18ea4c(t1);
            operation_8c18ea4c((int)(g_8c32b5e4 + 0x18));
        } else {
            operation_8c18ea4c(t1);
            if (o->f84 != 0) {
                operation_8c18ea4c((int)(g_8c32b5e4 + 0x18));
            }
        }
L_8c1e2804:;
        call_8c04c1a4((void *)(((char *)o + 0x74)), (void *)((void *)0x8c4dbe40));
    }
}

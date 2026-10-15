typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x234];
    int f234;
};
extern void operation_8c074ce4(void);
extern void call_8c37e390(int);
void operation_8c179a10(Object *o)
{
    if (*(int *)0x8c4689f0 != 1) {
        if (*(int *)0x8c4689f0 == 4) {
            goto L_8c179a46;
        }
        if (*(int *)0x8c4689f0 == 7) {
            goto L_8c179a62;
        }
        return;
    }
    operation_8c074ce4();
    call_8c37e390((int)(o->f234 * 0xc + 0x8c286758));
    return;
L_8c179a46:;
    operation_8c074ce4();
    call_8c37e390((int)(o->f234 * 0xc + 0x8c2867b8));
    return;
L_8c179a62:;
    operation_8c074ce4();
}

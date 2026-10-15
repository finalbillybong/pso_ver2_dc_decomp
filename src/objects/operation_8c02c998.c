typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x198];
    short f198;
    short f19a;
    char unknown19c[0x16c];
    short f308;
    char unknown30a[0x28];
    short f332;
    char unknown334[0x48];
    int f37c;
};
extern int operation_2391f4(void *);
extern void set_330(void *, short);
void operation_8c02c998(Object *o)
{
    int v1;
    int v2;
    int v12;
    int v25;
    v1 = (int)(*(int *)0x8c4dc800 == 1);
    if (v1 == 0 && *(int *)0x8c4703c0 == 3) {
        if (o->f37c == 0 || o->f37c == 0xf) {
            v2 = (int)0;
            goto L_8c02c9c6;
        }
        v2 = (int)1;
L_8c02c9c6:;
        if (v2 != 0) {
            v12 = (int)0;
            if (*(int *)0x8c2e2ad8 != 0 && (char)operation_2391f4((void *)((void *)0x8c41ce5c)) == 1) {
                v12 = (int)1;
            }
            if (v12 == 0) {
                v25 = (int)(o->f308 == 3);
                if (v25 == 0) {
                    set_330((void *)o, (short)1);
                    return;
                }
            }
        }
    }
    set_330((void *)o, o->f198);
    o->f332 = o->f19a;
}

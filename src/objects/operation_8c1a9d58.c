typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c324d68 S_g8c324d68;
typedef struct Object Object;
struct Object {
    char unknown0[0xa0];
    int fa0;
};
extern int operation_8c1a9ec4(void *);
extern void call_8c1aa184(void);
extern void call_8c1003d0(void *);
void operation_8c1a9d58(Object *o)
{
    int v1;
    int t1;
    if (*(int *)0x8c4e2f80 == 0) {
        t1 = operation_8c1a9ec4((void *)o);
        if (t1 != 0) {
            if (t1 != 1) {
                if (t1 == 2) {
                    return;
                }
                if (t1 == 3) {
                    return;
                }
                return;
            }
            v1 = (int)o->fa0;
            if (*(int *)0x8c4e1a40 != (int)v1) {
                if (v1 == 4) {
                    call_8c1aa184();
                } else {
                    call_8c1003d0((void *)(*(S_g8c324d68 **)((char *)0x8c324d68 + (v1 << 2))));
                }
                *(int *)0x8c4e1a40 = (int)(o->fa0);
            }
            *(int *)0x8c4e1a44 = 1;
            return;
        }
        *(int *)0x8c4e1a44 = 1;
    }
}

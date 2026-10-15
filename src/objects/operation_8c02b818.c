typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c169508 S_c8c169508;
typedef struct Object Object;
typedef struct Arg0_bc8 Arg0_bc8;
struct Object {
    char unknown0[0xbc8];
    Arg0_bc8 *fbc8;
};
struct S_c8c169508 {
    char unknown0[0x134];
    unsigned char f134;
};
extern int operation_2391f4(void *);
extern int operation_239218(void *);
extern int call_8c16a18c(void *, int);
extern S_c8c169508 *operation_8c169508(void *);
extern int operation_239228(void *);
int operation_8c02b818(Object *o, int a1)
{
    int v10;
    int t2;
    int t3;
    S_c8c169508 *t4;
    int t5;
    int t6;
    S_c8c169508 *t7;
    v10 = (int)0;
    if (*(int *)0x8c2e2ad8 != 0 && (char)operation_2391f4((void *)((void *)0x8c41ce5c)) == 1) {
        v10 = (int)1;
    }
    if (v10 != 0) {
        t2 = operation_239218((void *)((void *)0x8c41ce5c));
        if ((unsigned char)t2 == 2) {
            t3 = call_8c16a18c((void *)(o->fbc8), a1);
            if (t3 == 0) {
                return 0;
            }
            t4 = operation_8c169508((void *)t3);
            if (t4 == 0) {
                return 0;
            }
            if ((t4->f134) == 0) {
                return 0;
            }
        }
        t5 = operation_239228((void *)((void *)0x8c41ce5c));
        if ((unsigned char)t5 == 1) {
            t6 = call_8c16a18c((void *)(o->fbc8), a1);
            if (t6 == 0) {
                return 0;
            }
            t7 = operation_8c169508((void *)t6);
            if (t7 == 0) {
                return 0;
            }
            if (t7->f134 == 2) {
                return 0;
            }
        }
    }
    return 1;
}

typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c46fe20 S_g8c46fe20;
typedef struct Object Object;
typedef struct Arg0_5c Arg0_5c;
typedef struct S_vv2 S_vv2;
struct S_vv2 {
    char unknown0[0x86];
    unsigned short f86;
};
extern int hierarchy_is_active(void *);
extern int operation_8c0e1294(void *, int);
extern void call_8c0e12dc(S_vv2 *, int);
extern int call_8c0de07c(void *, int, int);
int operation_8c0ddfd4(Object *o, int a1, int a2, int a3)
{
    unsigned int v1;
    S_vv2 *v2;
    int t1;
    int t2;
    int t3;
    if (*(int *)0x8c46fe20 == 0) {
        return 0;
    }
    if (((a2 & 8)) != 0) {
        v1 = (unsigned int)0;
        while ((unsigned int)4 > v1) {
            if (*(int *)((char *)((char *)o + 0x5c) + (v1 << 2)) != 0) {
                v2 = (S_vv2 *)*(Arg0_5c **)((char *)((char *)o + 0x5c) + (v1 << 2));
                t1 = hierarchy_is_active((void *)v2);
                if (t1 != 0 && (unsigned short)a1 == (v2->f86 & 0xffff)) {
                    t2 = operation_8c0e1294((void *)v2, a3);
                    if (t2 != 0) {
                        call_8c0e12dc(v2, a2);
                        return 0;
                    }
                }
            }
            v1 = (unsigned int)(v1 + 1);
        }
    }
    t3 = call_8c0de07c((void *)(*(S_g8c46fe20 **)0x8c46fe20), a1, a2);
    return (int)(t3);
}

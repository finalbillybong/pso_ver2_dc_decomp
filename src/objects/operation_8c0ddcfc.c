typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c46fe20 S_g8c46fe20;
typedef struct S_g8c46fe20_5c S_g8c46fe20_5c;
typedef struct S_vv2 S_vv2;
struct S_vv2 {
    char unknown0[0x86];
    unsigned short f86;
};
extern int hierarchy_is_active(void *);
extern void call_8c0e13a0(S_vv2 *);
void operation_8c0ddcfc(int a0)
{
    unsigned int v1;
    S_vv2 *v2;
    int t1;
    if (*(int *)0x8c46fe20 != 0) {
        v1 = (unsigned int)0;
        while ((unsigned int)4 > v1) {
            if (*(int *)((char *)((char *)*(S_g8c46fe20 **)0x8c46fe20 + 0x5c) + (v1 << 2)) != 0) {
                v2 = (S_vv2 *)*(S_g8c46fe20_5c **)((char *)((char *)*(S_g8c46fe20 **)0x8c46fe20 + 0x5c) + (v1 << 2));
                t1 = hierarchy_is_active((void *)v2);
                if (t1 != 0 && (unsigned short)a0 == (v2->f86 & 0xffff)) {
                    call_8c0e13a0(v2);
                }
            }
            v1 = (unsigned int)(v1 + 1);
        }
    }
}

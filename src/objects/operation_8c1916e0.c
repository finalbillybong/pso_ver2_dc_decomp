typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block16 {
    int words[4];
} Block16;
typedef struct S_c8c36b024 S_c8c36b024;
typedef struct S_c8c36b024_30 S_c8c36b024_30;
typedef struct Frame Frame;
typedef struct S_frame_0 S_frame_0;
struct Frame {
    Block16 f00;
};
struct S_c8c36b024 {
    char unknown0[0x30];
    S_c8c36b024_30 *f30;
};
struct S_c8c36b024_30 {
    int f00;
};
extern S_c8c36b024 *call_8c36b024(void *);
extern int call_8c379cb0(int);
int operation_8c1916e0(void)
{
    Frame frame;
    int v1;
    unsigned int v2;
    unsigned int v3;
    char *v4;
    S_c8c36b024 *t1;
    int t2;
    v1 = (int)0;
    *(Block16 *)&(&frame)->f00 = *(Block16 *)&*(Block16 *)0x8c31a270;
    v2 = (unsigned int)0;
    while ((unsigned int)4 > v2) {
        t1 = call_8c36b024((void *)(*(S_frame_0 **)((char *)&(&frame)->f00 + (v2 << 2))));
        if (((t1->f30->f00 & 1)) != 0) {
            v3 = (unsigned int)0;
            while ((unsigned int)2 > v3) {
                v4 = (char *)*(int *)((char *)0x8c2876f8 + (v1 << 2));
                t2 = call_8c379cb0((int)(v4));
                if (t2 != 0) {
                    return (int)(v4);
                }
                v1 = (int)(v1 + 1);
                v3 = (unsigned int)(v3 + 1);
            }
            goto L_8c19174e;
        }
        v1 = (int)(v1 + 2);
        v2 = (unsigned int)(v2 + 1);
    }
    v3 = (unsigned int)/* ? r12 */ 0;
L_8c19174e:;
    return -1;
}

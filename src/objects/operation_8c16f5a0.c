typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct S_c8c021ef8_bc8 S_c8c021ef8_bc8;
typedef struct S_c8c169508 S_c8c169508;
typedef struct Frame Frame;
typedef struct S_g8c418248 S_g8c418248;
typedef struct S_g8c4db408 S_g8c4db408;
struct Frame {
    char f00;
    char f01;
    char f02;
    char unknown3[0x11];
};
struct S_c8c021ef8 {
    char unknown0[0xbc8];
    S_c8c021ef8_bc8 *fbc8;
};
struct S_c8c169508 {
    char unknown0[0xe8];
    int fe8;
};
extern S_c8c021ef8 *lookup_low_id(int);
extern void operation_1c7dd4(void *);
extern int find_node_8c16a3c0(void *, int);
extern S_c8c169508 *operation_8c169508(void *);
void operation_8c16f5a0(int a0, int a1)
{
    Frame frame;
    char *v1;
    S_c8c021ef8 *t1;
    int t2;
    S_c8c169508 *t3;
    t1 = lookup_low_id((int)(*(S_g8c418248 **)0x8c418248));
    if (t1 != 0) {
        operation_1c7dd4((void *)(&frame));
        v1 = (char *)*(int *)0x8c4db408;
        (&frame)->f00 = *(int *)((char *)((char *)v1 + 0x0) + ((unsigned char)a0++ << 2));
        (&frame)->f01 = *(int *)((char *)((char *)v1 + 0x0) + ((unsigned char)a0++ << 2));
        (&frame)->f02 = *(int *)((char *)((char *)v1 + 0x0) + ((unsigned char)a0 << 2));
        t2 = find_node_8c16a3c0((void *)(t1->fbc8), (int)(&frame));
        if (t2 != 0) {
            t3 = operation_8c169508((void *)t2);
            if (t3 != 0) {
                *(int *)((char *)((char *)*(S_g8c4db408 **)0x8c4db408 + 0x0) + ((unsigned char)a1 << 2)) = (int)(t3->fe8);
                return;
            }
            *(int *)((char *)((char *)*(S_g8c4db408 **)0x8c4db408 + 0x0) + ((unsigned char)a1 << 2)) = -1;
            return;
        }
        *(int *)((char *)((char *)*(S_g8c4db408 **)0x8c4db408 + 0x0) + ((unsigned char)a1 << 2)) = -1;
        return;
    }
    *(int *)((char *)((char *)*(S_g8c4db408 **)0x8c4db408 + 0x0) + ((unsigned char)a1 << 2)) = -1;
}

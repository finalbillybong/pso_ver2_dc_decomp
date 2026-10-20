typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_x86864 S_x86864;
struct Frame {
    Vector3 f00;
};
struct S_x86864 {
    char unknown0[0x1];
    char f01;
};
extern Vector3 g_8c325000;
extern int select_member_8c026104(void *, int);
typedef struct Index3 {
    int idx[3];
} Index3;
void operation_8c1acdf8(int a0, int a1)
{
    Index3 frame;
    int i;
    int off;
    char *t;
    i = 0;
    frame = *(Index3 *)&g_8c325000;
    for (; i < 3; i++) {
        t = (char *)select_member_8c026104((void *)(a0 + 0x24), 1);
        off = *(int *)((char *)&frame + (i << 2)) << 2;
        t += off;
        if ((unsigned short)*(unsigned char *)t == 0) {
            a0 += 0x24;
            a0 += 0x14;
            *(char *)(a0 + off) = 6;
            a0 += off;
            ((char *)a0)[1] = a1;
            return;
        }
    }
}

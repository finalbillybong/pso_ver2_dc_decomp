typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct Frame Frame;
typedef struct S_vv2 S_vv2;
typedef struct S_vv3 S_vv3;
typedef struct S_vv5 S_vv5;
struct Frame {
    Block8 f00;
    Block8 f08;
    Block8 f10;
};
struct S_vv2 {
    Block8 f00;
};
struct S_vv3 {
    Block8 f00;
};
struct S_vv5 {
    Block8 f00;
};
extern Block8 g_8c2850f8;
void operation_8c09b198(void)
{
    Frame frame;
    int v1;
    S_vv5 *v5;
    S_vv3 *v3;
    S_vv2 *v2;
    int v4;
    *(Block8 *)&(&frame)->f00 = *(Block8 *)&g_8c2850f8;
    *(Block8 *)&(&frame)->f10 = *(Block8 *)&g_8c2850f8;
    v1 = (int)0;
    while (0xa > v1) {
        v2 = (S_vv2 *)&*(int *)((char *)0x8c46eb3c + (v1 << 3));
        v3 = (S_vv3 *)&*(int *)((char *)0x8c46eb8c + (v1 << 3));
        *(Block8 *)&v2->f00 = *(Block8 *)&(&frame)->f10;
        *(Block8 *)&v3->f00 = *(Block8 *)&(&frame)->f10;
        v1 = (int)(v1 + 1);
    }
    *(Block8 *)&(&frame)->f08 = *(Block8 *)&(&frame)->f00;
    v4 = (int)0;
    while (5 > v4) {
        v5 = (S_vv5 *)&*(int *)((char *)0x8c46ebdc + (v4 << 3));
        *(Block8 *)&v5->f00 = *(Block8 *)&(&frame)->f08;
        v4 = (int)(v4 + 1);
    }
}

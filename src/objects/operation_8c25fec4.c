typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block48 {
    int words[12];
} Block48;
typedef struct S_c8c36b09a S_c8c36b09a;
typedef struct Frame Frame;
typedef struct S_frame_0 S_frame_0;
struct Frame {
    Block48 f00;
};
struct S_c8c36b09a {
    int f00;
    char unknown4[0x70];
    unsigned short f74;
    unsigned short f76;
};
extern S_c8c36b09a *call_8c36b09a(void *);
int operation_8c25fec4(void)
{
    Frame frame;
    int v2;
    int v1;
    S_c8c36b09a *t1;
    *(Block48 *)&(&frame)->f00 = *(Block48 *)&*(Block48 *)0x8c340730;
    v1 = (int)0x9c40;
    v2 = (int)0;
    while (v2 != 0xc) {
        t1 = call_8c36b09a((void *)(*(S_frame_0 **)((char *)&(&frame)->f00 + (v2 << 2))));
        if (t1 != 0 && ((t1->f00 & 0xe)) != 0 && (unsigned int)t1->f74 > (unsigned int)(unsigned short)v1 && (unsigned int)t1->f76 > (unsigned int)(unsigned short)v1) {
            return 1;
        }
        v2 = (int)(v2 + 1);
    }
    return 0;
}

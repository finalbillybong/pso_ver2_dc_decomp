typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block36 {
    int words[9];
} Block36;
typedef struct Block80 {
    int words[20];
} Block80;
typedef struct Frame Frame;
typedef struct S_g8c44be90 S_g8c44be90;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct S_vv4 S_vv4;
struct Frame {
    Block80 f00;
    char unknown50[0x38];
    Block36 f88;
    int fac;
    int fb0;
    float fb4;
    float fb8;
    float fbc;
    short fc0;
    char unknownc2[0x2];
    float fc4;
};
struct S_vv4 {
    char f00;
    char f01;
    char f02;
    char f03;
    int f04;
};
struct Object {
    unsigned char tag;
    char unknown1[0x34b];
    Block36 f34c;
    Block80 f370;
};
extern void operation_1c7dd4(void *);
extern void call_8c16b334(int, void *, int);
extern int allocate_block(void *, unsigned int);
extern void call_8c21ec90(int, void *, Frame *);
int operation_8c21ef24(Object *o)
{
    Frame frame;
    int v3;
    int v2;
    S_vv4 *v4;
    int v1;
    int t1;
    v1 = (int)((char *)(&frame) + 0x50);
    v3 = (int)0;
    v2 = (int)-1;
    while (2 > v3) {
        v4 = (S_vv4 *)(v1 + v3 * 0x1c);
        v4->f00 = 0;
        v4->f01 = v2;
        v4->f04 = 0;
        v4->f03 = 0;
        v4->f02 = 0;
        operation_1c7dd4((void *)((int)v4 + 8));
        v3 = (int)(v3 + 1);
    }
    (&frame)->fac = 0;
    (&frame)->fb0 = 0;
    (&frame)->fbc = 0.0f;
    (&frame)->fb8 = 0.0f;
    (&frame)->fb4 = 0.0f;
    (&frame)->fc0 = 1;
    (&frame)->fc4 = 0.0f;
    *(Block80 *)&(&frame)->f00 = *(Block80 *)&o->f370;
    *(Block36 *)&(&frame)->f88 = *(Block36 *)&o->f34c;
    call_8c16b334((int)(o->tag), (void *)(((char *)o + 0x4)), v1);
    t1 = allocate_block((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0xc7c);
    if (t1 != 0) {
        call_8c21ec90(t1, (void *)(*(S_g8c44be90 **)0x8c44be90), (Frame *)((&frame)));
    }
    return (int)(t1);
}

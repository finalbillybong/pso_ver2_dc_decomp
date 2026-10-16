typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct CBlock8 {
    char bytes[8];
} CBlock8;
typedef struct Frame Frame;
typedef struct S_g8c4dc2a0 S_g8c4dc2a0;
typedef struct Object Object;
struct Frame {
    char f00;
    char unknown1[0x7];
};
struct Object {
    char tag;
};
extern int operation_8c2097a8(int);
extern int operation_8c1916e0(void);
extern void call_8c379d1a(void *, Frame *);
void operation_8c191684(Object *o)
{
    Frame frame;
    int t1;
    int t2;
    t1 = operation_8c2097a8(8);
    if (t1 == 0) {
        t2 = operation_8c1916e0();
        *(int *)0x8c4dc2a0 = (int)(t2);
        if (t2 != -1) {
            *(CBlock8 *)&(&frame)->f00 = *(CBlock8 *)&o->tag;
            call_8c379d1a((void *)(*(S_g8c4dc2a0 **)0x8c4dc2a0), (Frame *)((&frame)));
        }
    }
}

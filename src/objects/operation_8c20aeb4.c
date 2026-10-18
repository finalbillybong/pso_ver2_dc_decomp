typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block28 {
    int words[7];
} Block28;
typedef struct Frame Frame;
typedef struct Object Object;
struct Frame {
    char f00;
    char f01;
    short f02;
    Block28 f04;
};
struct Object {
    Block28 tag;
};
extern int g_8c418248;
extern void operation_8c0368a8(void *);
void operation_8c20aeb4(Object *o)
{
    Frame frame;
    (&frame)->f00 = 0x74;
    (&frame)->f01 = 8;
    (&frame)->f02 = g_8c418248;
    *(Block28 *)&(&frame)->f04 = *(Block28 *)&o->tag;
    operation_8c0368a8((void *)(&frame));
}

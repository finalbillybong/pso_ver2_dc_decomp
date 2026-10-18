typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block20 {
    int words[5];
} Block20;
typedef struct Frame Frame;
typedef struct Object Object;
struct Frame {
    char f00;
    char f01;
    short f02;
    Block20 f04;
};
struct Object {
    Block20 tag;
};
extern void call_8c1c9418(void *);
extern void operation_8c0368a8(void *);
void operation_8c073d18(Object *o, int a1)
{
    Frame frame;
    (&frame)->f00 = 0x5e;
    (&frame)->f01 = 6;
    (&frame)->f02 = a1;
    *(Block20 *)&(&frame)->f04 = *(Block20 *)&o->tag;
    call_8c1c9418((void *)(&(&frame)->f04));
    operation_8c0368a8((void *)(&frame));
}

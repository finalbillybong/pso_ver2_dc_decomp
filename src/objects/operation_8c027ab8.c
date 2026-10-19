typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c2e39e8 S_g8c2e39e8;
typedef struct Object Object;
struct Object {
    unsigned char tag;
    char unknown1[0x3a0];
    char f3a1;
};
extern void call_8c027ae4(int, void *, void *);
void operation_8c027ab8(Object *o)
{
    char i = o->f3a1;
    o->tag = 5;
    call_8c027ae4((int)(o->tag), (void *)(*(S_g8c2e39e8 **)((char *)0x8c2e39e8 + (i << 2))), (void *)(((char *)o + 0x4)));
}

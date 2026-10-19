typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct Object Object;
struct Object {
    char unknown0[0x2];
    short f02;
    Block8 f04;
};
extern void call_8c029cf0(int, int, Block8);
void operation_8c029c14(Object *o)
{
    int v3;
    int v6;
    if ((unsigned short)o->f02 == 0xffff) {
        v6 = (int)0;
    } else {
        if ((int)(unsigned short)o->f02 >= 0xc) {
            v3 = (int)0;
        } else {
            v3 = (int)*(int *)((char *)0x8c41ce2c + ((unsigned short)o->f02 << 2));
        }
        v6 = (int)v3;
    }
    if (v6 != 0) {
        call_8c029cf0(v6, v6, *(Block8 *)&o->f04);
    }
}

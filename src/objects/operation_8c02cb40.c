typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x2];
    short f02;
    char f04;
};
extern int call_8c247778(int, char);
void operation_8c02cb40(Object *o)
{
    int v1;
    short v2;
    int v4;
    int v8;
    int v15;
    v1 = (int)*(int *)0x8c4627c8;
    v2 = o->f02;
    v4 = (int)0;
    if (v1 == 0) {
        if ((unsigned short)v2 == *(int *)0x8c418248) {
            v4 = (int)1;
        }
    }
    v8 = (int)(v4 == 0);
    if (v8 != 0) {
        if ((unsigned short)v2 == 0xffff) {
            v15 = (int)0;
        } else if ((int)(unsigned short)v2 >= 0xc) {
            v15 = (int)0;
        } else {
            v15 = (int)*(int *)((char *)0x8c41ce2c + ((unsigned short)v2 << 2));
        }
        if (v15 != 0) {
            call_8c247778((int)(v15 + 0x3bc), o->f04);
        }
    }
}

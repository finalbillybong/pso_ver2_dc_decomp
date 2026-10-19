typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x2];
    short f02;
};
extern int g_8c418248;
extern int g_8c4627c8;
extern void clear_flag28_8c02bb8c(void *);
void operation_8c02bb28(Object *o)
{
    int v1;
    unsigned short v2;
    int v4;
    int v7;
    int v8;
    int v11;
    int v14;
    v1 = (int)g_8c4627c8;
    v2 = (unsigned short)o->f02;
    v7 = (int)0;
    if (v1 == 0) {
        v4 = (int)0;
        if ((unsigned short)v2 == g_8c418248) {
            v4 = (int)1;
        }
        v7 = (int)v4;
    }
    v8 = (int)(v7 == 0);
    if (v8 != 0) {
        if ((unsigned short)v2 == 0xffff) {
            v14 = 0;
        } else {
            if ((int)(unsigned short)v2 >= 0xc) {
                v11 = 0;
            } else {
                v11 = (int)*(int *)((char *)0x8c41ce2c + ((unsigned short)v2 << 2));
            }
            v14 = (int)v11;
        }
        if (v14 != 0) {
            clear_flag28_8c02bb8c((void *)v14);
        }
    }
}

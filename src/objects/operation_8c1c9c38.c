typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block60 {
    int words[15];
} Block60;
typedef struct Frame Frame;
typedef struct Object Object;
struct Object {
    unsigned char tag;
    unsigned char f01;
    unsigned char f02;
    char f03;
    char unknown4[0x1];
    char f05;
};
struct Frame {
    Block60 f00;
};
extern Block60 g_8c328eb8;
extern int operation_8c15842c(unsigned char);
int operation_8c1c9c38(Object *o)
{
    Frame frame;
    unsigned char v1;
    unsigned char v10;
    v1 = (unsigned char)o->tag;
    if (v1 == 0) {
        *(Block60 *)&(&frame)->f00 = *(Block60 *)&g_8c328eb8;
        if ((unsigned int)0x89 > (unsigned int)o->f01) {
            v10 = operation_8c15842c(o->f01);
        } else {
            switch (v1) {
            case 0:
                v10 = o->f05;
                break;
            case 1:
                v10 = o->f03;
                break;
            case 3:
                v10 = o->f03;
                break;
            case 2:
                if ((unsigned int)o->f02 > (unsigned int)0xc8) {
                    v10 = o->f02 + -0xc8;
                } else {
                    v10 = 0;
                }
                break;
            default:
                v10 = 0;
            }
        }
        if ((unsigned int)0xf > (unsigned int)v10) {
            return (int)(*(int *)((char *)&(&frame)->f00 + (v10 << 2)));
        }
    }
    return 0;
}

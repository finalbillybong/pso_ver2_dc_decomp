typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block16 {
    int words[4];
} Block16;
typedef struct S_g8c300a58 S_g8c300a58;
typedef struct Object Object;
typedef struct Block_p0_4c0 {
    float f00;
    char unknown4[0xc];
} Block_p0_4c0;
struct Object {
    char unknown0[0x4c0];
    Block_p0_4c0 f4c0;
    char unknown4d0[0x4];
    int f4d4;
    int f4d8;
    int f4dc;
    int f4e0;
};
extern void operation_8c0910b8(void *);
void operation_8c090f94(Object *o)
{
    float v1;
    float v6;
    int v12;
    switch (o->f4d4) {
    case 0:
        break;
    case 1:
        v1 = (float)o->f4c0.f00;
        if (v1 > 0.0f) {
            o->f4c0.f00 = v1 - 0.06f;
        } else {
            o->f4c0.f00 = 0.0f;
            o->f4d4 = 0;
        }
        operation_8c0910b8((void *)o);
        return;
    case 2:
        v6 = (float)o->f4c0.f00;
        if (1.0f > v6) {
            o->f4c0.f00 = v6 + 0.06f;
        } else {
            o->f4c0.f00 = 1.0f;
            o->f4d4 = 0;
        }
        operation_8c0910b8((void *)o);
        return;
    case 3:
        *(int *)((char *)o + 0x4dc) += 1;
        if (!(2.0f > (float)o->f4dc)) {
            o->f4dc = 0;
            v12 = (int)o->f4e0;
            o->f4e0 = v12 + 1;
            switch (*(char *)((char *)((char *)*(S_g8c300a58 **)((char *)0x8c300a58 + (o->f4d8 << 2)) + 0x0) + (v12))) {
            case 98:
                o->f4c0.f00 = 0.0f;
                break;
            case 99:
                o->f4d4 = 0;
                *(Block16 *)&o->f4c0 = *(Block16 *)&*(Block16 *)0x8c284fc8;
                break;
            case 97:
                o->f4c0.f00 = 1.0f;
            }
            operation_8c0910b8((void *)o);
        }
    }
}

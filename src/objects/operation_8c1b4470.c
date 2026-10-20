typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_39c Arg0_39c;
typedef struct S_vv3 S_vv3;
typedef struct S_x44624 S_x44624;
typedef struct Block_frame_c {
    float f00;
    char unknown4[0x4];
    float f08;
} Block_frame_c;
typedef struct Block_frame_0 {
    float f00;
    char unknown4[0x4];
    float f08;
} Block_frame_0;
struct Object {
    char unknown0[0x64];
    int f64;
    char unknown68[0x334];
    Arg0_39c *f39c;
};
struct Frame {
    Block_frame_0 f00;
    Block_frame_c f0c;
};
struct S_x44624 {
    Vector3 f00;
};
struct S_vv3 {
    Vector3 f00;
    char unknownc[0x10];
    Vector3 f1c;
};
extern void call_8c37f6f0(void *, void *);
extern float call_8c37eb0c(int);
extern float call_8c38c154(int);
void operation_8c1b4470(Object *o)
{
    Frame frame;
    S_vv3 *v3;
    int v2;
    int v1;
    float t1;
    float t2;
    v2 = (int)0;
    v3 = (S_vv3 *)o->f39c;
    v1 = (int)0x438;
    while (3 > v2) {
        *(Vector3 *)&(&frame)->f0c = *(Vector3 *)&((S_x44624 *)((int)o + v1 + v2 * 0x18))->f00;
        *(Vector3 *)&v3->f1c = *(Vector3 *)&(&frame)->f0c;
        call_8c37f6f0((void *)(&(&frame)->f0c), (void *)(((char *)o + 0x3c)));
        t2 = call_8c37eb0c((int)(-(int)(o->f64)));
        t1 = call_8c38c154((int)(-(int)(o->f64)));
        *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&(&frame)->f0c;
        {
            float x;
            float z;
            z = (&frame)->f00.f08;
            x = (&frame)->f00.f00;
            (&frame)->f0c.f00 = t1 * x + t2 * z;
            (&frame)->f0c.f08 = -t2 * x + t1 * z;
        }
        *(Vector3 *)&v3->f00 = *(Vector3 *)&(&frame)->f0c;
        v2 = (int)(v2 + 1);
        v3 = (S_vv3 *)((char *)v3 + 44);
    }
}

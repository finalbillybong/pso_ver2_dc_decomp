typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Block_p0_3c {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_p0_3c;
typedef struct Block_frame_0 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_frame_0;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0x4];
    Block_p0_3c f3c;
    char unknown48[0xa8];
    short ff0;
    char unknownf2[0x218];
    short f30a;
    short f30c;
    char unknown30e[0x82];
    short f390;
    char unknown392[0x2];
    char f394;
};
struct Frame {
    Block_frame_0 f00;
};
extern int operation_8c051ff4(void *, void *, void *);
void operation_8c0505a4(Object *o)
{
    Frame frame;
    int t1;
    if (((o->f390 & 2)) == 0 && ((o->f34 & 0xa00)) == 0) {
        if (((o->f390 & 0x20)) != 0) {
            o->f390 &= -0x21;
            o->f34 &= -0x2000001;
            *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&o->f3c;
            t1 = operation_8c051ff4((void *)o, (void *)(&frame), (void *)0);
            if (t1 == 1) {
                o->f3c.f04 = (&frame)->f00.f04 + 300.0f;
            }
        }
        if (o->f30a != 0) {
            o->f30a = 0;
            o->f30c = 0;
            switch (o->f394) {
            case 0:
                o->ff0 = 3;
                return;
            case 1:
                o->ff0 = 0;
            }
        }
    }
}

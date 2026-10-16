typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block16 {
    int words[4];
} Block16;
typedef struct S_c8c011308 S_c8c011308;
typedef struct S_c8c011308_4 S_c8c011308_4;
typedef struct Frame Frame;
struct Frame {
    float f00;
    float f04;
    float f08;
    float f0c;
    float f10;
    float f14;
    float f18;
    float f1c;
    float f20;
};
struct S_c8c011308 {
    char unknown0[0x4];
    S_c8c011308_4 *f04;
};
struct S_c8c011308_4 {
    float f00;
    float f04;
    float f08;
    float f0c;
    float f10;
    float f14;
};
extern S_c8c011308 *call_8c011308(int, int, int);
extern float call_8c38d7d8(void *, int);
extern void call_8c2368a8(int, void *, void *, int, float, Frame *);
void operation_8c23679c(int a0)
{
    Frame frame;
    float v1;
    S_c8c011308 *t1;
    float t2;
    t1 = call_8c011308((int)(a0 + 0x3c), (int)(a0 + 0x94), 0x15);
    if (t1 != 0) {
        (&frame)->f0c = t1->f04->f00;
        (&frame)->f10 = t1->f04->f04;
        (&frame)->f14 = t1->f04->f08;
        (&frame)->f18 = t1->f04->f0c;
        (&frame)->f1c = t1->f04->f10;
        (&frame)->f20 = t1->f04->f14;
        t2 = call_8c38d7d8((void *)(&(&frame)->f0c), (int)(a0 + 0x3c));
        (&frame)->f00 = 0.2f / (t2 + 1.0f) + 0.85f;
        (&frame)->f04 = 0.2f / (t2 + 1.0f) + 0.85f;
        (&frame)->f08 = 0.2f / (t2 + 1.0f) + 0.85f;
        *(Block16 *)&*(Block16 *)0x8c46f564 = *(Block16 *)&*(Block16 *)0x8c5755ac;
        v1 = (float)(0.2f / (t2 + 1.0f) * 2.0f + 0.5f);
        if (!(1.0f > (0.2f / (t2 + 1.0f) * 2.0f + 0.5f))) {
            v1 = (float)1.0f;
        }
        call_8c2368a8(a0, (void *)(&(&frame)->f0c), (void *)(&(&frame)->f18), 0, v1, (Frame *)((&frame)));
        *(Block16 *)&*(Block16 *)0x8c5755ac = *(Block16 *)&*(Block16 *)0x8c46f564;
    }
}

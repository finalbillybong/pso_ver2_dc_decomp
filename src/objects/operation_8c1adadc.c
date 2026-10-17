typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c467240 S_g8c467240;
typedef struct S_vv5 S_vv5;
typedef struct S_vv5_s60 S_vv5_s60;
typedef struct Block_frame_0 {
    float f00;
    char unknown4[0x4];
    float f08;
} Block_frame_0;
struct Frame {
    Block_frame_0 f00;
    Vector3 f0c;
};
struct S_vv5 {
    char unknown0[0x3c];
    Vector3 f3c;
    Vector3 f48;
};
struct S_vv5_s60 {
    char unknown0[0x4];
    int f04;
};
extern int operation_8c1adfb8(void *);
extern int call_8c18e768(int, int);
extern float call_8c37eb0c(int);
extern float call_8c38c154(int);
extern void operation_8c0a1b78(void *);
void operation_8c1adadc(int a0)
{
    Frame frame;
    S_vv5 *v5;
    int t1;
    int v3;
    int v10;
    int t4;
    int v4;
    int v1;
    float t2;
    float t3;
    int v2;
    *(Vector3 *)&(&frame)->f0c = *(Vector3 *)&*(Vector3 *)0x8c325248;
    t1 = operation_8c1adfb8((void *)a0);
    t4 = call_8c18e768(t1, 2);
    v1 = (int)0x37c;
    v3 = (int)t4;
    v4 = (int)0;
    v2 = (int)0x8000;
    while (*(int *)0x8c467874 > v4) {
        v5 = (S_vv5 *)*(S_g8c467240 **)((char *)0x8c467240 + (v4 << 2));
        if (v5 != 0 && *(int *)((char *)((char *)v5 + 0x0) + (v1)) == 0xe) {
            *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&(&frame)->f0c;
            t2 = call_8c37eb0c(v3);
            (&frame)->f00.f00 += t2 * 12.5f;
            t3 = call_8c38c154(v3);
            (&frame)->f00.f08 += t3 * 12.5f;
            *(Vector3 *)&v5->f3c = *(Vector3 *)&(&frame)->f00;
            *(Vector3 *)&v5->f48 = *(Vector3 *)&v5->f3c;
            ((S_vv5_s60 *)((char *)v5 + 0x60))->f04 = (int)(v2);
            if ((int)v4 == *(int *)0x8c418248) {
                operation_8c0a1b78((void *)v5);
            }
            v10 = (int)(v3 + t1);
            v3 = (int)v10;
        }
        v4 = (int)(v4 + 1);
    }
}

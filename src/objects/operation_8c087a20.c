typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int operation_8c087c70(float);
extern int operation_8c01c25c(void);
extern void operation_8c087c18(void);
extern void call_8c087354(int, void *, float, float, float);
void operation_8c087a20(float f0, float f1, float f2, float f3)
{
    float v2;
    float v1;
    int t1;
    int t2;
    if (f3 > 0.0f) {
        v1 = (float)f3;
        if (f3 > 1.0f) {
            v1 = (float)1.0f;
        }
        v2 = (float)-1.0f;
        v2 = (float)(v2 / f2);
        t2 = operation_8c087c70(v1);
        t1 = operation_8c01c25c();
        if (t1 == 0x10) {
            operation_8c087c18();
            call_8c087354((int)(t2 | 0xffffff), (void *)((void *)0x8c4dbe40), f0, f1 + -1.0f, v2);
        }
    }
}

typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int operation_8c03f6d8(void);
extern int global_present_8c25e560(void);
extern int operation_8c25e540(void);
int operation_8c232060(void)
{
    int v10;
    int t1;
    int t2;
    int t3;
    t1 = operation_8c03f6d8();
    switch (t1) {
    case 0:
    case 2:
        t2 = global_present_8c25e560();
        return (int)(t2);
    case 1:
        v10 = (int)1;
        t3 = operation_8c25e540();
        if (t3 == 0 && global_present_8c25e560() == 0) {
            v10 = (int)0;
        }
        return (int)(v10);
    default:
        for (;;) {
        }
        return (int)(t1);
    }
}

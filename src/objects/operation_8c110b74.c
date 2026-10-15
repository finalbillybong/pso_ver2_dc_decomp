typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int lookup_low_id(int);
extern void call_8c021cc0(int, int);
void operation_8c110b74(int a0)
{
    int v4;
    int v1;
    int v5;
    int v2;
    int v3;
    int t1;
    v1 = (int)0x308;
    v2 = (int)0x5f8;
    v3 = (int)0xffff;
    v4 = (int)0;
    while (4 > v4) {
        t1 = lookup_low_id(v4);
        if (t1 != 0) {
            v5 = (int)(*(short *)((char *)((char *)t1 + 0x0) + (v1)) == 3);
            if (v5 != 0 && (*(unsigned short *)((char *)((char *)t1 + 0x0) + (v2)) & 0xffff) != (unsigned short)v3) {
                call_8c021cc0(t1, a0);
            }
        }
        v4 = (int)(v4 + 1);
    }
}

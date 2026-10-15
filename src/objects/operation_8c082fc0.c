typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int lookup_low_id(int);
extern float call_8c38d7d8(int, int);
int operation_8c082fc0(int a0, int a1, float f0)
{
    int v2;
    int v44;
    int v1;
    int v43;
    int t1;
    float t2;
    int t3;
    float t4;
    if (a1 == 1) {
        v1 = (int)0x37c;
        v2 = (int)0;
        while (0xc > v2) {
            t1 = lookup_low_id(v2);
            if (t1 != 0 && *(int *)((char *)((char *)t1 + 0x0) + (v1)) == *(int *)0x8c44be04) {
                t2 = call_8c38d7d8((int)(a0 + 0x3c), (int)(t1 + 0x3c));
                if (f0 > t2) {
                    return 0;
                }
            }
            v2 = (int)(v2 + 1);
        }
        return 1;
    }
    if (a1 == 0) {
        v43 = (int)0x37c;
        v44 = (int)0;
        while (0xc > v44) {
            t3 = lookup_low_id(v44);
            if (t3 != 0 && *(int *)((char *)((char *)t3 + 0x0) + (v43)) == *(int *)0x8c44be04) {
                t4 = call_8c38d7d8((int)(a0 + 0x3c), (int)(t3 + 0x3c));
                if (f0 > t4) {
                    return 1;
                }
            }
            v44 = (int)(v44 + 1);
        }
        return 0;
    }
    return 0;
}

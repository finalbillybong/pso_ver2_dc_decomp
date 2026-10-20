typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int call_8c12b944(void);
extern int call_8c09abac(int, int, int);
int operation_8c09ab38(int a0)
{
    int v2;
    int v1;
    v1 = (unsigned char)(int)((float)call_8c12b944() / 32768.0f * 255.0f);
    v2 = (unsigned char)(int)((float)call_8c12b944() / 32768.0f * 255.0f);
    if (v1 == 0) {
        v1 = 0x39;
    }
    if (v2 == 0) {
        v2 = 0x69;
    }
    if (v1 == v2) {
        v1 = 0x39;
        v2 = 0x69;
    }
    return call_8c09abac(a0, v1, v2);
}

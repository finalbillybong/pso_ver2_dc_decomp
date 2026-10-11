typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void *player_flag9_8c026508(void);
int operation_8c068270(int a0, int a1, int a2)
{
    int v2;
    void *t1;
    t1 = player_flag9_8c026508();
    v2 = a1;
    if (t1 != 0) {
        v2 = a1 & -0x30607;
    }
    return v2 & a2;
}

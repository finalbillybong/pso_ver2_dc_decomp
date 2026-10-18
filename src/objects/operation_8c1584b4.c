typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c2863d0 S_g8c2863d0;
extern int operation_8c158980(int, int);
extern int call_8c158794(int);
int operation_8c1584b4(int a0)
{
    int v4;
    int t2;
    int v3;
    int t1;
    int v2;
    v4 = 0;
    if ((unsigned int)4 > (unsigned int)(unsigned char)a0) {
        t2 = operation_8c158980((int)(*(S_g8c2863d0 **)((char *)0x8c2863d0 + ((unsigned char)a0 << 2))), 0xf);
        a0 = (unsigned char)a0 + 1;
        v3 = 0;
        for (v2 = 1; v2 != 0x29; v2++) {
            t1 = call_8c158794(v2);
            if (a0 == (unsigned char)t1) {
                if (v3 == t2) {
                    v4 = v2;
                    break;
                }
                v3 = v3 + 1;
            }
        }
    }
    return v4;
}

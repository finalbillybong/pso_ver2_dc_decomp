typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void destroy_motion_profile_8c199ef0(void *, short);
extern void call_8c011ed8(int);
int operation_8c199b40(int a0, int a1)
{
    if (a0 != 0) {
        destroy_motion_profile_8c199ef0((void *)a0, (short)0);
        if ((short)a1 > 0) {
            call_8c011ed8(a0);
        }
    }
    return a0;
}

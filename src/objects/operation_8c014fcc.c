typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern char g_8c418280[];
extern void call_8c3c1540(float, float);
void view_set_ofs_wrapper_8c014fcc(void)
{
    call_8c3c1540(*(float *)(g_8c418280 + 0x1c), *(float *)(g_8c418280 + 0x20));
}

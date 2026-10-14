typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int call_8c12b944(void);
int operation_8c17a760(void)
{
    int v1;
    int t1;
    t1 = call_8c12b944();
    v1 = (int)(0.3f <= ((float)t1 / 32768.0f));
    return (int)(v1);
}

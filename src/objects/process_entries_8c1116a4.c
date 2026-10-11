typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
void process_entries_8c1116a4(void)
{
    int v1;
    v1 = 0;
    while (0x19 > v1) {
        *(char *)((char *)0x8c30c888 + (v1 << 6)) = 0;
        v1 = v1 + 1;
    }
}

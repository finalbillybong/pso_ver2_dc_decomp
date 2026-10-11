typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
void process_entries_8c07c428(void)
{
    int v1;
    *(int *)0x8c469ae0 = 0;
    v1 = 0;
    while (0x14 > v1) {
        *(int *)((char *)0x8c469ae4 + (v1 << 2)) = 0;
        v1 = v1 + 1;
    }
}

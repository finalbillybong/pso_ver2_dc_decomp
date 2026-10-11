typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
void process_entries_8c03c180(Object *o)
{
    int v1;
    v1 = 0;
    while (4 > v1) {
        *(char *)((char *)((char *)o + 0x0) + (v1)) = 0;
        v1 = v1 + 1;
    }
}

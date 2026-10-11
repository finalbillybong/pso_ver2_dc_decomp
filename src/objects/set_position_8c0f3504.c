typedef struct Vector3 { float x; float y; float z; } Vector3;
void set_position_8c0f3504(char *o, Vector3 *value)
{
    *(Vector3 *)(o + 0x3c) = *value;
}

/* SDK pool group 0x8c37e990-0x8c37e9a8 (Hitachi SHC): copies three float
   components into a global record. */
typedef struct Record {
    float x;
    float unknown4[2];
    float y;
    float z;
} Record;

extern Record g_vector_8c575528;

void copy_vector_8c37e990(Record *source)
{
    g_vector_8c575528.x = source->x;
    g_vector_8c575528.y = source->y;
    g_vector_8c575528.z = source->z;
}

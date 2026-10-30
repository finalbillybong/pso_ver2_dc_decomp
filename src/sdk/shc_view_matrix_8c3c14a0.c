extern float out_8c5a2128[8];
extern float g_8c575558;
typedef struct { float scale; float f4; float f8; float x; float y; } View;
typedef struct { float x; float y; } Pt;
extern View g_vector_8c575528;
extern float sx_8c57555c;
extern float sy_8c575560;
extern Pt a_8c57554c;
extern Pt b_8c575544;
extern float cam_8c5a20e8[13];

void view_build_8c3c14a0(void)
{
    out_8c5a2128[0] = g_8c575558;
    out_8c5a2128[1] = 1.0f;
    out_8c5a2128[2] = g_vector_8c575528.scale * sx_8c57555c;
    out_8c5a2128[3] = g_vector_8c575528.scale * sy_8c575560;
    out_8c5a2128[4] = a_8c57554c.x - g_vector_8c575528.x;
    out_8c5a2128[5] = b_8c575544.x - g_vector_8c575528.x;
    out_8c5a2128[6] = a_8c57554c.y - g_vector_8c575528.y;
    out_8c5a2128[7] = b_8c575544.y - g_vector_8c575528.y;
}

void view_set_eye_8c3c1500(float x, float y, float z)
{
    cam_8c5a20e8[0] = x;
    cam_8c5a20e8[1] = y;
    cam_8c5a20e8[2] = z;
    cam_8c5a20e8[5] = g_vector_8c575528.scale * sx_8c57555c;
    cam_8c5a20e8[6] = g_vector_8c575528.scale * sy_8c575560;
    cam_8c5a20e8[7] = g_vector_8c575528.x;
    cam_8c5a20e8[8] = g_vector_8c575528.y;
    cam_8c5a20e8[9] = 0.5f;
}

void view_set_ofs_8c3c1540(float a, float b)
{
    cam_8c5a20e8[3] = -a;
    cam_8c5a20e8[4] = b - 1.0f;
}

void view_set_at_8c3c1554(float x, float y, float z)
{
    cam_8c5a20e8[10] = x;
    cam_8c5a20e8[11] = y;
    cam_8c5a20e8[12] = z;
}

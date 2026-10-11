typedef struct Mover { char unknown0[0x34]; int flags; char unknown38[0x2e0]; float x; float y; float z; } Mover;
void reset_offsets_8c1ee6f0(Mover *o)
{
    o->z = 0.0f;
    o->y = 0.0f;
    o->x = 0.0f;
    o->flags |= 0x00100000;
}

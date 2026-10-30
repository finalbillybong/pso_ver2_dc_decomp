/* SDK pool group 0x8c37e7e0 (Hitachi SHC): scales four-float vectors; the
   second function stores a direction and derives four scaled copies of a base
   vector. */
typedef struct Body {
    char unknown0[0x84];
    float scale_base;
    char unknown88[0xb4 - 0x88];
    float base[4];
    float derived_c4[4];
    float derived_d4[4];
    float derived_e4[4];
    char unknownf4[0x128 - 0xf4];
    float scale_c4;
    float scale_d4;
    float scale_e4;
    char unknown134[0x148 - 0x134];
    float direction[4];
} Body;

void scale4_8c37e7e0(float *out, float *in, float scale)
{
    out[0] = in[0] * scale;
    out[1] = in[1] * scale;
    out[2] = in[2] * scale;
    out[3] = in[3] * scale;
}

void set_direction_8c37e800(Body *body, float x, float y, float z)
{
    body->direction[1] = x;
    body->direction[2] = y;
    body->direction[3] = z;
    scale4_8c37e7e0(body->base, body->direction, body->scale_base);
    scale4_8c37e7e0(body->derived_e4, body->base, body->scale_e4);
    scale4_8c37e7e0(body->derived_d4, body->base, body->scale_d4);
    scale4_8c37e7e0(body->derived_c4, body->base, body->scale_c4);
}

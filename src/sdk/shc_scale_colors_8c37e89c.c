/* Scales a base colour into three lighting terms (Hitachi SHC). */
typedef struct Light {
    char unknown0[0x84];
    float intensity;
    char unknown88[0xb4 - 0x88];
    float color[4];
    float ambient[4];
    float diffuse[4];
    float specular[4];
    char unknownf4[0x128 - 0xf4];
    float ambient_scale;
    float diffuse_scale;
    float specular_scale;
    char unknown134[0x148 - 0x134];
    float base[4];
} Light;

void scale4_8c37e89c(float *dst, float *src, float s)
{
    dst[0] = src[0] * s;
    dst[1] = src[1] * s;
    dst[2] = src[2] * s;
    dst[3] = src[3] * s;
}

void light_set_8c37e8bc(Light *l, float specular, float diffuse, float ambient)
{
    l->specular_scale = specular;
    l->diffuse_scale = diffuse;
    l->ambient_scale = ambient;
    scale4_8c37e89c(l->color, l->base, l->intensity);
    scale4_8c37e89c(l->specular, l->color, l->specular_scale);
    scale4_8c37e89c(l->diffuse, l->color, l->diffuse_scale);
    scale4_8c37e89c(l->ambient, l->color, l->ambient_scale);
}

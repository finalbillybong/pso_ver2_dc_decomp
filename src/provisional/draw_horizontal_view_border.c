typedef struct View { char unknown0[72]; float x, y, width; } View;
typedef struct Quad { float x0, y0, x1, y1, u0, v0, u1, v1; } Quad;
typedef struct Transform { char unknown0[32]; float origin_x, origin_y, scale_x, scale_y; char unknown48[4]; float depth; } Transform;
typedef char check_layout[(unsigned long)&((View *)0)->x == 72 && (unsigned long)&((View *)0)->width == 80 && sizeof(Quad) == 32 && (unsigned long)&((Quad *)0)->x1 == 8 && (unsigned long)&((Quad *)0)->u0 == 16 && (unsigned long)&((Quad *)0)->u1 == 24 && (unsigned long)&((Transform *)0)->origin_x == 32 && (unsigned long)&((Transform *)0)->scale_x == 40 && (unsigned long)&((Transform *)0)->depth == 52 ? 1 : -1];
extern void draw_at(Quad *, float);
void draw_horizontal_view_border(View *o, Quad *quad, Transform *transform) {
    float remaining;
    float depth = -1.0f / transform->depth;
    quad->x0 = o->x;
    quad->x1 = o->x + 32.0f;
    quad->u0 = 0.0f;
    quad->u1 = 0.125f;
    quad->x0 = (quad->x0 - transform->origin_x) * transform->scale_x + transform->origin_x;
    quad->x1 = (quad->x1 - transform->origin_x) * transform->scale_x + transform->origin_x;
    draw_at(quad, depth);
    quad->x0 = o->x + o->width - 32.0f;
    quad->x1 = o->x + o->width;
    quad->u0 = 0.25f;
    quad->u1 = 0.375f;
    quad->x0 = (quad->x0 - transform->origin_x) * transform->scale_x + transform->origin_x;
    quad->x1 = (quad->x1 - transform->origin_x) * transform->scale_x + transform->origin_x;
    draw_at(quad, depth);
    quad->x0 = o->x + 32.0f;
    quad->u0 = 0.125f;
    quad->u1 = 0.25f;
    quad->x0 = (quad->x0 - transform->origin_x) * transform->scale_x + transform->origin_x;
    remaining = (o->width - 64.0f) * transform->scale_x;
    while (!(remaining < 0.0f)) {
        if (remaining < 32.0f) {
            quad->x1 = quad->x0 + remaining;
            quad->u1 = (remaining + 32.0f) / 256.0f;
        } else quad->x1 = quad->x0 + 32.0f;
        draw_at(quad, depth);
        remaining -= 32.0f;
        quad->x0 += 32.0f;
    }
}

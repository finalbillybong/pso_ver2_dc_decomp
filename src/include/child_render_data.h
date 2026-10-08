#ifndef PSO_CHILD_RENDER_DATA_H
#define PSO_CHILD_RENDER_DATA_H
/* Observed rectangle and texture-coordinate record; names are provisional. */
typedef struct ChildRenderData {
    float x0, y0, x1, y1;
    float u0, v0, u1, v1;
} ChildRenderData;
/* Observed static part record. Table contents remain reference dependencies. */
typedef struct ChildPart {
    float x, y, width, height, u, v;
} ChildPart;
typedef char check_ChildRenderData_x0[(unsigned long)&((ChildRenderData *)0)->x0 == 0 ? 1 : -1];
typedef char check_ChildRenderData_y0[(unsigned long)&((ChildRenderData *)0)->y0 == 4 ? 1 : -1];
typedef char check_ChildRenderData_x1[(unsigned long)&((ChildRenderData *)0)->x1 == 8 ? 1 : -1];
typedef char check_ChildRenderData_y1[(unsigned long)&((ChildRenderData *)0)->y1 == 12 ? 1 : -1];
typedef char check_ChildRenderData_u0[(unsigned long)&((ChildRenderData *)0)->u0 == 16 ? 1 : -1];
typedef char check_ChildRenderData_v0[(unsigned long)&((ChildRenderData *)0)->v0 == 20 ? 1 : -1];
typedef char check_ChildRenderData_u1[(unsigned long)&((ChildRenderData *)0)->u1 == 24 ? 1 : -1];
typedef char check_ChildRenderData_v1[(unsigned long)&((ChildRenderData *)0)->v1 == 28 ? 1 : -1];
typedef char check_ChildRenderData_size[sizeof(ChildRenderData) == 32 ? 1 : -1];
typedef char check_ChildPart_x[(unsigned long)&((ChildPart *)0)->x == 0 ? 1 : -1];
typedef char check_ChildPart_y[(unsigned long)&((ChildPart *)0)->y == 4 ? 1 : -1];
typedef char check_ChildPart_width[(unsigned long)&((ChildPart *)0)->width == 8 ? 1 : -1];
typedef char check_ChildPart_height[(unsigned long)&((ChildPart *)0)->height == 12 ? 1 : -1];
typedef char check_ChildPart_u[(unsigned long)&((ChildPart *)0)->u == 16 ? 1 : -1];
typedef char check_ChildPart_v[(unsigned long)&((ChildPart *)0)->v == 20 ? 1 : -1];
typedef char check_ChildPart_size[sizeof(ChildPart) == 24 ? 1 : -1];
#endif

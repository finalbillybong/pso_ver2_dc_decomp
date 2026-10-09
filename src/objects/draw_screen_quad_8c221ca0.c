typedef struct Point {float x,y;} Point;
typedef struct Quad {Point *points; unsigned int *colors; void *uv; int count;} Quad;
typedef char check_layout[sizeof(Point)==8 && sizeof(Quad)==16 && (unsigned long)&((Quad *)0)->colors==4 && (unsigned long)&((Quad *)0)->uv==8 && (unsigned long)&((Quad *)0)->count==12 ? 1:-1];
extern void draw(Quad *,int,int,float);
void draw_screen_quad_8c221ca0(void) {
    Quad quad;
    Point points[4];
    unsigned int colors[4];
    quad.points=points;quad.colors=colors;quad.uv=0;quad.count=4;
    quad.points[0].x=0.0f;quad.points[0].y=0.0f;quad.colors[0]=0x00ffffff;
    quad.points[1].x=0.0f;quad.points[1].y=480.0f;quad.colors[1]=0x00ffffff;
    quad.points[2].x=640.0f;quad.points[2].y=480.0f;quad.colors[2]=0x00ffffff;
    quad.points[3].x=640.0f;quad.points[3].y=0.0f;quad.colors[3]=0x00ffffff;
    draw(&quad,4,96,-3.3333332538604736f);
}

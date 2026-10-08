typedef struct View { char unknown0[4]; float top; char unknown8[4]; float height; char unknown16[28]; float scale; } View;
typedef struct Quad { char unknown0[4]; float first; char unknown8[20]; float second; char unknown32[16]; } Quad;
typedef char check_top[(unsigned long)&((View *)0)->top==4?1:-1];
typedef char check_height[(unsigned long)&((View *)0)->height==12?1:-1];
typedef char check_scale[(unsigned long)&((View *)0)->scale==44?1:-1];
typedef char check_view[sizeof(View)==48?1:-1];
typedef char check_first[(unsigned long)&((Quad *)0)->first==4?1:-1];
typedef char check_second[(unsigned long)&((Quad *)0)->second==28?1:-1];
typedef char check_quad[sizeof(Quad)==48?1:-1];
void set_quad_row_coordinates(const View *o,Quad *quad,int row) {
 float half=o->height*0.5f;
 float step=*(float *)0x8c2e153c*o->scale;
 float top=step*(float)row+(o->top+half-half*o->scale);
 float bottom=top+step;
 int i;
 for(i=0;i<4;i++,quad++) { quad->first=top; quad->second=bottom; }
}

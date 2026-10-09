typedef struct Point {float x,y;} Point;
typedef struct Widget Widget;
typedef struct View {char unknown0[72];Point target;} View;
typedef struct Object {char unknown0[32];int index;Widget *widgets[8];char unknown68[48];View *views[2];} Object;
typedef char check_layout[sizeof(Point)==8 && (unsigned long)&((View *)0)->target==72 && (unsigned long)&((Object *)0)->widgets==36 && (unsigned long)&((Object *)0)->views==116 ? 1:-1];
extern void location(Widget *,Point *);extern void *resource(Widget *);extern float first_x,first_y,second_x,second_y,origin,extent,scale;extern int duration;
extern View *create(Point *,Point *,void *,int,float);extern void set_scale(View *,float),initialize(View *),show(View *,int);
void create_selection_row_view(Object *o,int index) {
 Point point,start,end;void *data;View *view;
 location(*(Widget **)((char *)o->widgets+((unsigned int)o->index<<2)),&point);
 data=resource(*(Widget **)((char *)o->widgets+((unsigned int)o->index<<2)));
 if(data) {
  if(index==0) {start.x=first_x;start.y=first_y;} else {start.x=second_x;start.y=second_y;}
  end.x=origin;end.y=start.y;view=create(&start,&end,data,1,extent);
  if(view) {set_scale(view,scale);initialize(view);view->target=point;show(view,duration);*(View **)((char *)o->views+((unsigned int)index<<2))=view;}
 }
}

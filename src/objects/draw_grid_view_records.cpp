struct Base {void *name;char unknown4[20];virtual void unused0();virtual void unused1();virtual void unused2();virtual void unused3();virtual void unused4();virtual void unused5();virtual void configure(void *);virtual void unused7();virtual void unused8();virtual void unused9();virtual void unused10();virtual int visible(float,float);};
struct Vector {float x,y,z;};struct Record {Vector position;float z,x;char unknown20[4];unsigned int flags;char unknown28[16];};struct View:Base {char unknown28[32];Vector position;char unknown72[28];unsigned int color;char unknown104[116];Record *records;int count;};struct Colors {unsigned int first,second,third;};
typedef char check_layout[sizeof(Vector)==12&&sizeof(Colors)==12&&sizeof(Record)==44&&sizeof(Base)==28?1:-1];
typedef char check_Record_z[(unsigned long)&((Record *)0)->z==12?1:-1];
typedef char check_Record_x[(unsigned long)&((Record *)0)->x==16?1:-1];
typedef char check_Record_flags[(unsigned long)&((Record *)0)->flags==24?1:-1];
typedef char check_View_position[(unsigned long)&((View *)0)->position==60?1:-1];
typedef char check_View_color[(unsigned long)&((View *)0)->color==100?1:-1];
typedef char check_View_records[(unsigned long)&((View *)0)->records==220?1:-1];
typedef char check_View_count[(unsigned long)&((View *)0)->count==224?1:-1];
extern "C" {extern char matrix[],selected_style[],normal_style[];void begin_at(void *),position_at(Vector *),color_at(int,unsigned int),transform_at(int,Vector *,Vector *),end_at(void),draw_at(Vector *,Colors *,Vector *,void *);}
extern "C" void draw_grid_view_records(View *o) {if(o->visible(400.0f,300.0f)) {for(int i=0;i<o->count;++i) {Vector extent;Colors colors;Vector position;unsigned int offset=i*44;position=*(Vector *)((char *)o->records+offset);begin_at(matrix);position_at(&o->position);color_at(0,o->color);transform_at(0,&position,&position);end_at();extent.x=*(float *)((char *)&o->records->x+offset);extent.y=40.0f;extent.z=*(float *)((char *)&o->records->z+offset);colors.first=0;colors.second=o->color;colors.third=0;if(*(unsigned int *)((char *)&o->records->flags+offset)&16) draw_at(&position,&colors,&extent,selected_style);else draw_at(&position,&colors,&extent,normal_style);}}}

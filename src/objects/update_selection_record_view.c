typedef struct Record Record;
typedef struct Row {char unknown0[8];float x;char unknown12[4];float width;} Row;
typedef struct View {char unknown0[48];Row **rows;char unknown52[12];float width;} View;
typedef struct Object {char unknown0[112];View *view;} Object;
typedef char check_layout[sizeof(Object)==116 && (unsigned long)&((Object *)0)->view==112 && (unsigned long)&((View *)0)->rows==48 && (unsigned long)&((View *)0)->width==64 && (unsigned long)&((Row *)0)->x==8 && (unsigned long)&((Row *)0)->width==16 ? 1:-1];
extern int mode,context,duration;extern char *selected;extern float origin;extern int normal(Record *,char *,int),script(Record *,char *,int),alternate(Record *,char *,int),second(Record *,char *,int),third(Record *,char *,int);extern void layout(Row *,float),hide(View *,int),show(View *,int);
static inline void dispatch(Record *record,char *selected,int context) {switch(mode) {case 0:normal(record,selected,context);break;case 1:default:script(record,selected,context);break;case 4:alternate(record,selected,context);break;case 2:second(record,selected,context);break;case 3:third(record,selected,context);break;}}
void update_selection_record_view(Object *o,Record *record) {
 View *view;
 dispatch(record,selected,context);
 view=o->view;
 if(view) {Row *row=view->rows[0];if(row) {float extent;layout(row,1000000.0f);extent=row->width+10.0f;if(!(580.0f>extent)) {extent=580.0f;row->x=580.0f-row->width;} else row->x=0.0f;view->width=extent+origin*2.0f;if(extent<=0.0f)hide(view,duration);else show(view,duration);}}
}

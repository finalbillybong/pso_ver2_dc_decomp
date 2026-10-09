typedef struct Context Context;
extern int mode;
extern int normal(Context *,int,int,int),script(Context *,int,int,int),alternate(Context *,int,int,int),second(Context *,int,int,int),third(Context *,int,int,int);
int dispatch_resource_selector(Context *o,int kind,int key,int index) {
 switch(mode) {
 case 0:return normal(o,kind,key,index);
 case 1:default:return script(o,kind,key,index);
 case 4:return alternate(o,kind,key,index);
 case 2:return second(o,kind,key,index);
 case 3:return third(o,kind,key,index);
 }
}

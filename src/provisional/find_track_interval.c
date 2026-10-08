void find_track_interval(char *keys, unsigned int stride, unsigned int count, float frame, unsigned int **first, unsigned int **second, register float *fraction) {
 unsigned int low=0, high=count;
 unsigned int *a, *b;
 int span;
 while(high-low>1) {
  unsigned int middle=(low+high)>>1;
  if((unsigned int)frame>=*(unsigned int *)(keys+middle*stride)) low=middle;
  else high=middle;
 }
 a=(unsigned int *)(keys+low*stride);
 if(low<count-1) b=(unsigned int *)(keys+(low+1)*stride);
 else b=(unsigned int *)keys;
 *first=a;
 *second=b;
 span=*b-*a;
 if(span>0) *fraction=(frame-*a)/span;
 else *fraction=frame-*a;
}

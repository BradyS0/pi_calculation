int c=0;
int dia=500;
float x,y;
void setup(){
  size(500,500);
  frameRate(1000);
  circle(dia/2,dia/2,dia);
  
}

void draw(){
  x=random(dia);
  y=random(dia);
  point(x,y);
  if(dist(x,y,dia/2,dia/2)<=dia/2){
    c++;}

  println(c,frameCount,((double)c/frameCount)*4);
}

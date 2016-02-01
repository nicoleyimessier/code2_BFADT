int rectX, rectY;
int rectW, rectH;

void setup(){
 size(500, 500); 
 rectX = width/2;
 rectY = height/2;
 rectW = 100;
 rectH = 100;
}

void draw(){
  //rect(x, y, w, h);
//  rect(rectX, rectY, rectW, rectH);
//  
//  for(int i=0; i<width; i+=width/10){
//    fill(random(255), random(255), random(255));
//    rect(i, rectY, rectW, rectH);
//  }

circleSquare(width/2, height/2, 100);
  
  if(keyPressed){
   if(key == 's'){
    saveFrame();
   } 
  }
}

void circleSquare(float x, float y, float diam){
  fill(255, 100, 100);
 ellipse(x, y, diam, diam);
 rect(x, y, diam, diam); 
}

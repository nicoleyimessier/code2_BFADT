class Creature{
 // variables for the class
 float size;
 float xPos, yPos;
 float xSpeed, ySpeed; 
 color fur;
 int index;

 //constructor for the class AKA set up the class
 Creature(int tempIndex){
   size =1;
   xPos = width/2;
   yPos = height/2;
   xSpeed = random(-3, 3);
   ySpeed = random(-3, 3);
   fur = color(255, 100, 125);
   index = tempIndex;
 }
 
 //drawing creature
 void giveBirth(){
   xPos = mouseX;
   yPos = mouseY;
   xSpeed = random(-3, 3);
   ySpeed = random(-3, 3);
   println("giving birth to " + index);
 }
 
 //updating the creature
 
 void update(){
  strokeWeight(3);
    stroke(0);
    fill(fur);
    ellipse(xPos, yPos, size*50, size*50);
    fill(255);
    ellipse(xPos -(size*4), yPos-(size*2), size*25, size*10);
    fill(0);
    ellipse(xPos-(size*5), yPos-(size+size*0.5), size*5, size*5);
    line(xPos-(size*16), yPos+(size*10), xPos+(size*11), yPos + (size*10)); 
    
    xPos+=xSpeed;
    yPos+=ySpeed;
 }

// methods for the class 
  
  
  
}

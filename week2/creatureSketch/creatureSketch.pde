int numFriends;
Creature [] friends;


void setup() {
  size(600, 600); 
  numFriends = 10;
  friends = new Creature[numFriends];

  for (int i=0; i<numFriends; i++) {
    friends[i] = new Creature(i);
  }
}

void draw() {


  for (int i=0; i<numFriends; i++) {
    if (mousePressed) {
      friends[i].giveBirth();
    }

    friends[i].update();
  }
}


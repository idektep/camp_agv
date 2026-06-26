void forward() {
  analogWrite(BR_ENA, 200); //Pin speed //backright motor Adjust range value 120-255
  analogWrite(FR_ENB, 200); //Pin speed //frontright motor Adjust range value 120-255
  analogWrite(BL_ENB, 200); //Pin speed //backleft motor Adjust range value 120-255
  analogWrite(FL_ENA, 200); //Pin speed //frontleft motor Adjust range value 120-255

  digitalWrite(MR_IN1, HIGH);  //backright motor
  digitalWrite(MR_IN2, LOW);   //backright motor

  digitalWrite(MR_IN3, HIGH);  //frontright motor
  digitalWrite(MR_IN4, LOW);   //frontright motor

  digitalWrite(ML_IN1, HIGH);  //frontleft motor
  digitalWrite(ML_IN2, LOW);   //frontleft motor

  digitalWrite(ML_IN3, HIGH);  //backleft motor
  digitalWrite(ML_IN4, LOW);   //backleft motor
}

void backward() {
  
}

void slide_left() {
  
}

void slide_right() {
  
}

void slide_left_front() {
  
}

void slide_right_front() {
  
}

void slide_left_back() {
  
}

void slide_right_back() {
  
}

void turn_left() {
  
}

void turn_right() {
  
}

void stop() {
  digitalWrite(MR_IN1, LOW);  //backright motor
  digitalWrite(MR_IN2, LOW);  //backright motor
  digitalWrite(MR_IN3, LOW);  //frontright motor
  digitalWrite(MR_IN4, LOW);  //frontright motor
  digitalWrite(ML_IN1, LOW);  //frontleft motor
  digitalWrite(ML_IN2, LOW);  //frontleft motor
  digitalWrite(ML_IN3, LOW);  //backleft motor
  digitalWrite(ML_IN4, LOW);  //backleft motor
}

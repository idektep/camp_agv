void checkDistance(int collision_distance) {
  while (1) {
    long duration, distance;
    digitalWrite(TRIG, LOW);
    delayMicroseconds(2);
    digitalWrite(TRIG, HIGH);
    delayMicroseconds(5);
    digitalWrite(TRIG, LOW);
    duration = pulseIn(ECHO, HIGH);
    distance = microsecondsToCentimeters(duration);

    Serial.print("distance =  ");  // กำหนดชื่อ
    Serial.println(distance);      // ให้แสดงค่าที่ อ่านได้
    delay(10);
    forward();
    

    if (distance <= collision_distance && distance != 0) {
      stop();
      delay(500);
      break;
    }
  }
}
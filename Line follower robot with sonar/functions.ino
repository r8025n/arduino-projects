void HALT(){
  digitalWrite(r_m_A,LOW);
  digitalWrite(r_m_B,LOW);
  digitalWrite(l_m_C,LOW);
  digitalWrite(l_m_D,LOW);
}

void wall(){
  delay(200);
  unsigned int uS = sonar.ping(); // Send ping, get ping time in microseconds (uS).
  int a = uS / US_ROUNDTRIP_CM;
  
  Serial.print("Ping: ");
  Serial.print(a); // Convert ping time to distance in cm and print result (0 = outside set distance range)
  Serial.println("cm");

}


void sensor_read() {

  s1r = analogRead(s1);
  if ( s1r < 435)  s1r = 0;   //1=black; 0=white
  else s1r = 1;

  s2r = analogRead(s2);
  if ( s2r < 461)  s2r = 0;
  else s2r = 1;

  s3r = analogRead(s3);
  if ( s3r < 473)  s3r = 0;
  else s3r = 1;

  s4r = analogRead(s4);
  if ( s4r < 480)  s4r = 0;
  else s4r = 1;

  s5r = analogRead(s5);
  if ( s5r < 453)  s5r = 0;
  else s5r = 1;

  s6r = analogRead(s6);
  if ( s6r < 437)  s6r = 0;
  else s6r = 1;
  
  s7r = analogRead(s7);
  if ( s7r < 477)  s7r=0;
  else s7r=1;

}


void motor_drive(int r_m_speed,int l_m_speed){
   if(r_m_speed>0){
     r_m_forward(r_m_speed);
   }
   else if(r_m_speed<0){
     r_m_backward(r_m_speed);
   }
   if(l_m_speed>0){
     l_m_forward(l_m_speed);
   }
   else if(l_m_speed<0){
     l_m_backward(l_m_speed);
   }
 }
 
 void r_m_forward(int x){
   analogWrite(EN_A,x);
   digitalWrite(r_m_A,HIGH);
   digitalWrite(r_m_B,LOW);
 }
 
 void r_m_backward(int x){
   analogWrite(EN_A,x);
   digitalWrite(r_m_A,LOW);
   digitalWrite(r_m_B,HIGH);
 }
 
 void l_m_forward(int y){
   analogWrite(EN_B,y);
   digitalWrite(l_m_C,HIGH);
   digitalWrite(l_m_D,LOW);
 }
 
 void l_m_backward(int y){
   analogWrite(EN_B,y);
   digitalWrite(l_m_C,LOW);
   digitalWrite(l_m_D,HIGH);
 }
 

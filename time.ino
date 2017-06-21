void displayHours(int hora){
 int H =  hora / 10 % 10;
 int h = hora % 10;
 prendeLedsH(H);
 prendeLeds_h(h);
}

void displayMinutes(int minutos){
 int M =  minutos / 10 % 10;
 int m = minutos % 10;
 prendeLedsM(M);
 prendeLeds_m(m);
}

void prendeLedsH(int H){
 Serial.print(H);
 switch (H) {
    case 0:
      digitalWrite(H1, LOW);
      digitalWrite(H2, LOW);
      break;
    case 1:
      digitalWrite(H1, HIGH);
      digitalWrite(H2, LOW);
      break;
    case 2:
      digitalWrite(H1, LOW);
      digitalWrite(H2, HIGH);
      break;
    default: 
      // if nothing else matches, do the default
      // default is optional
    break;
  }
}

void prendeLeds_h(int h){
  Serial.print(h);
  switch (h) {
    case 0:
      digitalWrite(h1, LOW);
      digitalWrite(h2, LOW);
      digitalWrite(h4, LOW);
      digitalWrite(h8, LOW);
      break;
    case 1:
      digitalWrite(h1, HIGH);
      digitalWrite(h2, LOW);
      digitalWrite(h4, LOW);
      digitalWrite(h8, LOW);
      break;
    case 2:
      digitalWrite(h1, LOW);
      digitalWrite(h2, HIGH);
      digitalWrite(h4, LOW);
      digitalWrite(h8, LOW);
      break;
    case 3:
      digitalWrite(h1, HIGH);
      digitalWrite(h2, HIGH);
      digitalWrite(h4, LOW);
      digitalWrite(h8, LOW);
      break;
    case 4:
      digitalWrite(h1, LOW);
      digitalWrite(h2, LOW);
      digitalWrite(h4, HIGH);
      digitalWrite(h8, LOW);
      break;
    case 5:
      digitalWrite(h1, HIGH);
      digitalWrite(h2, LOW);
      digitalWrite(h4, HIGH);
      digitalWrite(h8, LOW);
      break;
    case 6:
      digitalWrite(h1, LOW);
      digitalWrite(h2, HIGH);
      digitalWrite(h4, HIGH);
      digitalWrite(h8, LOW);
      break;
    case 7:
      digitalWrite(h1, HIGH);
      digitalWrite(h2, HIGH);
      digitalWrite(h4, HIGH);
      digitalWrite(h8, LOW);
      break;
    case 8:
      digitalWrite(h1, LOW);
      digitalWrite(h2, LOW);
      digitalWrite(h4, LOW);
      digitalWrite(h8, HIGH);
      break;
    case 9:
      digitalWrite(h1, HIGH);
      digitalWrite(h2, LOW);
      digitalWrite(h4, LOW);
      digitalWrite(h8, HIGH);
      break;
    default: 
      // if nothing else matches, do the default
      // default is optional
    break;
  }
}

void prendeLedsM(int M){
 Serial.print(M);
 switch (M) {
    case 0:
      digitalWrite(M1, LOW);
      digitalWrite(M2, LOW);
      digitalWrite(M4, LOW);
      break;
    case 1:
      digitalWrite(M1, HIGH);
      digitalWrite(M2, LOW);
      digitalWrite(M4, LOW);
      break;
    case 2:
      digitalWrite(M1, LOW);
      digitalWrite(M2, HIGH);
      digitalWrite(M4, LOW);
      break;
    case 3:
      digitalWrite(M1, HIGH);
      digitalWrite(M2, HIGH);
      digitalWrite(M4, LOW);
      break;
    case 4:
      digitalWrite(M1, LOW);
      digitalWrite(M2, LOW);
      digitalWrite(M4, HIGH);
      break;
    case 5:
      digitalWrite(M1, HIGH);
      digitalWrite(M2, LOW);
      digitalWrite(M4, HIGH);
      break;
    default: 
      // if nothing else matches, do the default
      // default is optional
    break;
  }
}

void prendeLeds_m(int m){
  Serial.print(m);
  switch (m) {
    case 0:
      digitalWrite(m1, LOW);
      digitalWrite(m2, LOW);
      digitalWrite(m4, LOW);
      digitalWrite(m8, LOW);
      break;
    case 1:
      digitalWrite(m1, HIGH);
      digitalWrite(m2, LOW);
      digitalWrite(m4, LOW);
      digitalWrite(m8, LOW);
      break;
    case 2:
      digitalWrite(m1, LOW);
      digitalWrite(m2, HIGH);
      digitalWrite(m4, LOW);
      digitalWrite(m8, LOW);
      break;
    case 3:
      digitalWrite(m1, HIGH);
      digitalWrite(m2, HIGH);
      digitalWrite(m4, LOW);
      digitalWrite(m8, LOW);
      break;
    case 4:
      digitalWrite(m1, LOW);
      digitalWrite(m2, LOW);
      digitalWrite(m4, HIGH);
      digitalWrite(m8, LOW);
      break;
    case 5:
      digitalWrite(m1, HIGH);
      digitalWrite(m2, LOW);
      digitalWrite(m4, HIGH);
      digitalWrite(m8, LOW);
      break;
    case 6:
      digitalWrite(m1, LOW);
      digitalWrite(m2, HIGH);
      digitalWrite(m4, HIGH);
      digitalWrite(m8, LOW);
      break;
    case 7:
      digitalWrite(m1, HIGH);
      digitalWrite(m2, HIGH);
      digitalWrite(m4, HIGH);
      digitalWrite(m8, LOW);
      break;
    case 8:
      digitalWrite(m1, LOW);
      digitalWrite(m2, LOW);
      digitalWrite(m4, LOW);
      digitalWrite(m8, HIGH);
      break;
    case 9:
      digitalWrite(m1, HIGH);
      digitalWrite(m2, LOW);
      digitalWrite(m4, LOW);
      digitalWrite(m8, HIGH);
      break;
    default: 
      // if nothing else matches, do the default
      // default is optional
    break;
  }
}

void segundero(){
    digitalWrite(A3, HIGH);
    delay(500);
    digitalWrite(A3, LOW);
  }

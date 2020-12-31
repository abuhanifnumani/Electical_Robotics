int ina1 = 9, ina2 = 10, inb1 = 3, inb2 = 12, ena = 7, enb = 4;
int c1, c2, c3, c4, c5, c6, t1, t2, t3, t4, t5, t6, dif1, dif2, dif3, dif4, dif5, dif6, calib_flag, sen1, sen2, sen3, sen4, sen5, sen6, surface, cs1, cs2, cs3, cs4, cs5, cs6, s_ch1, s_ch2, s_ch3, s_ch4, s_ch5, s_ch6;
int sw1 = 14, sw2 = 15, sw3 = 16, sw4 = 46, sw5 = 14, s1, s2, s3, s4, s5;
int l1 = 37, l2 = 36, l3 = 35, l4 = 34, l5 = 33, l6 = 32;
int sp_l = 100, sp_r = 100, plus_flag;
int dif_const = 300; // calibration difference value
int v_del = 270, t_del = 140, str_t = 150, t_br = 60, t_st_br = 20, v_st_br = 230, v_br = 20, v_st_del = 0;
int fro_ec = 22, lef_ec = 24, fro_tri = 23, lef_tri = 25, front, left;
void setup() {

  Serial.begin(9600);
  calib_flag = 0;

  // put your setup code here, to run once:
  pinMode(fro_tri, OUTPUT);
  pinMode(lef_tri, OUTPUT);
  pinMode(fro_ec, INPUT);
  pinMode(lef_ec, INPUT);
  pinMode(ina1, OUTPUT);
  pinMode(ina2, OUTPUT);
  pinMode(inb1, OUTPUT);
  pinMode(inb2, OUTPUT);
  pinMode(ena, OUTPUT);
  pinMode(enb, OUTPUT);
  pinMode(l1, OUTPUT);
  pinMode(l2, OUTPUT);
  pinMode(l3, OUTPUT);
  pinMode(l4, OUTPUT);
  pinMode(l5, OUTPUT);
  pinMode(l6, OUTPUT);
  pinMode(sw1, INPUT);
  pinMode(sw2, INPUT);
  pinMode(sw3, INPUT);
  pinMode(sw4, INPUT);
  pinMode(sw5, INPUT);
  //move(250,250);
}

void loop() {
  
  move(250,250);
}
